#include "MyForm.h"
#include "Method.h"

using namespace System;
using namespace System::Windows::Forms;


bool test = false;
bool basic1 = false;
bool basic2 = false;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
}

std::vector<std::vector<double>> res;

System::Void Project1::MyForm::button1_Click_2(System::Object^ sender, System::EventArgs^ e)
{
	res.clear();
	this->dataGridView1->Rows->Clear();
	double x_0 = Convert::ToDouble(_X0->Text);
	double u_0 = Convert::ToDouble(_U0->Text);
	double h_0 = Convert::ToDouble(_h0->Text);
	double eps_gr = Convert::ToDouble(eps_limit->Text);
	double x_last = Convert::ToDouble(x_b->Text);
	int Nmax = Convert::ToInt32(Nmax_шагов->Text);
	bool klp = Convert::ToBoolean(checkBox1->Checked);

	int selected_type = Convert::ToInt32(comboBox1->SelectedIndex);
	double eps_klp = Convert::ToDouble(_eps_klp->Text);

	if (selected_type == 0) {	//тестовая

		res = counting_values_for_test(x_0, u_0, h_0, x_last, eps_gr, Nmax, klp, eps_klp);

		if (klp == false) {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_0), "---", "---", "---",
				Convert::ToString(h_0), "---", "---", Convert::ToString(u_0), "0");
		}
		else {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_0), Convert::ToString(u_0), "0", "0",
				Convert::ToString(h_0), "0", "0", Convert::ToString(u_0), "0");
			this->chart1->Series[2]->Points->AddXY(x_0, u_0);
		}

		this->chart1->Series[0]->Points->AddXY(x_0, u_0);
		this->chart1->Series[1]->Points->AddXY(x_0, u_0);


		for (int i = 0; i < res.size(); i++) {
			this->dataGridView1->Rows->Add();
			for (int j = 0; j < 11; j++) {

				if (klp == false) {
					if (j < 3 || j == 6 || j == 9 || j == 10)
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];
					else this->dataGridView1->Rows[i + 1]->Cells[j]->Value = "---";
				}
				else this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];

			}
			this->chart1->Series[0]->Points->AddXY(res[i][1], res[i][2]);
			this->chart1->Series[1]->Points->AddXY(res[i][1], res[i][9]);
			if (klp == true)
				this->chart1->Series[2]->Points->AddXY(res[i][1], res[i][3]);

		}
		// Добавлем фиктивную точку
		this->chart1->Series[0]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][2]);
		int cnt1 = this->chart1->Series[0]->Points->Count;
		this->chart1->Series[0]->Points[cnt1 - 1]->IsEmpty = true;

		this->chart1->Series[1]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][9]);
		int cnt2 = this->chart1->Series[1]->Points->Count;
		this->chart1->Series[1]->Points[cnt2 - 1]->IsEmpty = true;

		if (klp) {
			this->chart1->Series[2]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][3]);
			int cnt3 = this->chart1->Series[2]->Points->Count;
			this->chart1->Series[2]->Points[cnt3 - 1]->IsEmpty = true;
		}
	}

	if (selected_type == 1) {	//основная №1

		res = counting_values_for_main1(x_0, u_0, h_0, x_last, eps_gr, Nmax, klp, eps_klp);

		if (klp == false) {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_0), "---", "---", "---",
				Convert::ToString(h_0), "---", "---","---", "---");
		}
		else {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_0), Convert::ToString(u_0), "0", "0",
				Convert::ToString(h_0), "0", "0", "---", "---");
			this->chart1->Series[2]->Points->AddXY(x_0, u_0);
		}

		this->chart1->Series[0]->Points->AddXY(x_0, u_0);


		for (int i = 0; i < res.size(); i++) {
			this->dataGridView1->Rows->Add();
			for (int j = 0; j < 11; j++) {

				if (klp == false) {
					if (j < 3 || j == 6)
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];
					else this->dataGridView1->Rows[i + 1]->Cells[j]->Value = "---";
				}
				else {
					if (j == 9 || j == 10)
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = "---";
					else
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];
				}

			}
			this->chart1->Series[0]->Points->AddXY(res[i][1], res[i][2]);
			if (klp == true)
				this->chart1->Series[2]->Points->AddXY(res[i][1], res[i][3]);

		}
		// Добавлем фиктивную точку
		this->chart1->Series[0]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][2]);
		int cnt1 = this->chart1->Series[0]->Points->Count;
		this->chart1->Series[0]->Points[cnt1 - 1]->IsEmpty = true;

		if (klp) {
			this->chart1->Series[2]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][3]);
			int cnt3 = this->chart1->Series[2]->Points->Count;
			this->chart1->Series[2]->Points[cnt3 - 1]->IsEmpty = true;
		}
	}

	if (selected_type == 2) {

		double u_01 = u_0;
		double u_02 = Convert::ToDouble(du0->Text);
		double a = Convert::ToDouble(textA->Text);

		res = counting_values_for_main2(x_0, u_01, u_02, h_0, x_last, eps_gr, Nmax, klp, eps_klp, a);
		int dv = Convert::ToInt32(comboBox2->SelectedIndex);

		if (klp == false) {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_01), "---", "---", "---",
				Convert::ToString(h_0), "---", "---", "---", "---");
		}
		else {
			this->dataGridView1->Rows->Add("0", Convert::ToString(x_0), Convert::ToString(u_01), Convert::ToString(u_01), "0", "0",
				Convert::ToString(h_0), "0", "0", "---", "---");
			if (dv == 0) this->chart1->Series[2]->Points->AddXY(x_0, u_0);
		}

		if (dv == 0) {
			this->chart1->Series[0]->Points->AddXY(x_0, u_0);
		}
		if (dv == 1) {
			this->chart1->Series[0]->Points->AddXY(x_0, u_02);
		}
		if (dv == 2) {
			this->chart1->Series[0]->Points->AddXY(u_01, u_02);
		}


		for (int i = 0; i < res.size(); i++) {
			this->dataGridView1->Rows->Add();
			for (int j = 0; j < 11; j++) {

				if (klp == false) {
					if (j < 3 || j == 6)
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];
					else this->dataGridView1->Rows[i + 1]->Cells[j]->Value = "---";
				}
				else {
					if (j == 9 || j == 10)
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = "---";
					else
						this->dataGridView1->Rows[i + 1]->Cells[j]->Value = res[i][j];
				}

			}

			if (dv == 0) {
				this->chart1->Series[0]->Points->AddXY(res[i][1], res[i][2]);
				if (klp == true)
					this->chart1->Series[2]->Points->AddXY(res[i][1], res[i][3]);
			}
			if (dv == 1){
				this->chart1->Series[0]->Points->AddXY(res[i][1], res[i][11]);
			}

			if (dv == 2) {
				this->chart1->Series[0]->Points->AddXY(res[i][2], res[i][11]);
			}

		}

		if (dv == 0) {
			// Добавлем фиктивную точку
			this->chart1->Series[0]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][2]);
			int cnt1 = this->chart1->Series[0]->Points->Count;
			this->chart1->Series[0]->Points[cnt1 - 1]->IsEmpty = true;

			if (klp) {
				this->chart1->Series[2]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][3]);
				int cnt3 = this->chart1->Series[2]->Points->Count;
				this->chart1->Series[2]->Points[cnt3 - 1]->IsEmpty = true;
			}
		}
		else {
			// Добавлем фиктивную точку
			if (dv == 1) {
				this->chart1->Series[0]->Points->AddXY(res[res.size() - 1][1], res[res.size() - 1][11]);
				int cnt1 = this->chart1->Series[0]->Points->Count;
				this->chart1->Series[0]->Points[cnt1 - 1]->IsEmpty = true;
			}
			else {
				this->chart1->Series[2]->Points->AddXY(res[res.size() - 1][2], res[res.size() - 1][11]);
				int cnt3 = this->chart1->Series[2]->Points->Count;
				this->chart1->Series[2]->Points[cnt3 - 1]->IsEmpty = true;
			}
			
		}
	}
	

	double max_olp = 0;
	this->Nmax->Text = Convert::ToString(res.size());
	this->b_xn->Text = Convert::ToString(x_last - res[res.size() - 1][1]);
	double maxhi = h_0, maxhxi = x_0;
	double minhi = h_0, minhxi = x_0;
	int c1 = 0, c2 = 0;
	double dif_ui_vi = 0;
	double xdif = x_0;

	for (int i = 0; i < res.size(); i++) {
		if (std::abs(res[i][5]) > max_olp + 1e-18) max_olp = std::abs(res[i][5]);

		if (res[i][6] > maxhi + 1e-12) {
			maxhi = res[i][6];
			maxhxi = res[i][1];
		}
		if (res[i][6] + 1e-12 < minhi) {
			minhi = res[i][6];
			minhxi = res[i][1];
		}

		c1 += res[i][7];
		c2 += res[i][8];

		if (res[i][6] > dif_ui_vi + 1e-12) {
			dif_ui_vi = res[i][10];
			xdif = res[i][1];
		}
	}

	this->maxh->Text = Convert::ToString(maxhi);
	this->maxhx->Text = Convert::ToString(maxhxi);

	this->minh->Text = Convert::ToString(minhi);
	this->minhx->Text = Convert::ToString(minhxi);

	this->maxOLP->Text = Convert::ToString(max_olp);

	this->multtwo->Text = Convert::ToString(c2);
	this->div2->Text = Convert::ToString(c1);

	this->max_ui_vi->Text = Convert::ToString(dif_ui_vi);
	this->max_dif_x->Text = Convert::ToString(xdif);

	return System::Void();
}


