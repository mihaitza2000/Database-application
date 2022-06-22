#pragma once
#include "main.h"
#include "configure_window.h"
#include "table_window.h"
#include "tables_window.h"

namespace DatabaseApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class main_window : public System::Windows::Forms::Form
	{
	public:
		main_window(void)
		{
			InitializeComponent();
		}

	protected:
		~main_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ create_table;
	private: System::Windows::Forms::Button^ delete_table;
	private: System::Windows::Forms::TextBox^ table_input;
	private: System::Windows::Forms::TextBox^ database_input;
	private: System::Windows::Forms::Button^ create_database;
	private: System::Windows::Forms::Button^ delete_database;
	private: System::Windows::Forms::Button^ display_tables_button;
	private: System::Windows::Forms::Button^ display_table_button;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_window::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->create_table = (gcnew System::Windows::Forms::Button());
			this->delete_table = (gcnew System::Windows::Forms::Button());
			this->table_input = (gcnew System::Windows::Forms::TextBox());
			this->database_input = (gcnew System::Windows::Forms::TextBox());
			this->create_database = (gcnew System::Windows::Forms::Button());
			this->delete_database = (gcnew System::Windows::Forms::Button());
			this->display_tables_button = (gcnew System::Windows::Forms::Button());
			this->display_table_button = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->create_table, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->delete_table, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->table_input, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->database_input, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->create_database, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->delete_database, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->display_tables_button, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->display_table_button, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.675F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.775F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.775F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 27.775F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1234, 756);
			this->tableLayoutPanel1->TabIndex = 16;
			// 
			// create_table
			// 
			this->create_table->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->create_table->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->create_table->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_table->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_table->Font = (gcnew System::Drawing::Font(L"MV Boli", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_table->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"create_table.Image")));
			this->create_table->Location = System::Drawing::Point(637, 146);
			this->create_table->Margin = System::Windows::Forms::Padding(20);
			this->create_table->Name = L"create_table";
			this->create_table->Size = System::Drawing::Size(577, 169);
			this->create_table->TabIndex = 13;
			this->create_table->Text = L"create table";
			this->create_table->UseCompatibleTextRendering = true;
			this->create_table->UseVisualStyleBackColor = true;
			this->create_table->Click += gcnew System::EventHandler(this, &main_window::create_table_button);
			// 
			// delete_table
			// 
			this->delete_table->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->delete_table->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->delete_table->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_table->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delete_table->Font = (gcnew System::Drawing::Font(L"MV Boli", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_table->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_table.Image")));
			this->delete_table->Location = System::Drawing::Point(637, 355);
			this->delete_table->Margin = System::Windows::Forms::Padding(20);
			this->delete_table->Name = L"delete_table";
			this->delete_table->Size = System::Drawing::Size(577, 169);
			this->delete_table->TabIndex = 14;
			this->delete_table->Text = L"delete table";
			this->delete_table->UseVisualStyleBackColor = true;
			this->delete_table->Click += gcnew System::EventHandler(this, &main_window::delete_table_button);
			// 
			// table_input
			// 
			this->table_input->BackColor = System::Drawing::Color::White;
			this->table_input->CausesValidation = false;
			this->table_input->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->table_input->Font = (gcnew System::Drawing::Font(L"MV Boli", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->table_input->ForeColor = System::Drawing::Color::Silver;
			this->table_input->Location = System::Drawing::Point(677, 45);
			this->table_input->Margin = System::Windows::Forms::Padding(60, 20, 60, 20);
			this->table_input->MaxLength = 30;
			this->table_input->Name = L"table_input";
			this->table_input->Size = System::Drawing::Size(497, 61);
			this->table_input->TabIndex = 12;
			this->table_input->Text = L"Table name";
			this->table_input->GotFocus += gcnew System::EventHandler(this, &main_window::remove_text_table);
			this->table_input->LostFocus += gcnew System::EventHandler(this, &main_window::add_text_table);
			// 
			// database_input
			// 
			this->database_input->BackColor = System::Drawing::Color::White;
			this->database_input->CausesValidation = false;
			this->database_input->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->database_input->Font = (gcnew System::Drawing::Font(L"MV Boli", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->database_input->ForeColor = System::Drawing::Color::Silver;
			this->database_input->Location = System::Drawing::Point(60, 47);
			this->database_input->Margin = System::Windows::Forms::Padding(60, 20, 60, 20);
			this->database_input->MaxLength = 30;
			this->database_input->Name = L"database_input";
			this->database_input->Size = System::Drawing::Size(497, 59);
			this->database_input->TabIndex = 0;
			this->database_input->TabStop = false;
			this->database_input->Text = L"Database name";
			this->database_input->TextChanged += gcnew System::EventHandler(this, &main_window::database_input_TextChanged);
			this->database_input->GotFocus += gcnew System::EventHandler(this, &main_window::remove_text_database);
			this->database_input->LostFocus += gcnew System::EventHandler(this, &main_window::add_text_database);
			// 
			// create_database
			// 
			this->create_database->AutoSize = true;
			this->create_database->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->create_database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->create_database->Dock = System::Windows::Forms::DockStyle::Fill;
			this->create_database->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->create_database->Font = (gcnew System::Drawing::Font(L"MV Boli", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->create_database->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"create_database.Image")));
			this->create_database->Location = System::Drawing::Point(20, 146);
			this->create_database->Margin = System::Windows::Forms::Padding(20);
			this->create_database->Name = L"create_database";
			this->create_database->Size = System::Drawing::Size(577, 169);
			this->create_database->TabIndex = 5;
			this->create_database->Text = L"create database";
			this->create_database->UseCompatibleTextRendering = true;
			this->create_database->UseVisualStyleBackColor = true;
			this->create_database->Click += gcnew System::EventHandler(this, &main_window::create_database_button);
			// 
			// delete_database
			// 
			this->delete_database->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->delete_database->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->delete_database->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_database->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->delete_database->Font = (gcnew System::Drawing::Font(L"MV Boli", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_database->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_database.Image")));
			this->delete_database->Location = System::Drawing::Point(20, 355);
			this->delete_database->Margin = System::Windows::Forms::Padding(20);
			this->delete_database->Name = L"delete_database";
			this->delete_database->Size = System::Drawing::Size(577, 169);
			this->delete_database->TabIndex = 6;
			this->delete_database->Text = L"delete database";
			this->delete_database->UseVisualStyleBackColor = true;
			this->delete_database->Click += gcnew System::EventHandler(this, &main_window::delete_database_button);
			// 
			// display_tables_button
			// 
			this->display_tables_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->display_tables_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->display_tables_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 30));
			this->display_tables_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"display_tables_button.Image")));
			this->display_tables_button->Location = System::Drawing::Point(20, 564);
			this->display_tables_button->Margin = System::Windows::Forms::Padding(20);
			this->display_tables_button->Name = L"display_tables_button";
			this->display_tables_button->Size = System::Drawing::Size(577, 172);
			this->display_tables_button->TabIndex = 15;
			this->display_tables_button->Text = L"display tables";
			this->display_tables_button->UseVisualStyleBackColor = true;
			this->display_tables_button->Click += gcnew System::EventHandler(this, &main_window::display_tables);
			// 
			// display_table_button
			// 
			this->display_table_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->display_table_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->display_table_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->display_table_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"display_table_button.Image")));
			this->display_table_button->Location = System::Drawing::Point(637, 564);
			this->display_table_button->Margin = System::Windows::Forms::Padding(20);
			this->display_table_button->Name = L"display_table_button";
			this->display_table_button->Size = System::Drawing::Size(577, 172);
			this->display_table_button->TabIndex = 16;
			this->display_table_button->Text = L"display table";
			this->display_table_button->UseVisualStyleBackColor = true;
			this->display_table_button->Click += gcnew System::EventHandler(this, &main_window::display_table);
			// 
			// main_window
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::Green;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1234, 756);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(228, 213);
			this->MaximizeBox = false;
			this->Name = L"main_window";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"DatabaseApplication";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &main_window::form_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void create_database_button(System::Object^ sender, System::EventArgs^ e) {
		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text != "" && database_input->ForeColor != Color::Silver)
		{
			if (!check_file(database_name))
			{
				create_file(database_name);
				System::Windows::Forms::MessageBox::Show("Database created");
			}
			else
			{
				System::Windows::Forms::DialogResult answer;
				answer = System::Windows::Forms::MessageBox::Show("Database already exists\nWant to override ?", "", MessageBoxButtons::YesNo);
				if (answer == System::Windows::Forms::DialogResult::Yes)
				{
					delete_file(database_name);
					create_file(database_name);
					System::Windows::Forms::MessageBox::Show("Database updated");
				}
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
	}
	private: System::Void delete_database_button(System::Object^ sender, System::EventArgs^ e) {
		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text != "" && database_input->ForeColor != Color::Silver)
		{
			if (check_file(database_name))
			{
				System::Windows::Forms::DialogResult answer;
				answer = System::Windows::Forms::MessageBox::Show("Are you sure you want to delete database ?", "", MessageBoxButtons::YesNo);
				if (answer == System::Windows::Forms::DialogResult::Yes)
				{
					delete_file(database_name);
					System::Windows::Forms::MessageBox::Show("Database deleted");
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Database not found");
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
	}
	private: System::Void create_table_button(System::Object^ sender, System::EventArgs^ e) {
		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text == "" || database_input->ForeColor == Color::Silver)
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
		else
		{
			if (check_file(database_name))
			{
				std::string table_name = msclr::interop::marshal_as<std::string>(table_input->Text);
				if (table_input->Text == "" || table_input->ForeColor == Color::Silver)
				{
					System::Windows::Forms::MessageBox::Show("Table not selected");
				}
				else
				{
					if (!check_table(database_name, table_name))
					{
						if (Global::configured)
						{
							System::Windows::Forms::DialogResult answer;
							answer = System::Windows::Forms::MessageBox::Show("Keep configurations ?", "", MessageBoxButtons::YesNoCancel);
							if (answer == System::Windows::Forms::DialogResult::Yes)
							{
								create_table_function(database_name, table_name);
								System::Windows::Forms::MessageBox::Show("Table created");
							}
							else if(answer == System::Windows::Forms::DialogResult::No)
							{
								//Global::data->clear();
								this->configure_table();
							}
						}
						else
						{
							this->configure_table();
						}
					}
					else
					{
						System::Windows::Forms::DialogResult answer;
						answer = System::Windows::Forms::MessageBox::Show("Table already exists. Do you want to override ?", "", MessageBoxButtons::YesNo);
						if (answer == System::Windows::Forms::DialogResult::Yes)
						{
							delete_table_function(database_name, table_name);
							Global::data->clear();
							this->configure_table();
						}
					}
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Database not found");
			}
		}
	}
	private: System::Void delete_table_button(System::Object^ sender, System::EventArgs^ e) {
		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text == "" || database_input->ForeColor == Color::Silver)
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
		else
		{
			if (check_file(database_name))
			{
				std::string table_name = msclr::interop::marshal_as<std::string>(table_input->Text);
				if (table_input->Text == "" || table_input->ForeColor == Color::Silver)
				{
					System::Windows::Forms::MessageBox::Show("Table not selected");
				}
				else
				{
					if (check_table(database_name, table_name))
					{
						System::Windows::Forms::DialogResult answer;
						answer = System::Windows::Forms::MessageBox::Show("Are you sure you want to delete this table ?", "", MessageBoxButtons::YesNo);
						if (answer == System::Windows::Forms::DialogResult::Yes)
						{
							delete_table_function(database_name, table_name);
							System::Windows::Forms::MessageBox::Show("Table deleted");
						}
					}
					else
					{
						System::Windows::Forms::MessageBox::Show("Table doesn't exist");
					}
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Database not found");
			}
		}
	}
	private: System::Void configure_table(){
		this->Hide();
		DatabaseApplication::configure_window new_window;
		new_window.ShowDialog();
		this->Show();
	}
	private: System::Void display_tables(System::Object^ sender, System::EventArgs^ e) {
		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text == "" || database_input->ForeColor == Color::Silver)
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
		else
		{
			if (check_file(database_name))
			{
				this->Hide();
				DatabaseApplication::tables_window new_window;
				new_window.ShowDialog();
				this->Show();
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Database not found");
			}
		}
	}
	private: System::Void display_table(System::Object^ sender, System::EventArgs^ e) {

		std::string message;
		std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
		if (database_input->Text == "" || database_input->ForeColor == Color::Silver)
		{
			System::Windows::Forms::MessageBox::Show("Database not selected");
		}
		else
		{
			if (check_file(database_name))
			{
				std::string table_name = msclr::interop::marshal_as<std::string>(table_input->Text);
				if (table_input->Text == "" || table_input->ForeColor == Color::Silver)
				{
					System::Windows::Forms::MessageBox::Show("Table not selected");
				}
				else
				{
					if (!check_table(database_name, table_name))
					{
						System::Windows::Forms::MessageBox::Show("Table doesn't exists");
					}
					else
					{
						this->Hide();
						DatabaseApplication::table_window new_window;
						new_window.ShowDialog();
						std::string database_name = msclr::interop::marshal_as<std::string>(database_input->Text);
						std::string table_name = msclr::interop::marshal_as<std::string>(table_input->Text);
						get_data_table(database_name, table_name);
						this->Show();
					}
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Database not found");
			}
		}
	}
	private: System::Void remove_text_database(System::Object^ sender, System::EventArgs^ e) {
		if (database_input->ForeColor == Color::Silver)
		{
			database_input->Text = "";
			database_input->ForeColor = Color::Black;
		}
	}
	private: System::Void add_text_database(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(database_input->Text))
		{
			database_input->Text = "Database name";
			database_input->ForeColor = Color::Silver;
		}
	}
	private: System::Void remove_text_table(System::Object^ sender, System::EventArgs^ e) {
		if (table_input->ForeColor == Color::Silver)
		{
			table_input->Text = "";
			table_input->ForeColor = Color::Black;
		}
	}
	private: System::Void add_text_table(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(table_input->Text))
		{
			table_input->Text = "Table name";
			table_input->ForeColor = Color::Silver;
		}
	}
	private : System::Void focus(System::Object^ sender, EventArgs e)
	{
		this->Focus();
		this->Select();
	}
	private: System::Void form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void database_input_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};

}
