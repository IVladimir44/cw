#include <iostream>
#include <msclr/marshal_cppstd.h>
#using <mscorlib.dll>
#using <System.dll>

#pragma once

namespace BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ заявникToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заявкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ співробітникПаспортногоСтолуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ журналОбробкиЗаявокToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	protected:

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->заявникToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заявкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->співробітникПаспортногоСтолуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->журналОбробкиЗаявокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(958, 279);
			this->dataGridView1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->заявникToolStripMenuItem,
					this->заявкаToolStripMenuItem, this->співробітникПаспортногоСтолуToolStripMenuItem, this->журналОбробкиЗаявокToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(999, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// заявникToolStripMenuItem
			// 
			this->заявникToolStripMenuItem->Name = L"заявникToolStripMenuItem";
			this->заявникToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->заявникToolStripMenuItem->Text = L"Заявник";
			this->заявникToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заявникToolStripMenuItem_Click);
			// 
			// заявкаToolStripMenuItem
			// 
			this->заявкаToolStripMenuItem->Name = L"заявкаToolStripMenuItem";
			this->заявкаToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->заявкаToolStripMenuItem->Text = L"Заявка";
			this->заявкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::заявкаToolStripMenuItem_Click);
			// 
			// співробітникПаспортногоСтолуToolStripMenuItem
			// 
			this->співробітникПаспортногоСтолуToolStripMenuItem->Name = L"співробітникПаспортногоСтолуToolStripMenuItem";
			this->співробітникПаспортногоСтолуToolStripMenuItem->Size = System::Drawing::Size(200, 20);
			this->співробітникПаспортногоСтолуToolStripMenuItem->Text = L"Співробітник паспортного столу";
			this->співробітникПаспортногоСтолуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::співробітникПаспортногоСтолуToolStripMenuItem_Click);
			// 
			// журналОбробкиЗаявокToolStripMenuItem
			// 
			this->журналОбробкиЗаявокToolStripMenuItem->Name = L"журналОбробкиЗаявокToolStripMenuItem";
			this->журналОбробкиЗаявокToolStripMenuItem->Size = System::Drawing::Size(153, 20);
			this->журналОбробкиЗаявокToolStripMenuItem->Text = L"Журнал обробки заявок";
			this->журналОбробкиЗаявокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::журналОбробкиЗаявокToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Повторна заявка", L"Новий заявник", L"Не враховувати статус" });
			this->comboBox1->Location = System::Drawing::Point(12, 383);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(231, 32);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Статус заявника";
			this->label1->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Оформлення нового паспорта", L"Продовження терміну дії",
					L"Не обирати"
			});
			this->comboBox2->Location = System::Drawing::Point(282, 383);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(230, 32);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(337, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 24);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Тип послуги";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 56);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Фільтрація";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Оформлення нового паспорта", L"Продовження терміну дії",
					L"Не обирати"
			});
			this->comboBox3->Location = System::Drawing::Point(555, 383);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(178, 32);
			this->comboBox3->TabIndex = 16;
			this->comboBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(551, 356);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 24);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Хто видав паспорт";
			this->label3->Visible = false;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Оформлення нового паспорта", L"Продовження терміну дії",
					L"Не обирати"
			});
			this->comboBox4->Location = System::Drawing::Point(768, 383);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(219, 32);
			this->comboBox4->TabIndex = 18;
			this->comboBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(804, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 24);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Статус заявки";
			this->label4->Visible = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(193, 491);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 56);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Додати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(374, 491);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 56);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Видалити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(555, 491);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 56);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Оновити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 578);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->dataGridView1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ connectionString = "Server=localhost;Port=3306;Database=pasport;Uid=root;Pwd=root;";
		int WhoIndexe = 0;
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionString = "Server=localhost;Port=3306;Database=pasport;Uid=root;Pwd=root;";
	String^ query = "SELECT * FROM actor";
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	connection->Open();
	MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
	MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
	DataSet^ dataSet = gcnew DataSet();
	adapter->Fill(dataSet);
	connection->Close();
	dataGridView1->DataSource = dataSet->Tables[0];
}
private: System::Void заявникToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WhoIndexe = 1;
	if (WhoIndexe == 1)
	{
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		//
		label3->Visible = false;
		comboBox3->Visible = false;
		label4->Visible = false;
		comboBox4->Visible = false;
		//
		comboBox2->Items->Clear();
		comboBox2->Visible = true;
		comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
			L"1463", L"5356", L"7741", L"4662",
				L"Не обирати"
		});
		comboBox2->SelectedIndex = 4;
		label2->Text = L"Хто видав паспорт";
		label2->Visible = true;
		//
		label1->Text = L"Статус заявника";
		label1->Visible = true;
		comboBox1->Items->Clear();
		comboBox1->Visible = true;
		comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Повторна заявка", L"Новий заявник", L"Не враховувати статус" });
		comboBox1->SelectedIndex = 2;
		//
		String^ query = "SELECT id_passport, name, surname, birthday, WhoPassport, StatusPers, Tel FROM persona";
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "persona");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["persona"];
			dataGridView1->Columns["id_passport"]->HeaderText = "ID Паспорту";
			dataGridView1->Columns["name"]->HeaderText = "Ім'я";
			dataGridView1->Columns["surname"]->HeaderText = "Прізвище";
			dataGridView1->Columns["birthday"]->HeaderText = "Дата народження";
			dataGridView1->Columns["WhoPassport"]->HeaderText = "Хто видав паспорт";
			dataGridView1->Columns["StatusPers"]->HeaderText = "Статус подачі заявки";
			dataGridView1->Columns["Tel"]->HeaderText = "Номер телефону";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}

}
private: System::Void заявкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WhoIndexe = 2;
	if (WhoIndexe == 2)
	{
		button2->Visible = true;
		button3->Visible = true;
		button4->Visible = true;
		//
		label3->Visible = false;
		comboBox3->Visible = false;
		label4->Visible = false;
		comboBox4->Visible = false;
		//
		label1->Text = L"Статус заявки";
		label1->Visible = true;
		comboBox1->Items->Clear();
		comboBox1->Visible = true;
		comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Завершенно", L"Відхилено", L"В обробці", L"Не враховувати статус" });
		comboBox1->SelectedIndex = 3;
		//
		comboBox2->Items->Clear();
		comboBox2->Visible = true;
		comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
			L"Оформлення нового паспорта", L"Продовження терміну дії",
				L"Не обирати"
		});
		comboBox2->SelectedIndex = 2;
		label2->Text = L"Тип послуги";
		label2->Visible = true;
		String^ query = "SELECT id_applic, dateApplic, Status, TypeService FROM applic";
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "applic");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["applic"];
			dataGridView1->Columns["id_applic"]->HeaderText = "ID заявки";
			dataGridView1->Columns["dateApplic"]->HeaderText = "Дата поданная заявки";
			dataGridView1->Columns["Status"]->HeaderText = "Статус заявки";
			dataGridView1->Columns["TypeService"]->HeaderText = "Тип послуги";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}
}
	   private: System::Void співробітникПаспортногоСтолуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   WhoIndexe = 3;
		   if (WhoIndexe == 3)
		   {
			   button2->Visible = true;
			   button3->Visible = true;
			   button4->Visible = true;
			   //
			   label3->Visible = false;
			   comboBox3->Visible = false;
			   label4->Visible = false;
			   comboBox4->Visible = false;
			   //
			   label1->Text = L"Статус заявки";
			   label1->Visible = false;
			   comboBox1->Items->Clear();
			   comboBox1->Visible = false;
			   comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Завершенно", L"Відхилено", L"В обробці", L"Не враховувати статус" });
			   comboBox1->SelectedIndex = 3;
			   //
			   comboBox2->Items->Clear();
			   comboBox2->Visible = false;
			   comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				   L"Оформлення нового паспорта", L"Продовження терміну дії",
					   L"Не обирати"
			   });
			   comboBox2->SelectedIndex = 2;
			   label2->Text = L"Тип послуги";
			   label2->Visible = false;
			   String^ query = "SELECT id_WorkPerson, nameWork, surnameWork, nomCabinet FROM workperson";
			   MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			   try {
				   connection->Open();
				   MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				   MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
				   DataSet^ dataSet = gcnew DataSet();
				   adapter->Fill(dataSet, "workperson");
				   connection->Close();
				   dataGridView1->DataSource = dataSet->Tables["workperson"];
				   dataGridView1->Columns["id_WorkPerson"]->HeaderText = "ID заявки";
				   dataGridView1->Columns["nameWork"]->HeaderText = "Ім'я";
				   dataGridView1->Columns["surnameWork"]->HeaderText = "Прізвище";
				   dataGridView1->Columns["nomCabinet"]->HeaderText = "Номер кабінету";
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
			   }
		   }

	   }