System::Void Project1::MyForm::checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	bool k = Convert::ToBoolean(checkBox1->Checked);
	this->_eps_klp->Visible = k;
	this->label7->Visible = k;
	this->label15->Visible = k;
	this->maxOLP->Visible = k;
	this->label21->Visible = k;
	this->label22->Visible = k;
	this->multtwo->Visible = k;
	this->div2->Visible = k;
	return System::Void();
}

System::Void Project1::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1->Rows->Clear();
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	this->chart1->Series[2]->Points->Clear();
	return System::Void();
}

System::Void Project1::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{	
	int b = Convert::ToInt32(comboBox1->SelectedIndex);
	if (b == 2) {
		this->label11->Visible = true;
		this->du0->Visible = true;
		this->label12->Visible = true;
		this->textA->Visible = true;
		this->comboBox2->Visible = true;
		this->label23->Visible = false;
		this->label24->Visible = false;
		this->max_ui_vi->Visible = false;
		this->max_dif_x->Visible = false;
	}
	else {
		this->label11->Visible = false;
		this->du0->Visible = false;
		this->label12->Visible = false;
		this->textA->Visible = false;
		this->comboBox2->Visible = false;
		this->label23->Visible = false;
		this->label24->Visible = false;
		this->max_ui_vi->Visible = false;
		this->max_dif_x->Visible = false;
		if (b == 0) {
			this->label23->Visible = true;
			this->label24->Visible = true;
			this->max_ui_vi->Visible = true;
			this->max_dif_x->Visible = true;
		}
	}
	return System::Void();
}

System::Void Project1::MyForm::exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Project1::MyForm::comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
