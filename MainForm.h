#pragma once
#include <stdlib.h>

namespace ArrayTask {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ countElementText;
	private: System::Windows::Forms::TextBox^ numTextBox;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ arrayTextBox;
	private: System::Windows::Forms::CheckBox^ maxCheckBox;
	private: System::Windows::Forms::CheckBox^ numPositCheckBox;



	private: System::Windows::Forms::TextBox^ maxTextBox;
	private: System::Windows::Forms::TextBox^ countPossitiveTextBox;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;

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
			this->countElementText = (gcnew System::Windows::Forms::Label());
			this->numTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->arrayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->maxCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->numPositCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->maxTextBox = (gcnew System::Windows::Forms::TextBox());
			this->countPossitiveTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// countElementText
			// 
			this->countElementText->AutoSize = true;
			this->countElementText->Location = System::Drawing::Point(13, 24);
			this->countElementText->Name = L"countElementText";
			this->countElementText->Size = System::Drawing::Size(124, 13);
			this->countElementText->TabIndex = 0;
			this->countElementText->Text = L"Количество элементов";
			// 
			// numTextBox
			// 
			this->numTextBox->Location = System::Drawing::Point(16, 41);
			this->numTextBox->Name = L"numTextBox";
			this->numTextBox->Size = System::Drawing::Size(36, 20);
			this->numTextBox->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(206, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(246, 63);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Значение элементов";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(126, 20);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Не сортировать";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Сортировать";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// arrayTextBox
			// 
			this->arrayTextBox->Location = System::Drawing::Point(16, 88);
			this->arrayTextBox->Name = L"arrayTextBox";
			this->arrayTextBox->Size = System::Drawing::Size(436, 20);
			this->arrayTextBox->TabIndex = 3;
			// 
			// maxCheckBox
			// 
			this->maxCheckBox->AutoSize = true;
			this->maxCheckBox->Location = System::Drawing::Point(16, 127);
			this->maxCheckBox->Name = L"maxCheckBox";
			this->maxCheckBox->Size = System::Drawing::Size(80, 17);
			this->maxCheckBox->TabIndex = 4;
			this->maxCheckBox->Text = L"Максимум";
			this->maxCheckBox->UseVisualStyleBackColor = true;
			// 
			// numPositCheckBox
			// 
			this->numPositCheckBox->AutoSize = true;
			this->numPositCheckBox->Location = System::Drawing::Point(16, 150);
			this->numPositCheckBox->Name = L"numPositCheckBox";
			this->numPositCheckBox->Size = System::Drawing::Size(168, 17);
			this->numPositCheckBox->TabIndex = 5;
			this->numPositCheckBox->Text = L"Количество положительных";
			this->numPositCheckBox->UseVisualStyleBackColor = true;
			// 
			// maxTextBox
			// 
			this->maxTextBox->Location = System::Drawing::Point(206, 127);
			this->maxTextBox->Name = L"maxTextBox";
			this->maxTextBox->ReadOnly = true;
			this->maxTextBox->Size = System::Drawing::Size(36, 20);
			this->maxTextBox->TabIndex = 6;
			// 
			// countPossitiveTextBox
			// 
			this->countPossitiveTextBox->Location = System::Drawing::Point(206, 153);
			this->countPossitiveTextBox->Name = L"countPossitiveTextBox";
			this->countPossitiveTextBox->ReadOnly = true;
			this->countPossitiveTextBox->Size = System::Drawing::Size(36, 20);
			this->countPossitiveTextBox->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(279, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Создать массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(279, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(479, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 228);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->countPossitiveTextBox);
			this->Controls->Add(this->maxTextBox);
			this->Controls->Add(this->numPositCheckBox);
			this->Controls->Add(this->maxCheckBox);
			this->Controls->Add(this->arrayTextBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->numTextBox);
			this->Controls->Add(this->countElementText);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Массив";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	int n; 
	int* arr;	//объявление массива
				
	void quicksort(int* a, int MIN, int MAX)	//сортировка Хоара
	{
		int i = MIN, j = MAX;
		//среднее значение
		double x = a[(MIN + MAX) / 2];

		do {
			while (a[i] < x) i++;
			while (a[j] > x) j--;

			if (i <= j) {
				if (i < j) {
					double tmp;
					tmp = a[i];
					a[i] = a[j];
					a[j] = tmp;
				}
				i++;
				j--;
			}
		} while (i <= j);
		if (i < MAX) quicksort(a, i, MAX);
		if (MIN < j) quicksort(a, MIN, j);
	}

	void sort(int *m, const int n)
	{
		//передаем указатель на массив, индексы первого и последнего элемента массива
		quicksort(arr, 0, n-1);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			try
			{
				n = Convert::ToInt16(numTextBox->Text);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Введите число!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				numTextBox->Clear();
				numTextBox->Focus();
			}
			//очищаем текстовые поля
			arrayTextBox->Clear();
			maxTextBox->Clear();
			countPossitiveTextBox->Clear();
		
			if (n > 0) 
			{
				arr = new int[n];	//создание массива
				for (int i = 0; i < n; i++) 
				{
					arr[i] = rand() % 201 - 100;
				}
			
				//сортировка
				if (radioButton1->Checked) { sort(arr, n); }
			
				//вывод
				for (int i = 0; i < n; i++) 
				{
					arrayTextBox->Text += " " + arr[i];
				}
			}
		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			int max = arr[0];
			int numPosit = 0;

			for (int i = 0; i < n; i++) 
			{
				if (arr[i] > max) max = arr[i];
				if (arr[i] > 0) numPosit++;
			}
			if (maxCheckBox->Checked) maxTextBox->Text = max.ToString();
			else maxTextBox->Clear();
			if (numPositCheckBox->Checked) countPossitiveTextBox->Text = numPosit.ToString();
			else countPossitiveTextBox->Clear();
		}
	
		   //туть инициализируем датчик случайных чисел и передаем фокус текстовому полю numTextBox
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
			int zero = 0;
			numTextBox->Text = zero.ToString();	//
			numTextBox->Focus();
		}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
	};
}