private: System::Void журналОбробкиЗаявокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WhoIndexe = 4;
	if (WhoIndexe == 4)
	{
		button2->Visible = false;
		button3->Visible = false;
		button4->Visible = false;
		//
		comboBox3->Items->Clear();
		comboBox3->Visible = true;
		comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
			L"1463", L"5356", L"7741", L"4662",
				L"Не обирати"
		});
		comboBox3->SelectedIndex = 4;
		label3->Text = L"Хто видав паспорт";
		label3->Visible = true;
		//
		label1->Text = L"Статус заявника";
		label1->Visible = true;
		comboBox1->Items->Clear();
		comboBox1->Visible = true;
		comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Повторна заявка", L"Новий заявник", L"Не враховувати статус" });
		comboBox1->SelectedIndex = 2;
		//
		label4->Text = L"Статус заявки";
		label4->Visible = true;
		comboBox4->Items->Clear();
		comboBox4->Visible = true;
		comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Завершенно", L"Відхилено", L"В обробці", L"Не враховувати статус" });
		comboBox4->SelectedIndex = 3;
		//
		comboBox2->Items->Clear();
		comboBox2->Visible = true;
		comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
			L"Оформлення нового паспорта", L"Продовження терміну дії",
				L"Не обирати"
		});
		comboBox2->SelectedIndex = 2;
		label2->Text = L"Тип послуги";
		label2->Visible = true;
		//
		String^ query = "SELECT logappl.id_LOG, logappl.startDate, logappl.endDate, applic.dateApplic, applic.Status, applic.TypeService, persona.name, persona.surname, persona.WhoPassport, persona.StatusPers FROM logappl JOIN applic ON logappl.id_applic = applic.id_applic JOIN persona ON logappl.id_passport = persona.id_passport";
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "workperson");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["workperson"];
			dataGridView1->Columns["id_LOG"]->HeaderText = "ID Запису";
			dataGridView1->Columns["startDate"]->HeaderText = "Дата початку";
			dataGridView1->Columns["endDate"]->HeaderText = "Дата кінця";
			dataGridView1->Columns["dateApplic"]->HeaderText = "Дата подання заявки";
			dataGridView1->Columns["Status"]->HeaderText = "Статус заявки";
			dataGridView1->Columns["TypeService"]->HeaderText = "Тип послуги";
			dataGridView1->Columns["name"]->HeaderText = "Ім'я";
			dataGridView1->Columns["surname"]->HeaderText = "Прізвище";
			dataGridView1->Columns["WhoPassport"]->HeaderText = "Хто видав паспорт";
			dataGridView1->Columns["StatusPers"]->HeaderText = "Статус подачі заявки";
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ query; 
	if (WhoIndexe == 1)
	{
		String^ selectedFunction = comboBox1->SelectedItem->ToString();
		String^ selectedService = comboBox2->SelectedItem->ToString();
		query = "SELECT id_passport, name, surname, birthday, WhoPassport, StatusPers, Tel FROM persona";

		if (selectedFunction != "Не враховувати статус") {
			query += " WHERE StatusPers = '" + selectedFunction + "'";
		}
		if (selectedService != "Не обирати" && selectedFunction != "Не враховувати статус") {
			query += " AND WhoPassport = '" + selectedService + "'";
		}
		else if (selectedService != "Не обирати" && selectedFunction == "Не враховувати статус") {
			query += " WHERE WhoPassport = '" + selectedService + "'";
		}
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "persona");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["persona"];
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}
	else if (WhoIndexe == 2)
	{
		String^ selectedFunction = comboBox1->SelectedItem->ToString();
		String^ selectedService = comboBox2->SelectedItem->ToString();
		String^ query = "SELECT id_applic, dateApplic, Status, TypeService FROM applic";
		if (selectedFunction != "Не враховувати статус") {
			query += " WHERE Status = '" + selectedFunction + "'";
		}
		if (selectedService != "Не обирати" && selectedFunction != "Не враховувати статус") {
			query += " AND TypeService = '" + selectedService + "'";
		}
		else if (selectedService != "Не обирати" && selectedFunction == "Не враховувати статус") {
			query += " WHERE TypeService = '" + selectedService + "'";
		}
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "persona");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["persona"];
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}
	else if (WhoIndexe == 4)
	{
		String^ StatPers = comboBox1->SelectedItem->ToString(); 
		String^ TypeYsl = comboBox2->SelectedItem->ToString();
		String^ WhoPass = comboBox3->SelectedItem->ToString();
		String^ StatZayav = comboBox4->SelectedItem->ToString();
		String^ additionalCondition = "";
		if (StatPers != L"Не враховувати статус")
			additionalCondition += " AND persona.StatusPers = '" + StatPers + "'";
		if (TypeYsl != L"Не обирати")
			additionalCondition += " AND applic.TypeService = '" + TypeYsl + "'";
		if (WhoPass != L"Не обирати")
			additionalCondition += " AND persona.WhoPassport = " + WhoPass;
		if (StatZayav != L"Не враховувати статус")
			additionalCondition += " AND applic.Status = '" + StatZayav + "'";
		String^ query = "SELECT logappl.id_LOG, logappl.startDate, logappl.endDate, applic.dateApplic, applic.Status, applic.TypeService, persona.name, persona.surname, persona.WhoPassport, persona.StatusPers FROM logappl JOIN applic ON logappl.id_applic = applic.id_applic JOIN persona ON logappl.id_passport = persona.id_passport WHERE 1" + additionalCondition;
		MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
		try {
			connection->Open();
			MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(cmd);
			DataSet^ dataSet = gcnew DataSet();
			adapter->Fill(dataSet, "workperson");
			connection->Close();
			dataGridView1->DataSource = dataSet->Tables["workperson"];
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при виконанні запиту: " + ex->Message);
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WhoIndexe == 2)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idApplic = Convert::ToInt32(selectedRow->Cells["id_applic"]->Value);
			DateTime dateApplic = Convert::ToDateTime(selectedRow->Cells["dateApplic"]->Value);
			String^ status = selectedRow->Cells["Status"]->Value->ToString();
			String^ typeService = selectedRow->Cells["TypeService"]->Value->ToString();
			String^ query = "INSERT INTO applic (id_applic, dateApplic, Status, TypeService) VALUES (" + idApplic + ", '" + dateApplic.ToString("yyyy-MM-dd") + "', '" + status + "', '" + typeService + "')";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно добавлены в таблицу applic!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для добавления данных!");
		}
	}
	if (WhoIndexe == 1)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idPassport = Convert::ToInt32(selectedRow->Cells["id_passport"]->Value);
			String^ name = selectedRow->Cells["name"]->Value->ToString();
			String^ surname = selectedRow->Cells["surname"]->Value->ToString();
			DateTime birthday = Convert::ToDateTime(selectedRow->Cells["birthday"]->Value);
			int whoPassport = Convert::ToInt32(selectedRow->Cells["WhoPassport"]->Value);
			String^ statusPers = selectedRow->Cells["StatusPers"]->Value->ToString();
			int tel = Convert::ToInt32(selectedRow->Cells["Tel"]->Value);
			String^ query = "INSERT INTO persona (id_passport, name, surname, birthday, WhoPassport, StatusPers, Tel) VALUES (" + idPassport + ", '" + name + "', '" + surname + "', '" + birthday.ToString("yyyy-MM-dd") + "', " + whoPassport + ", '" + statusPers + "', " + tel + ")";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно добавлены в таблицу persona!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для добавления данных!");
		}
	}
	if (WhoIndexe == 3)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idWorkPerson = Convert::ToInt32(selectedRow->Cells["id_WorkPerson"]->Value);
			String^ nameWork = selectedRow->Cells["nameWork"]->Value->ToString();
			String^ surnameWork = selectedRow->Cells["surnameWork"]->Value->ToString();
			int nomCaninet = Convert::ToInt32(selectedRow->Cells["nomCabinet"]->Value);
			String^ query = "INSERT INTO workperson (id_WorkPerson, nameWork, surnameWork, nomCabinet) VALUES (" + idWorkPerson + ", '" + nameWork + "', '" + surnameWork + "', " + nomCaninet + ")";
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);

			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно добавлены в таблицу workperson!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при добавлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для добавления данных!");
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WhoIndexe == 1)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idPassport = Convert::ToInt32(selectedRow->Cells["id_passport"]->Value);
			String^ query = "DELETE FROM persona WHERE id_passport = " + idPassport;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
				MessageBox::Show("Запись успешно удалена из таблицы persona!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для удаления данных!");
		}
	}
	if (WhoIndexe == 2)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idApplic = Convert::ToInt32(selectedRow->Cells["id_applic"]->Value);
			String^ query = "DELETE FROM applic WHERE id_applic = " + idApplic;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
				MessageBox::Show("Запись успешно удалена из таблицы applic!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для удаления данных!");
		}
	}
	if (WhoIndexe == 3)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idWorkPerson = Convert::ToInt32(selectedRow->Cells["id_WorkPerson"]->Value);
			String^ query = "DELETE FROM workperson WHERE id_WorkPerson = " + idWorkPerson;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
				MessageBox::Show("Запись успешно удалена из таблицы workperson!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при удалении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для удаления данных!");
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (WhoIndexe == 2) {
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idApplic = Convert::ToInt32(selectedRow->Cells["id_applic"]->Value);
			DateTime dateApplic = Convert::ToDateTime(selectedRow->Cells["dateApplic"]->Value);
			String^ status = selectedRow->Cells["Status"]->Value->ToString();
			String^ typeService = selectedRow->Cells["TypeService"]->Value->ToString();
			String^ query = "UPDATE applic SET dateApplic = '" + dateApplic.ToString("yyyy-MM-dd") + "', Status = '" + status + "', TypeService = '" + typeService + "' WHERE id_applic = " + idApplic;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно обновлены в таблице applic!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для обновления данных!");
		}
	}
	if (WhoIndexe == 1)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idPassport = Convert::ToInt32(selectedRow->Cells["id_passport"]->Value);
			String^ name = selectedRow->Cells["name"]->Value->ToString();
			String^ surname = selectedRow->Cells["surname"]->Value->ToString();
			DateTime birthday = Convert::ToDateTime(selectedRow->Cells["birthday"]->Value);
			int whoPassport = Convert::ToInt32(selectedRow->Cells["WhoPassport"]->Value);
			String^ statusPers = selectedRow->Cells["StatusPers"]->Value->ToString();
			int tel = Convert::ToInt32(selectedRow->Cells["Tel"]->Value);
			String^ query = "UPDATE persona SET name = '" + name + "', surname = '" + surname + "', birthday = '" + birthday.ToString("yyyy-MM-dd") + "', WhoPassport = " + whoPassport + ", StatusPers = '" + statusPers + "', Tel = " + tel + " WHERE id_passport = " + idPassport;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно обновлены в таблице persona!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для обновления данных!");
		}
	}
	if (WhoIndexe == 3)
	{
		if (dataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = dataGridView1->SelectedRows[0];
			int idWorkPerson = Convert::ToInt32(selectedRow->Cells["id_WorkPerson"]->Value);
			String^ nameWork = selectedRow->Cells["nameWork"]->Value->ToString();
			String^ surnameWork = selectedRow->Cells["surnameWork"]->Value->ToString();
			int nomCaninet = Convert::ToInt32(selectedRow->Cells["nomCabinet"]->Value);
			String^ query = "UPDATE workperson SET nameWork = '" + nameWork + "', surnameWork = '" + surnameWork + "', nomCabinet = " + nomCaninet + " WHERE id_WorkPerson = " + idWorkPerson;
			MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
			try {
				connection->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(query, connection);
				cmd->ExecuteNonQuery();
				connection->Close();
				MessageBox::Show("Данные успешно обновлены в таблице workperson!");

			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при обновлении данных: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Выберите строку для обновления данных!");
		}
	}
}
};
}
