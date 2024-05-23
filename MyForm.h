#pragma once
#include <math.h>

namespace Three {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(343, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать таблицу и экстремумы функции";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(375, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(240, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(190, 175);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 202);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"17";
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(190, 229);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"7";
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 255);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"2";
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 178);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Введите значение XN=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 204);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите значение XK=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Введите значение XH=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(61, 258);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Введите значение a=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(361, 89);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(375, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 171);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(420, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Таблица значений функции";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(429, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Максим. знач. функции";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(429, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Миним. знач. функции";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(441, 245);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(441, 295);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 381);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int n, i;
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != ""))
		{
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			a = Convert::ToDouble(textBox4->Text);
			dataGridView1->Columns->Clear();
			dataGridView1->ColumnCount = 2;
			dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
			dataGridView1->Columns[0]->Name = " X";
			dataGridView1->Columns[1]->Name = " Y";
			i = 0.15;
			x = xn;
			ymax = 1,3; ymin = -6,1;
			while (x <= xk)
			{
				if (x <= 0) { y = (2 * x + 1) * pow(fabs(x) + 2, 3); }
				else
					if (x <= a) { y = exp(x) + sin(x + 2); }
					else
					{
						if (x > a)
						y = 3 * log (pow(pow(sin(x), 2)+2, 1/5));
					}
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				yt = ceil(y * 100) / 100;
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
				if (y > ymax)
				{
					ymax = ceil(y * 100) / 100;
				}
				if (y < ymin)
				{
					ymin = ceil(y * 100) / 100;
				}
				x = x + xh;
				i++;
			}
			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else {
			MessageBox::Show("Заполните, пожалуйста, данные",
				"Ошибка ввода данных",

				MessageBoxButtons::OK, MessageBoxIcon::Exclamation

			);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') t++;
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		else if (str[t] < '0' || str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') { t++; }
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox2->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') { t++; }
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox2->Focus();
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') { t++; }
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox2->Focus();
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
