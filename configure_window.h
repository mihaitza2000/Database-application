#pragma once
#include "main.h"
#include "Global.h"

namespace DatabaseApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class configure_window : public System::Windows::Forms::Form
	{
	public:
		configure_window(void)
		{
			InitializeComponent();
		}

	protected:
		~configure_window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ table;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column2;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(configure_window::typeid));
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// table
			// 
			this->table->AllowUserToResizeColumns = false;
			this->table->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"MV Boli", 20));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->table->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->table->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"MV Boli", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeight = 50;
			this->table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->Column2 });
			this->table->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"MV Boli", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->table->DefaultCellStyle = dataGridViewCellStyle4;
			this->table->Dock = System::Windows::Forms::DockStyle::Fill;
			this->table->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
			this->table->EnableHeadersVisualStyles = false;
			this->table->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->table->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->table->Location = System::Drawing::Point(3, 3);
			this->table->Name = L"table";
			this->table->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			this->table->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->table->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->table->RowTemplate->Height = 24;
			this->table->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->table->Size = System::Drawing::Size(786, 485);
			this->table->StandardTab = true;
			this->table->TabIndex = 0;
			this->table->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &configure_window::dataGridView1_CellContentClick_1);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->DisplayStyle = System::Windows::Forms::DataGridViewComboBoxDisplayStyle::ComboBox;
			this->Column2->HeaderText = L"Type";
			this->Column2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"int", L"text" });
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->table, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(792, 614);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->cancel_button, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->save_button, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 494);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(786, 117);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// cancel_button
			// 
			this->cancel_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancel_button->Location = System::Drawing::Point(20, 20);
			this->cancel_button->Margin = System::Windows::Forms::Padding(20);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(353, 77);
			this->cancel_button->TabIndex = 0;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &configure_window::cancel_function);
			// 
			// save_button
			// 
			this->save_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->save_button->Font = (gcnew System::Drawing::Font(L"MV Boli", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->save_button->Location = System::Drawing::Point(413, 20);
			this->save_button->Margin = System::Windows::Forms::Padding(20);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(353, 77);
			this->save_button->TabIndex = 1;
			this->save_button->Text = L"Save";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &configure_window::save_function);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 614);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"form2";
			this->Text = L"Table";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &configure_window::form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->insert_in_table();

		}
#pragma endregion
	private: System::Void insert_in_table() {
		if (Global::data->size() != 0)
		{
			for (auto iterator = Global::data->begin(); iterator != Global::data->end(); iterator++)
			{
				int index = this->table->Rows->Add();
				array<System::String^>^ row = gcnew array<System::String^>(2);
				row[0] = gcnew String((iterator->first).c_str());
				row[1] = gcnew String((iterator->second).c_str());
				this->table->Rows[index]->Cells[0]->Value = row[0];
				this->table->Rows[index]->Cells[1]->Value = row[1];
			}
		}
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cancel_function(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void save_function(System::Object^ sender, System::EventArgs^ e) {
		std::string name, type;
		Global::configured = true;
		for (int row = 0; row < table->Rows->Count - 1; row++)
		{
			if (table->Rows[row]->Cells[0]->Value == nullptr)
			{
				name = "";
				Global::configured = false;
			}
			else
			{
				name = msclr::interop::marshal_as<std::string>(table->Rows[row]->Cells[0]->Value->ToString());
			}
			if (table->Rows[row]->Cells[1]->Value == nullptr)
			{
				type = "";
				Global::configured = false;
			}
			else
			{
				type = msclr::interop::marshal_as<std::string>(table->Rows[row]->Cells[1]->Value->ToString());
			}
			std::pair<std::string, std::string> p;
			p.first = name;
			p.second = type;
			Global::data->push_back(p);
		}
		if (Global::configured && table->Rows->Count > 1)
		{
			System::Windows::Forms::MessageBox::Show("Table configured");
			this->Close();
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Table not configured");
			Global::configured = false;
		}
	}
};
}
