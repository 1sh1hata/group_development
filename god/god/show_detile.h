#pragma once

namespace detile {

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
	/// Det の概要
	/// </summary>
	public ref class Det : public System::Windows::Forms::Form
	{
	public:
		Det(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}
		Det(String^ key) {
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			keyVal = key;
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Det()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 21;
			this->dataGridView1->Size = System::Drawing::Size(320, 188);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Det::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"内訳";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 231);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"追加";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Det::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(140, 231);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"削除";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Det::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(265, 231);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"登録";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Det::button3_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Det::contextMenuStrip1_Opening);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(429, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(429, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(429, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(429, 134);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(429, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(429, 192);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 9;
			// 
			// Det
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 461);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Det";
			this->Text = L"Det";
			this->Load += gcnew System::EventHandler(this, &Det::Det_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ keyVal;
	private: int addNum = 0;
	private: System::Void Det_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ path = "C:\\MySQL\\schedule.csv";
		StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
		List<String^>^ keyList = gcnew List<String^>;
		String^ n = "";
		try {
			//headerを飛ばす
			sr->ReadLine();
			while (sr->Peek() > 0) {
				String^ line = sr->ReadLine();
				cli::array<String^>^ arr = line->Split(',');
				if (arr[0] == "END") break;
				//keyとなる値から検索
				if (arr[0] == keyVal) {
					//データの最大長を取得
					int num = arr->Length;
					//追加データがあるか判定
					if (arr[addNum] != "" && arr[addNum] != nullptr) {
						//ある場合はカンマ区切りで取得
						for (int i = addNum; i < num; i++) {
							if (arr[i] == "" || i == num - 1) {
								keyList->Add(arr[i]);
								break;
							}
							else {
								keyList->Add(arr[i]);
							}
						}
					}
				}
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
		finally {
			sr->Close();
		}
		for (int i = 0; i < keyList->Count; i++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0]->Value = keyList[i];
			// TextBox1からTextBox6に値を設定
			if (i < 6) {
				Control^ c = this->Controls["TextBox" + (i + 1).ToString()];
				if (c != nullptr) {
					TextBox^ tb = dynamic_cast<TextBox^>(c);
					if (tb != nullptr) {
						tb->Text = keyList[i];
					}
				}
			}
		}

		return System::Void();
	}
		   //従来のDataGridViewのやり方 

	 //private: System::Void Det_Load(System::Object^ sender, System::EventArgs^ e)
	 //{
	 //	String^ path = "C:\\MySQL\\schedule.csv";
	 //	StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
	 //	List<String^>^ keyList = gcnew List<String^>;
	 //	String^ n = "";
	 //	try {
	 //		//headerを飛ばす
	 //		sr->ReadLine();
	 //		while (sr->Peek() > 0) {
	 //			String^ line = sr->ReadLine();
	 //			cli::array<String^>^ arr = line->Split(',');
	 //			if (arr[0] == "END") break;
	 //			//keyとなる値から検索
	 //			if (arr[0] == keyVal) {
	 //				//データの最大長を取得
	 //				int num = arr->Length;
	 //				//追加データがあるか判定
	 //				if (arr[addNum] != "" && arr[addNum] != nullptr) {
	 //					//ある場合はカンマ区切りで取得
	 //					for (int i = addNum; i < num; i++) {
	 //						if (arr[i] == "" || i == num - 1) {
	 //							keyList->Add(arr[i]);
	 //							break;
	 //						}
	 //						else {
	 //							keyList->Add(arr[i]);
	 //						}
	 //					}
	 //				}
	 //			}
	 //		}
	 //	}
	 //	catch (Exception^ e) {
	 //		MessageBox::Show(e->ToString());
	 //	}
	 //	finally {
	 //		sr->Close();
	 //	}
	 //	for (int i = 0; i < keyList->Count; i++) {
	 //		dataGridView1->Rows->Add();
	 //		dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells[0]->Value = keyList[i];
	 //	}

	 //	return System::Void();
	 //}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Rows->Add();
		return System::Void();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		for each (DataGridViewRow ^ r in dataGridView1->SelectedRows)
		{
			dataGridView1->Rows->RemoveAt(r->Index);
		}

		for each (DataGridViewCell ^ c in dataGridView1->SelectedCells)
		{
			dataGridView1->Rows->RemoveAt(c->RowIndex);
		}
		return System::Void();
	};
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ path = "C:\\MySQL\\schedule.csv";
		StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
		List<String^>^ bdArr = gcnew List<String^>;
		try {
			//headerを飛ばす
			bdArr->Add(sr->ReadLine());
			while (sr->Peek() > 0) {
				String^ line = sr->ReadLine();
				cli::array<String^>^ arr = line->Split(',');
				if (arr[0] == "END") {
					bdArr->Add(line);
					break;
				}
				//keyとなる値から検索
				if (arr[0] == keyVal) {
					cli::array<String^>^ arr = line->Split(',');
					String^ afLine = "";
					String^ sep = ",";
					for (int j = 0; j < addNum; j++) {
						afLine += arr[j] + sep;
					}
					for (int n = 0; n < dataGridView1->RowCount; n++) {
						if (n == dataGridView1->RowCount - 1) sep = "";
						afLine += dataGridView1->Rows[n]->Cells[0]->Value->ToString() + sep;
					}
					bdArr->Add(afLine);
				}
				else {
					bdArr->Add(line);
				}
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
		finally {
			sr->Close();
		}
		StreamWriter^ sw = gcnew StreamWriter(path, false, Encoding::UTF8);
		try {
			for (int i = 0; i < bdArr->Count; i++) {
				String^ sep = "\n";
				if (i == bdArr->Count - 1) sep = "";
				sw->Write(bdArr[i] + sep);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
		finally {
			sw->Close();
		}
		return System::Void();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

	}


	};
}
