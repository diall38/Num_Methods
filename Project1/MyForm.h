#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ count;








	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ _U0;

	private: System::Windows::Forms::TextBox^ _X0;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;











	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;











	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ Nmax_шагов;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ _eps_klp;


	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::TextBox^ eps_limit;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ _h0;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Nmax;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox1;











private: System::Windows::Forms::TextBox^ du0;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textA;

private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ x_b;
private: System::Windows::Forms::TextBox^ maxOLP;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ b_xn;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ maxhx;




private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ maxh;



private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ minhx;



private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ minh;


private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ div2;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ multtwo;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ max_ui_vi;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ max_dif_x;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Button^ exit;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Xi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vwith_wave;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Difference;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ S;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ui;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ui_vi;





















































































	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textA = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Nmax_шагов = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->_eps_klp = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->eps_limit = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->_h0 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->x_b = (gcnew System::Windows::Forms::TextBox());
			this->du0 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->_X0 = (gcnew System::Windows::Forms::TextBox());
			this->_U0 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->max_dif_x = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->max_ui_vi = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->div2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->multtwo = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->minhx = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->minh = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->maxhx = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->maxh = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->b_xn = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->maxOLP = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Nmax = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->count = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vwith_wave = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Difference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ui_vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(24, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Выберите задачу:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-3, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1920, 995);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Beige;
			this->tabPage1->Controls->Add(this->exit);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->clear);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->count);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1912, 962);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Численный расчёт";
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::LightCoral;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->exit->Location = System::Drawing::Point(548, 27);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(140, 43);
			this->exit->TabIndex = 29;
			this->exit->Text = L"Выход";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"1";
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"v(x)", L"v\'(x)", L"v\'(v)" });
			this->comboBox2->Location = System::Drawing::Point(1580, 444);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(123, 30);
			this->comboBox2->TabIndex = 28;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->textA);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->Nmax_шагов);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->_eps_klp);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->eps_limit);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->_h0);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->groupBox3->Location = System::Drawing::Point(28, 87);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(656, 196);
			this->groupBox3->TabIndex = 27;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры метода";
			// 
			// textA
			// 
			this->textA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->textA->Location = System::Drawing::Point(563, 83);
			this->textA->Name = L"textA";
			this->textA->Size = System::Drawing::Size(73, 28);
			this->textA->TabIndex = 27;
			this->textA->Text = L"1";
			this->textA->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label12->Location = System::Drawing::Point(373, 84);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 22);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Параметр а";
			this->label12->Visible = false;
			// 
			// Nmax_шагов
			// 
			this->Nmax_шагов->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Nmax_шагов->Location = System::Drawing::Point(563, 32);
			this->Nmax_шагов->Name = L"Nmax_шагов";
			this->Nmax_шагов->Size = System::Drawing::Size(73, 28);
			this->Nmax_шагов->TabIndex = 25;
			this->Nmax_шагов->Text = L"1000";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(373, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(166, 22);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Nmax число шагов";
			// 
			// _eps_klp
			// 
			this->_eps_klp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->_eps_klp->Location = System::Drawing::Point(352, 154);
			this->_eps_klp->Name = L"_eps_klp";
			this->_eps_klp->Size = System::Drawing::Size(73, 28);
			this->_eps_klp->TabIndex = 23;
			this->_eps_klp->Text = L"1E-13";
			this->_eps_klp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(6, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(329, 22);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Контроль локальной погрешности eps";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// eps_limit
			// 
			this->eps_limit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->eps_limit->Location = System::Drawing::Point(244, 84);
			this->eps_limit->Name = L"eps_limit";
			this->eps_limit->Size = System::Drawing::Size(73, 28);
			this->eps_limit->TabIndex = 19;
			this->eps_limit->Text = L"1E-3";
			this->eps_limit->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(8, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 44);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Контроль выхода \r\nна правую границу eps_гр";
			// 
			// _h0
			// 
			this->_h0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->_h0->Location = System::Drawing::Point(244, 35);
			this->_h0->Name = L"_h0";
			this->_h0->Size = System::Drawing::Size(73, 28);
			this->_h0->TabIndex = 17;
			this->_h0->Text = L"0,001";
			this->_h0->TextChanged += gcnew System::EventHandler(this, &MyForm::_h0_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(8, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 22);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Начальный шаг";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->checkBox1->Location = System::Drawing::Point(10, 130);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(321, 26);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Контроль локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged_1);
			// 
			// chart1
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(964, 295);
			this->chart1->Name = L"chart1";
			series10->BorderWidth = 2;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Legend = L"Legend1";
			series10->Name = L"Численное решение";
			series11->BorderWidth = 2;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Legend = L"Legend1";
			series11->Name = L"Истинное решение";
			series12->BorderWidth = 2;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Legend = L"Legend1";
			series12->Name = L"Численное решение с двойным шагом";
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Size = System::Drawing::Size(920, 661);
			this->chart1->TabIndex = 7;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Тестовая", L"Основная 1", L"Основная 2" });
			this->comboBox1->Location = System::Drawing::Point(28, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 28);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->Xi,
					this->Vi, this->Vwith_wave, this->Difference, this->S, this->hi, this->C1, this->C2, this->ui, this->ui_vi
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 306);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(957, 650);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::SandyBrown;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->clear->Location = System::Drawing::Point(394, 27);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(148, 43);
			this->clear->TabIndex = 16;
			this->clear->Text = L"Очистить";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->x_b);
			this->groupBox2->Controls->Add(this->du0);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->_X0);
			this->groupBox2->Controls->Add(this->_U0);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->groupBox2->Location = System::Drawing::Point(703, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(231, 231);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Начальные условия";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label14->Location = System::Drawing::Point(107, 119);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 22);
			this->label14->TabIndex = 26;
			this->label14->Text = L";";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label13->Location = System::Drawing::Point(206, 113);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 22);
			this->label13->TabIndex = 25;
			this->label13->Text = L"]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(9, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 22);
			this->label6->TabIndex = 24;
			this->label6->Text = L"[";
			// 
			// x_b
			// 
			this->x_b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->x_b->Location = System::Drawing::Point(127, 113);
			this->x_b->Name = L"x_b";
			this->x_b->Size = System::Drawing::Size(73, 28);
			this->x_b->TabIndex = 23;
			this->x_b->Text = L"1";
			// 
			// du0
			// 
			this->du0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->du0->Location = System::Drawing::Point(132, 186);
			this->du0->Name = L"du0";
			this->du0->Size = System::Drawing::Size(73, 28);
			this->du0->TabIndex = 14;
			this->du0->Text = L"1";
			this->du0->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label11->Location = System::Drawing::Point(16, 189);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 22);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Введите u\'0";
			this->label11->Visible = false;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// _X0
			// 
			this->_X0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->_X0->Location = System::Drawing::Point(30, 113);
			this->_X0->Name = L"_X0";
			this->_X0->Size = System::Drawing::Size(73, 28);
			this->_X0->TabIndex = 9;
			this->_X0->Text = L"0";
			// 
			// _U0
			// 
			this->_U0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->_U0->Location = System::Drawing::Point(132, 152);
			this->_U0->Name = L"_U0";
			this->_U0->Size = System::Drawing::Size(73, 28);
			this->_U0->TabIndex = 10;
			this->_U0->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(16, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Введите u0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(33, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 66);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Введите границы \r\nизменения x :\r\n[ a ; b ]";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->max_dif_x);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->max_ui_vi);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->div2);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->multtwo);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->minhx);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->minh);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->maxhx);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->maxh);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->b_xn);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->maxOLP);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->Nmax);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->groupBox1->Location = System::Drawing::Point(964, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(915, 228);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// max_dif_x
			// 
			this->max_dif_x->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->max_dif_x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->max_dif_x->Location = System::Drawing::Point(729, 184);
			this->max_dif_x->Name = L"max_dif_x";
			this->max_dif_x->Size = System::Drawing::Size(129, 21);
			this->max_dif_x->TabIndex = 48;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label24->Location = System::Drawing::Point(664, 182);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(75, 22);
			this->label24->TabIndex = 47;
			this->label24->Text = L"при x = ";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// max_ui_vi
			// 
			this->max_ui_vi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->max_ui_vi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->max_ui_vi->Location = System::Drawing::Point(435, 182);
			this->max_ui_vi->Name = L"max_ui_vi";
			this->max_ui_vi->Size = System::Drawing::Size(230, 21);
			this->max_ui_vi->TabIndex = 46;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label23->Location = System::Drawing::Point(316, 183);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(122, 22);
			this->label23->TabIndex = 45;
			this->label23->Text = L"max |ui - vi| = ";
			// 
			// div2
			// 
			this->div2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->div2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->div2->Location = System::Drawing::Point(211, 178);
			this->div2->Name = L"div2";
			this->div2->Size = System::Drawing::Size(99, 21);
			this->div2->TabIndex = 44;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label22->Location = System::Drawing::Point(17, 175);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(188, 22);
			this->label22->TabIndex = 43;
			this->label22->Text = L"Число делений шага:";
			// 
			// multtwo
			// 
			this->multtwo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->multtwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->multtwo->Location = System::Drawing::Point(218, 143);
			this->multtwo->Name = L"multtwo";
			this->multtwo->Size = System::Drawing::Size(99, 21);
			this->multtwo->TabIndex = 42;
			this->multtwo->TextChanged += gcnew System::EventHandler(this, &MyForm::multtwo_TextChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label21->Location = System::Drawing::Point(15, 142);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(197, 22);
			this->label21->TabIndex = 41;
			this->label21->Text = L"Число удвоений шага:";
			// 
			// minhx
			// 
			this->minhx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->minhx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->minhx->Location = System::Drawing::Point(693, 65);
			this->minhx->Name = L"minhx";
			this->minhx->Size = System::Drawing::Size(165, 21);
			this->minhx->TabIndex = 40;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label17->Location = System::Drawing::Point(612, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 22);
			this->label17->TabIndex = 39;
			this->label17->Text = L"при x = ";
			// 
			// minh
			// 
			this->minh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->minh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->minh->Location = System::Drawing::Point(454, 65);
			this->minh->Name = L"minh";
			this->minh->Size = System::Drawing::Size(146, 21);
			this->minh->TabIndex = 38;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label20->Location = System::Drawing::Point(371, 64);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(78, 22);
			this->label20->TabIndex = 37;
			this->label20->Text = L"min hi = ";
			// 
			// maxhx
			// 
			this->maxhx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxhx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->maxhx->Location = System::Drawing::Point(693, 28);
			this->maxhx->Name = L"maxhx";
			this->maxhx->Size = System::Drawing::Size(165, 21);
			this->maxhx->TabIndex = 36;
			this->maxhx->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label18->Location = System::Drawing::Point(612, 28);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 22);
			this->label18->TabIndex = 35;
			this->label18->Text = L"при x = ";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// maxh
			// 
			this->maxh->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->maxh->Location = System::Drawing::Point(454, 24);
			this->maxh->Name = L"maxh";
			this->maxh->Size = System::Drawing::Size(141, 21);
			this->maxh->TabIndex = 34;
			this->maxh->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged_1);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label19->Location = System::Drawing::Point(371, 28);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 22);
			this->label19->TabIndex = 33;
			this->label19->Text = L"max hi = ";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// b_xn
			// 
			this->b_xn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->b_xn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->b_xn->Location = System::Drawing::Point(92, 97);
			this->b_xn->Name = L"b_xn";
			this->b_xn->Size = System::Drawing::Size(239, 21);
			this->b_xn->TabIndex = 32;
			this->b_xn->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label16->Location = System::Drawing::Point(17, 96);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(79, 22);
			this->label16->TabIndex = 31;
			this->label16->Text = L"b - Xn = ";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// maxOLP
			// 
			this->maxOLP->BackColor = System::Drawing::SystemColors::Window;
			this->maxOLP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maxOLP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->maxOLP->Location = System::Drawing::Point(131, 65);
			this->maxOLP->Name = L"maxOLP";
			this->maxOLP->Size = System::Drawing::Size(239, 21);
			this->maxOLP->TabIndex = 30;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label15->Location = System::Drawing::Point(15, 65);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(119, 22);
			this->label15->TabIndex = 29;
			this->label15->Text = L"max |ОЛП| = ";
			// 
			// Nmax
			// 
			this->Nmax->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Nmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->Nmax->Location = System::Drawing::Point(154, 28);
			this->Nmax->Name = L"Nmax";
			this->Nmax->Size = System::Drawing::Size(99, 21);
			this->Nmax->TabIndex = 28;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label10->Location = System::Drawing::Point(15, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 22);
			this->label10->TabIndex = 27;
			this->label10->Text = L"N число шагов";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label9->Location = System::Drawing::Point(17, 27);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 22);
			this->label9->TabIndex = 19;
			// 
			// count
			// 
			this->count->BackColor = System::Drawing::Color::YellowGreen;
			this->count->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->count->Location = System::Drawing::Point(235, 27);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(153, 43);
			this->count->TabIndex = 8;
			this->count->Text = L"Вычислить";
			this->count->UseVisualStyleBackColor = false;
			this->count->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1912, 962);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Условия задач";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 69);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(683, 363);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->MinimumWidth = 8;
			this->i->Name = L"i";
			this->i->Width = 40;
			// 
			// Xi
			// 
			this->Xi->HeaderText = L"Xi";
			this->Xi->MinimumWidth = 8;
			this->Xi->Name = L"Xi";
			// 
			// Vi
			// 
			this->Vi->HeaderText = L"Vi";
			this->Vi->MinimumWidth = 8;
			this->Vi->Name = L"Vi";
			this->Vi->Width = 130;
			// 
			// Vwith_wave
			// 
			this->Vwith_wave->HeaderText = L"V2i";
			this->Vwith_wave->MinimumWidth = 8;
			this->Vwith_wave->Name = L"Vwith_wave";
			this->Vwith_wave->Width = 130;
			// 
			// Difference
			// 
			this->Difference->HeaderText = L"Vi - V2i";
			this->Difference->MinimumWidth = 8;
			this->Difference->Name = L"Difference";
			this->Difference->Width = 130;
			// 
			// S
			// 
			this->S->HeaderText = L"ОЛП";
			this->S->MinimumWidth = 8;
			this->S->Name = L"S";
			this->S->ReadOnly = true;
			this->S->Width = 130;
			// 
			// hi
			// 
			this->hi->HeaderText = L"hi";
			this->hi->MinimumWidth = 8;
			this->hi->Name = L"hi";
			this->hi->Width = 90;
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->MinimumWidth = 8;
			this->C1->Name = L"C1";
			this->C1->ReadOnly = true;
			this->C1->Width = 40;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->MinimumWidth = 8;
			this->C2->Name = L"C2";
			this->C2->ReadOnly = true;
			this->C2->Width = 40;
			// 
			// ui
			// 
			this->ui->HeaderText = L"Ui";
			this->ui->MinimumWidth = 8;
			this->ui->Name = L"ui";
			this->ui->ReadOnly = true;
			this->ui->Width = 130;
			// 
			// ui_vi
			// 
			this->ui_vi->HeaderText = L"|Ui-Vi|";
			this->ui_vi->MinimumWidth = 8;
			this->ui_vi->Name = L"ui_vi";
			this->ui_vi->ReadOnly = true;
			this->ui_vi->Width = 140;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1828, 995);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №1. Алясева Д., Быков И., Шамонина А., Шахина К.";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}	
	private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void _h0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void multtwo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
