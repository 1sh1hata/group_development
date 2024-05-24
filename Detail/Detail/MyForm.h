#pragma once

namespace Detail {

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
		MyForm(String^ key) {
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ s_title;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ finish;
	private: System::Windows::Forms::Label^ location;

	private: System::Windows::Forms::Label^ assignee;
	private: System::Windows::Forms::Label^ memo;







	private: System::Windows::Forms::Button^ edit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;





	private: System::Windows::Forms::TextBox^ textBox1;





	private: System::Windows::Forms::Button^ logout;


	private: System::Windows::Forms::Button^ back;






	protected:

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->title = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->s_title = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->finish = (gcnew System::Windows::Forms::Label());
			this->location = (gcnew System::Windows::Forms::Label());
			this->assignee = (gcnew System::Windows::Forms::Label());
			this->memo = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->title->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->title->Location = System::Drawing::Point(27, 52);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(292, 40);
			this->title->TabIndex = 0;
			this->title->Text = L"スケジュール詳細";
			this->title->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->ID->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ID->Location = System::Drawing::Point(245, 149);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(41, 29);
			this->ID->TabIndex = 1;
			this->ID->Text = L"ID";
			this->ID->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// s_title
			// 
			this->s_title->AutoSize = true;
			this->s_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->s_title->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->s_title->Location = System::Drawing::Point(204, 190);
			this->s_title->Name = L"s_title";
			this->s_title->Size = System::Drawing::Size(85, 24);
			this->s_title->TabIndex = 2;
			this->s_title->Text = L"タイトル";
			this->s_title->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->start->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->start->Location = System::Drawing::Point(180, 232);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(110, 24);
			this->start->TabIndex = 3;
			this->start->Text = L"開始日時";
			// 
			// finish
			// 
			this->finish->AutoSize = true;
			this->finish->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->finish->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->finish->Location = System::Drawing::Point(179, 269);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(110, 24);
			this->finish->TabIndex = 4;
			this->finish->Text = L"終了日時";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->location->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->location->Location = System::Drawing::Point(227, 308);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(60, 24);
			this->location->TabIndex = 5;
			this->location->Text = L"場所";
			// 
			// assignee
			// 
			this->assignee->AutoSize = true;
			this->assignee->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->assignee->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->assignee->Location = System::Drawing::Point(203, 349);
			this->assignee->Name = L"assignee";
			this->assignee->Size = System::Drawing::Size(85, 24);
			this->assignee->TabIndex = 6;
			this->assignee->Text = L"担当者";
			this->assignee->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// memo
			// 
			this->memo->AutoSize = true;
			this->memo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->memo->Location = System::Drawing::Point(237, 395);
			this->memo->Name = L"memo";
			this->memo->Size = System::Drawing::Size(47, 24);
			this->memo->TabIndex = 7;
			this->memo->Text = L"メモ";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::Yellow;
			this->edit->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->edit->Location = System::Drawing::Point(767, 658);
			this->edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(135, 65);
			this->edit->TabIndex = 15;
			this->edit->Text = L"編集";
			this->edit->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(301, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 15);
			this->label1->TabIndex = 16;
			this->label1->Text = L"：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(301, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(301, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 18;
			this->label3->Text = L"：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(301, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 19;
			this->label4->Text = L"：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(301, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 15);
			this->label5->TabIndex = 20;
			this->label5->Text = L"：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(301, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 15);
			this->label6->TabIndex = 21;
			this->label6->Text = L"：";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(301, 402);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 15);
			this->label7->TabIndex = 22;
			this->label7->Text = L"：";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(323, 399);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(351, 238);
			this->textBox7->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(323, 352);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(351, 22);
			this->textBox6->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(323, 190);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(323, 238);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(351, 22);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(323, 276);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(351, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(323, 312);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(351, 22);
			this->textBox5->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(323, 155);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 22);
			this->textBox1->TabIndex = 8;
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Orange;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(753, 43);
			this->logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(176, 65);
			this->logout->TabIndex = 23;
			this->logout->Text = L"ログアウト";
			this->logout->UseVisualStyleBackColor = false;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::Yellow;
			this->back->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->back->Location = System::Drawing::Point(83, 658);
			this->back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(135, 65);
			this->back->TabIndex = 24;
			this->back->Text = L"戻る";
			this->back->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->back);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->edit);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->memo);
			this->Controls->Add(this->assignee);
			this->Controls->Add(this->location);
			this->Controls->Add(this->finish);
			this->Controls->Add(this->start);
			this->Controls->Add(this->s_title);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->title);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"スケジュール詳細";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ keyVal = "1001";
	private: int addNum = 0;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ path = "C:\\Users\\tounichi\\Desktop\\schedule.csv";
		StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
		List<String^>^ keyList = gcnew List<String^>;
		String^ n = "";
		//------エラー処理-------
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

			// TextBox1からTextBox6に値を設定
			if (i < 6) {
				Control^ c = this->Controls["textBox" + (i + 1).ToString()];
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}