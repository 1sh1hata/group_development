#pragma once

namespace hodumi2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Collections::Generic;
	using namespace hodumi;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::TextBox^ TitleTextBox;
	private: System::Windows::Forms::TextBox^ St_dayTextBox;
	private: System::Windows::Forms::Button^ SearchButton;
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
			this->TitleTextBox = (gcnew System::Windows::Forms::TextBox());
			this->St_dayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(12, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// TitleTextBox
			// 
			this->TitleTextBox->Location = System::Drawing::Point(13, 38);
			this->TitleTextBox->Name = L"TitleTextBox";
			this->TitleTextBox->Size = System::Drawing::Size(100, 19);
			this->TitleTextBox->TabIndex = 1;
			// 
			// St_dayTextBox
			// 
			this->St_dayTextBox->Location = System::Drawing::Point(137, 38);
			this->St_dayTextBox->Name = L"St_dayTextBox";
			this->St_dayTextBox->Size = System::Drawing::Size(100, 19);
			this->St_dayTextBox->TabIndex = 2;
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(291, 38);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(75, 23);
			this->SearchButton->TabIndex = 3;
			this->SearchButton->Text = L"検索";
			this->SearchButton->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 318);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->St_dayTextBox);
			this->Controls->Add(this->TitleTextBox);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ path = "C:\\MySQL\\schedule.csv";
		StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
		List<String^>^ titleList = gcnew List<String^>;
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
		}
		dataGridView1->Refresh();
		return System::Void();
	}

	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ key;
		for each (DataGridViewCell^ c in dataGridView1->SelectedCells)
		{
			key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

		}
		MyForm1^ m1 = gcnew MyForm1(key);
		m1->Show();
		return System::Void();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ key;
		for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
		{
			key = dataGridView1->Rows[c->RowIndex]->Cells[0]->Value->ToString();

		}
		MyForm1^ m1 = gcnew MyForm1(key);
		m1->Show();
		return System::Void();
	}

		   private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   String^ titleSearch = TitleTextBox->Text;
			   String^ stDaySearch = St_dayTextBox->Text;

			   dataGridView1->Rows->Clear();

			   StreamReader^ sr = gcnew StreamReader("C:\\MySQL\\schedule.csv", Encoding::UTF8);
			   try {
				   //headerを飛ばす
				   sr->ReadLine();
				   while (sr->Peek() > 0) {
					   String^ line = sr->ReadLine();
					   cli::array<String^>^ arr = line->Split(',');
					   if (arr[0] == "END") break;

					   //titleとst_dayで検索
					   if (arr[0]->Contains(titleSearch) && arr[1]->Contains(stDaySearch)) {
						   int rowIndex = dataGridView1->Rows->Add();
						   dataGridView1->Rows[rowIndex]->Cells[0]->Value = arr[0];
						   dataGridView1->Rows[rowIndex]->Cells[1]->Value = arr[1];
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

};
}
