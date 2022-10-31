#pragma once

#include <vector>
#include <iomanip>
#include <cmath>


//------------------------------------------ TEST ------------------------------------------------------

double f_test(double x, double v) {
	return (-1) * 0.5 * v;
}

double u_test(double xn, double C) {
	return 1.0 / sqrt(C * exp(xn));
}

double vn_1_test(double hn, double xn, double vn) {

	double k1, k2, k3, k4;

	k1 = f_test(xn, vn);
	k2 = f_test(xn + hn / 2, vn + hn / 2 * k1);
	k3 = f_test(xn + hn / 2, vn + hn / 2 * k2);
	k4 = f_test(xn + hn, vn + hn * k3);

	return vn + hn / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

std::vector<std::vector<double>> counting_values_for_test(double x0, double v0, double h0,
	double x_last, double eps_gr, int Nmax, bool klp, double eps_klp) {

	//-2ln(u) = x+c
	// exp(-2ln(u)-x) = C
	double C = exp((-2.0) * log(abs(v0)) - x0);
	double x = x0, v = v0, h = h0;

	//x += h;
	double u;
	int it = 0;

	std::vector<std::vector<double>> res;

	if (klp == false) {

		v = vn_1_test(h, x0, v0);
		u = u_test(x0 + h, C);
		x += h;
		bool check = false;

		while (x_last - x > eps_gr && it < Nmax) {

			res.push_back(std::vector<double>({ double(it + 1), x, v, 0, 0, 0, h, 0, 0, u, abs(u - v) }));

			if (x < x_last - eps_gr && x_last < x + h) {
				h = (x_last - eps_gr / 2) - x;
				check = true;
			}

			v = vn_1_test(h, x, v);
			u = u_test(x + h, C);
			x += h;

			it++;
			if (check) {
				res.push_back(std::vector<double>({ double(it + 1), x, v, 0, 0, 0, h, 0, 0, u, abs(u - v) }));
				break;
			}
		}

	}
	else {

		double v_half1 = 0, v2 = 0;
		int C1 = 0, C2 = 0;

		double pr_v = v0;

		while (x_last - x > eps_gr && it < Nmax) {

			v = vn_1_test(h, x, pr_v);
			u = u_test(x + h, C);

			v_half1 = vn_1_test(h / 2, x, pr_v);
			v2 = vn_1_test(h / 2, x + h / 2, v_half1);

			x += h;

			double S = (v2 - v) / 15;	    // делим на 2^p - 1, где p = 4 - пор€док метода – 

			if (std::abs(S) > eps_klp) {	//пересчитываем
				x -= h;	
				h /= 2;
				C1++;			//уменьшили шаг вдвое
			}
			else {
				if (std::abs(S) < eps_klp / 32) {	//принимаем, но увеличиваем шаг вдвое
					C2++;
					h *= 2;
				}

				res.push_back(std::vector<double>({ double(it + 1), x, v, v2, v - v2, S*16, h, double(C1), double(C2), u, std::abs(u - v) }));
				C1 = C2 = 0;

				if (x < x_last - eps_gr && x_last < x + h) {
					h = (x_last - eps_gr / 2) - x;
				}

				pr_v = v;
				it++;
			}

		}
	}
	return res;
}

//------------------------------------------- MAIN1 --------------------------------------------------------

double f(double x, double v) {
	return (1/(x*x*x*x+1))*v*v + v - v*v*v*sin(10*x);
}

double vn_1(double hn, double xn, double vn) {

	double k1, k2, k3, k4;

	k1 = f(xn, vn);
	k2 = f(xn + hn / 2, vn + hn / 2 * k1);
	k3 = f(xn + hn / 2, vn + hn / 2 * k2);
	k4 = f(xn + hn, vn + hn * k3);

	return vn + hn / 6 * (k1 + 2 * k2 + 2 * k3 + k4);
}

std::vector<std::vector<double>> counting_values_for_main1(double x0, double v0, double h0,
				double x_last, double eps_gr, int Nmax, bool klp, double eps_klp) {

	double x = x0, v = v0, h = h0;
	int it = 0;

	std::vector<std::vector<double>> res;

	if (klp == false) {

		v = vn_1(h, x0, v0);
		x += h;
		bool check = false;

		while (x_last - x > eps_gr && it < Nmax) {

			res.push_back(std::vector<double>({ double(it + 1), x, v, 0, 0, 0, h, 0, 0, 0, 0 }));

			if (x < x_last - eps_gr && x_last < x + h) {
				h = (x_last - eps_gr / 2) - x;
				check = true;
			}

			v = vn_1(h, x, v);
			x += h;

			it++;
			if (check) {
				res.push_back(std::vector<double>({ double(it + 1), x, v, 0, 0, 0, h, 0, 0, 0, 0 }));
				break;
			}
		}

	}
	else {

		double v_half1 = 0, v2 = 0;
		int C1 = 0, C2 = 0;

		double pr_v = v0;

		while (x_last - x > eps_gr && it < Nmax) {

			v = vn_1(h, x, pr_v);

			v_half1 = vn_1(h / 2, x, pr_v);
			v2 = vn_1(h / 2, x + h / 2, v_half1);

			x += h;

			double S = (v2 - v) / 15;	    // делим на 2^p - 1, где p = 4 - пор€док метода – 

			if (std::abs(S) > eps_klp) {	//пересчитываем
				x -= h;
				h /= 2;
				C1++;			//уменьшили шаг вдвое
			}
			else {
				if (std::abs(S) < eps_klp / 32) {	//принимаем, но увеличиваем шаг вдвое
					C2++;
					h *= 2;
				}

				res.push_back(std::vector<double>({ double(it + 1), x, v, v2, v - v2, S*16, h, double(C1), double(C2), 0, 0 }));
				C1 = C2 = 0;

				if (x < x_last - eps_gr && x_last < x + h) {
					h = (x_last - eps_gr / 2) - x;
				}

				pr_v = v;
				it++;
			}

		}
	}


	return res;
}


//------------------------------------------------- MAIN2 ------------------------------------------------------


// dv1/dx = v2;
// dv2/dx = -a*sin(v1); 

std::pair<double, double> f12(double x, double v1, double v2, double a) {
	return { v2, -a * sin(v1) };
}

std::pair<double, double> vn_1_for_main2(double hn, double xn, double vn1, double vn2, double a) {

	std::pair<double, double> k1, k2, k3, k4;

	k1 = f12(xn, vn1, vn2, a);
	k2 = f12(xn + hn / 2, vn1 + hn / 2 * k1.first, vn2 + hn / 2 * k1.second, a);
	k3 = f12(xn + hn / 2, vn1 + hn / 2 * k2.first, vn2 + hn / 2 * k2.second, a);
	k4 = f12(xn + hn, vn1 + hn * k3.first, vn2 + hn * k3.second, a);

	return { vn1 + hn / 6 * (k1.first + 2 * k2.first + 2 * k3.first + k4.first),  
		vn2 + hn / 6 * (k1.second + 2 * k2.second + 2 * k3.second + k4.second) };
}


std::vector<std::vector<double>> counting_values_for_main2(double x0, double v01, double v02, double h0,
	double x_last, double eps_gr, int Nmax, bool klp, double eps_klp, double a) {

	double x = x0, h = h0;
	std::pair<double, double> v;
	int it = 0;

	std::vector<std::vector<double>> res;

	if (klp == false) {

		v = vn_1_for_main2(h, x0, v01, v02, a);
		x += h;
		bool check = false;

		while (x_last - x > eps_gr && it < Nmax) {

			res.push_back(std::vector<double>({ double(it + 1), x, v.first, 0, 0, 0, h, 0, 0, 0, 0 }));

			if (x < x_last - eps_gr && x_last < x + h) {
				h = (x_last - eps_gr / 2) - x;
				check = true;
			}

			v = vn_1_for_main2(h, x, v.first, v.second, a);
			x += h;

			it++;
			if (check) {
				res.push_back(std::vector<double>({ double(it + 1), x, v.first, 0, 0, 0, h, 0, 0, 0, 0 }));
				break;
			}
		}

	}
	else {

		std::pair<double, double> v_half1 = { 0, 0 }, v2 = { 0, 0 };
		int C1 = 0, C2 = 0;

		std::pair<double, double> pr_v = { v01, v02 };

		while (x_last - x > eps_gr && it < Nmax) {

			v = vn_1_for_main2(h, x, pr_v.first, pr_v.second, a);

			v_half1 = vn_1_for_main2(h / 2, x, pr_v.first, pr_v.second, a);
			v2 = vn_1_for_main2(h / 2, x + h / 2, v_half1.first, v_half1.second, a);

			x += h;

			double S1 = (v2.first - v.first) / 15;	    // делим на 2^p - 1, где p = 4 - пор€док метода – 
			double S2 = (v2.first - v.first) / 15;
			double S = std::max(std::abs(S1), std::abs(S2));

			if (std::abs(S) > eps_klp) {	//пересчитываем
				x -= h;
				h /= 2;
				C1++;			//уменьшили шаг вдвое
			}
			else {
				if (std::abs(S) < eps_klp / 32) {	//принимаем, но увеличиваем шаг вдвое
					C2++;
					h *= 2;
				}

				res.push_back(std::vector<double>({ double(it + 1), x, v.first, v2.first, v.first - v2.first,
					S*16, h, double(C1), double(C2), 0, 0, v.second}));
				C1 = C2 = 0;

				if (x < x_last - eps_gr && x_last < x + h) {
					h = (x_last - eps_gr / 2) - x;
				}

				pr_v = v;
				it++;
			}

		}
	}


	return res;
}