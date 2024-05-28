#pragma once
#include "insert.h"
#include "detail.h"

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Collections::Generic;

	/// <summary>
	/// all_user_show の概要
	/// </summary>
	public ref class all_user_show : public System::Windows::Forms::Form
	{
	public:
		all_user_show(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~all_user_show()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::TextBox^ St_dayTextBox;
	private: System::Windows::Forms::TextBox^ TitleTextBox;
	private: System::Windows::Forms::Button^ logout;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->St_dayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TitleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->logout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 269);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(341, 188);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &all_user_show::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->ContextMenuStrip = this->contextMenuStrip1;
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &all_user_show::contextMenuStrip1_Opening);
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"タイトル";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 80;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(571, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 41);
			this->button1->TabIndex = 17;
			this->button1->Text = L"新規登録";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &all_user_show::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(33, 118);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"↓↓あいまい検索欄";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(28, 208);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"タイトル";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(32, 160);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(28, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(347, 37);
			this->label1->TabIndex = 13;
			this->label1->Text = L"スケジュール一覧表示";
			// 
			// SearchButton
			// 
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->SearchButton->Location = System::Drawing::Point(350, 203);
			this->SearchButton->Margin = System::Windows::Forms::Padding(4);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(123, 41);
			this->SearchButton->TabIndex = 12;
			this->SearchButton->Text = L"検索";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &all_user_show::SearchButton_Click);
			// 
			// St_dayTextBox
			// 
			this->St_dayTextBox->Location = System::Drawing::Point(131, 203);
			this->St_dayTextBox->Margin = System::Windows::Forms::Padding(4);
			this->St_dayTextBox->Name = L"St_dayTextBox";
			this->St_dayTextBox->Size = System::Drawing::Size(191, 22);
			this->St_dayTextBox->TabIndex = 11;
			// 
			// TitleTextBox
			// 
			this->TitleTextBox->Location = System::Drawing::Point(131, 160);
			this->TitleTextBox->Margin = System::Windows::Forms::Padding(4);
			this->TitleTextBox->Name = L"TitleTextBox";
			this->TitleTextBox->Size = System::Drawing::Size(191, 22);
			this->TitleTextBox->TabIndex = 10;
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Orange;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(617, 19);
			this->logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(135, 43);
			this->logout->TabIndex = 49;
			this->logout->Text = L"ログアウト";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &all_user_show::logout_Click);
			// 
			// all_user_show
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 583);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->St_dayTextBox);
			this->Controls->Add(this->TitleTextBox);
			this->Name = L"all_user_show";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"all_user_show";
			this->Activated += gcnew System::EventHandler(this, &all_user_show::all_user_show_Activated);
			this->Load += gcnew System::EventHandler(this, &all_user_show::all_user_show_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	detail^ detailForm;
	insert^ insertForm;

	private: System::Void all_user_show_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path = ".\\schedule.csv";
		StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
		List<String^>^ titleList = gcnew List<String^>;
		List<String^>^ secondColumnList = gcnew List<String^>;
		String^ n = "";
		try {
			//headerを飛ばす
			sr->ReadLine();
			while (sr->Peek() > 0) {
				String^ line = sr->ReadLine();
				cli::array<String^>^ arr = line->Split(',');
				if (arr[0] == "END") break;
				//titleを取得
				titleList->Add(arr[0]);
				//2列目の値を取得
				secondColumnList->Add(arr[1]);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
		finally {
			sr->Close();
		}
		for (int i = 0; i < titleList->Count; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0]->Value = titleList[i];
			dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[1]->Value = secondColumnList[i];
		}
		dataGridView1->Refresh();
		return System::Void();
	}


	private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ titleSearch = TitleTextBox->Text;
		String^ stDaySearch = St_dayTextBox->Text;

		// 全ての行を一旦削除
		dataGridView1->Rows->Clear();

		// CSVファイルを開く
		StreamReader^ sr;
		int count = 0;
		try {
			sr = gcnew StreamReader(".\\schedule.csv", Encoding::UTF8);
			//headerを飛ばす
			sr->ReadLine();

			int rowIndex = 0;
			while (sr->Peek() > 0) {
				String^ line = sr->ReadLine();
				cli::array<String^>^ arr = line->Split(',');
				if (arr[0] == "END") {
					break;
				}

				if (titleSearch == "" && stDaySearch == "") {
					// 全ての行を一旦削除
					count = 1;
					dataGridView1->Rows->Clear();
					all_user_show_Load(sender, e);
				}

				else if ((titleSearch == "" || arr[0]->Contains(titleSearch)) && (stDaySearch == "" || arr[1]->Contains(stDaySearch))) {
					// 必要な行が存在しない場合は追加
					if (rowIndex >= dataGridView1->Rows->Count) {
						dataGridView1->Rows->Add();
					}
					dataGridView1->Rows[rowIndex]->Cells[0]->Value = arr[0];
					dataGridView1->Rows[rowIndex]->Cells[1]->Value = arr[1];
					rowIndex++;
					count++;
				}
			}
			if (count == 0) {
				MessageBox::Show("該当項目がありません");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("CSVファイルが読み込めません");
		}
		finally {
			sr->Close();
		}
		dataGridView1->Refresh();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		insertForm = gcnew insert();
		insertForm->ShowDialog();
		dataGridView1->Rows->Clear();
		all_user_show_Load(sender, e);
		return System::Void();
	}


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ key;
		for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
		{
			key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

		}
		detail^ detailForm = gcnew detail(key);
		detailForm->ShowDialog();
		dataGridView1->Rows->Clear();
		all_user_show_Load(sender, e);
		return System::Void();
	}

	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ key;
		for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
		{
			key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

		}
		detailForm = gcnew detail(key);
		detailForm->ShowDialog();
		return System::Void();
	}
	private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("ログアウトしますか？", "確認", MessageBoxButtons::YesNo)) {
			logout::canLogout = false;
			this->Close();
		}
		else {}

	}
	private: System::Void all_user_show_Activated(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Refresh();
		if (logout::canLogout == true) {
			logout::canLogout = false;
			this->Close();
		}
		else {}
	}
	};
}
