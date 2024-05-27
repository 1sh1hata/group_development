#pragma once
#include "show_detile.h"
#include "Insert.h"

namespace alluser {


	using namespace hodumi;
	using namespace detile;
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
		/// All の概要
		/// </summary>
		public ref class All : public System::Windows::Forms::Form
		{
		public:
			All(void)
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
			~All()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::DataGridView^ dataGridView1;
		private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

		private: System::Windows::Forms::TextBox^ TitleTextBox;
		private: System::Windows::Forms::TextBox^ St_dayTextBox;
		private: System::Windows::Forms::Button^ SearchButton;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
		private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Button^ button1;







		protected:

		protected:
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
				this->TitleTextBox = (gcnew System::Windows::Forms::TextBox());
				this->St_dayTextBox = (gcnew System::Windows::Forms::TextBox());
				this->SearchButton = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
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
				this->dataGridView1->Location = System::Drawing::Point(25, 260);
				this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->dataGridView1->Name = L"dataGridView1";
				this->dataGridView1->RowHeadersWidth = 51;
				this->dataGridView1->RowTemplate->Height = 21;
				this->dataGridView1->Size = System::Drawing::Size(341, 188);
				this->dataGridView1->TabIndex = 0;
				this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &All::dataGridView1_CellContentClick);
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
				// 
				// Column2
				// 
				this->Column2->HeaderText = L"タイトル";
				this->Column2->MinimumWidth = 6;
				this->Column2->Name = L"Column2";
				this->Column2->Width = 80;
				// 
				// TitleTextBox
				// 
				this->TitleTextBox->Location = System::Drawing::Point(119, 151);
				this->TitleTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->TitleTextBox->Name = L"TitleTextBox";
				this->TitleTextBox->Size = System::Drawing::Size(191, 22);
				this->TitleTextBox->TabIndex = 1;
				// 
				// St_dayTextBox
				// 
				this->St_dayTextBox->Location = System::Drawing::Point(119, 194);
				this->St_dayTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->St_dayTextBox->Name = L"St_dayTextBox";
				this->St_dayTextBox->Size = System::Drawing::Size(191, 22);
				this->St_dayTextBox->TabIndex = 2;
				// 
				// SearchButton
				// 
				this->SearchButton->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
				this->SearchButton->Location = System::Drawing::Point(338, 194);
				this->SearchButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
				this->SearchButton->Name = L"SearchButton";
				this->SearchButton->Size = System::Drawing::Size(123, 41);
				this->SearchButton->TabIndex = 3;
				this->SearchButton->Text = L"検索";
				this->SearchButton->UseVisualStyleBackColor = true;
				this->SearchButton->Click += gcnew System::EventHandler(this, &All::SearchButton_Click_1);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
				this->label1->Location = System::Drawing::Point(16, 16);
				this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(347, 37);
				this->label1->TabIndex = 4;
				this->label1->Text = L"スケジュール一覧表示";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->label2->Location = System::Drawing::Point(20, 151);
				this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(23, 15);
				this->label2->TabIndex = 5;
				this->label2->Text = L"ID";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->label3->Location = System::Drawing::Point(16, 199);
				this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(55, 15);
				this->label3->TabIndex = 6;
				this->label3->Text = L"タイトル";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->label4->Location = System::Drawing::Point(21, 109);
				this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(124, 13);
				this->label4->TabIndex = 7;
				this->label4->Text = L"↓↓あいまい検索欄";
				// 
				// button1
				// 
				this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(128)));
				this->button1->Location = System::Drawing::Point(559, 194);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(122, 41);
				this->button1->TabIndex = 8;
				this->button1->Text = L"新規登録";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &All::button1_Click);
				// 
				// All
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::White;
				this->ClientSize = System::Drawing::Size(717, 576);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->SearchButton);
				this->Controls->Add(this->St_dayTextBox);
				this->Controls->Add(this->TitleTextBox);
				this->Controls->Add(this->dataGridView1);
				this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->Name = L"All";
				this->Text = L"All";
				this->Load += gcnew System::EventHandler(this, &All::All_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
		private: System::Void All_Load(System::Object^ sender, System::EventArgs^ e)
		{
			String^ path = "C:\\MySQL\\schedule.csv";
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


		private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			String^ key;
			for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
			{
				key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

			}
			Det^ m1 = gcnew Det(key);
			m1->Show();
			return System::Void();
		}
		private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			String^ key;
			for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
			{
				key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

			}
			Det^ m1 = gcnew Det(key);
			m1->Show();
			return System::Void();
		}

		private: System::Void SearchButton_Click_1(System::Object^ sender, System::EventArgs^ e) {
			String^ titleSearch = TitleTextBox->Text;
			String^ stDaySearch = St_dayTextBox->Text;

			// 全ての行を一旦削除
			dataGridView1->Rows->Clear();

			// CSVファイルを開く
			StreamReader^ sr = gcnew StreamReader("C:\\MySQL\\schedule.csv", Encoding::UTF8);
			try {
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
						dataGridView1->Rows->Clear();
						All_Load(sender, e);
					}

					else if ((titleSearch == "" || arr[0]->Contains(titleSearch)) && (stDaySearch == "" || arr[1]->Contains(stDaySearch))) {
						// 必要な行が存在しない場合は追加
						if (rowIndex >= dataGridView1->Rows->Count) {
							dataGridView1->Rows->Add();
						}
						dataGridView1->Rows[rowIndex]->Cells[0]->Value = arr[0];
						dataGridView1->Rows[rowIndex]->Cells[1]->Value = arr[1];
						rowIndex++;
					}
				}
			}
			catch (Exception^ e) {
				MessageBox::Show(e->ToString());
			}
			finally {
				sr->Close();
			}
			dataGridView1->Refresh();
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Insert^ insertForm = gcnew Insert();
			insertForm->ShowDialog();
			return System::Void();
		}
		};
	}
