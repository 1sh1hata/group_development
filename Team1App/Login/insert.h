#pragma once

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// insert の概要
	/// </summary>
	public ref class insert : public System::Windows::Forms::Form
	{
	public:
		insert(void)
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
		~insert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ timePicker2;
	protected:
	private: System::Windows::Forms::ComboBox^ timePicker1;
	private: System::Windows::Forms::DateTimePicker^ datePicker2;
	private: System::Windows::Forms::DateTimePicker^ datePicker1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ logout;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->timePicker2 = (gcnew System::Windows::Forms::ComboBox());
			this->timePicker1 = (gcnew System::Windows::Forms::ComboBox());
			this->datePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timePicker2
			// 
			this->timePicker2 = (gcnew System::Windows::Forms::ComboBox());
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 60; j += 1)
				{
					this->timePicker2->Items->Add(String::Format("{0:D2}:{1:D2}", i, j));
				}
			}
			this->timePicker2->FormattingEnabled = true;
			this->timePicker2->Location = System::Drawing::Point(358, 240);
			this->timePicker2->Name = L"timePicker2";
			this->timePicker2->Size = System::Drawing::Size(121, 23);
			this->timePicker2->TabIndex = 23;
			// 
			// timePicker1
			// 
			this->timePicker1 = (gcnew System::Windows::Forms::ComboBox());
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 60; j += 1)
				{
					this->timePicker1->Items->Add(String::Format("{0:D2}:{1:D2}", i, j));
				}
			}
			this->timePicker1->FormattingEnabled = true;
			this->timePicker1->Location = System::Drawing::Point(522, 227);
			this->timePicker1->Name = L"TimePicker1";
			this->timePicker1->Size = System::Drawing::Size(178, 23);
			this->timePicker1->TabIndex = 95;
			// 
			// datePicker2
			// 
			this->datePicker2->Location = System::Drawing::Point(0, 0);
			this->datePicker2->Name = L"datePicker2";
			this->datePicker2->Size = System::Drawing::Size(200, 22);
			this->datePicker2->TabIndex = 2;
			// 
			// datePicker1
			// 
			this->datePicker1->Location = System::Drawing::Point(0, 0);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(200, 22);
			this->datePicker1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(45, 650);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(2);
			this->button2->Size = System::Drawing::Size(135, 65);
			this->button2->TabIndex = 39;
			this->button2->Text = L"戻る";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &insert::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(254, 457);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 28);
			this->label9->TabIndex = 38;
			this->label9->Text = L"メモ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(215, 414);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 28);
			this->label8->TabIndex = 37;
			this->label8->Text = L"重要度";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(215, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 28);
			this->label7->TabIndex = 36;
			this->label7->Text = L"担当者";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(238, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 28);
			this->label6->TabIndex = 35;
			this->label6->Text = L"場所";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(186, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 28);
			this->label5->TabIndex = 34;
			this->label5->Text = L"終了日時";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(186, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 28);
			this->label4->TabIndex = 33;
			this->label4->Text = L"開始日時";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(216, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 28);
			this->label3->TabIndex = 32;
			this->label3->Text = L"タイトル";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(269, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 28);
			this->label2->TabIndex = 31;
			this->label2->Text = L"ID　　 自動生成";
			this->label2->Click += gcnew System::EventHandler(this, &insert::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(38, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 40);
			this->label1->TabIndex = 30;
			this->label1->Text = L"スケジュール新規登録";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(779, 650);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2);
			this->button1->Size = System::Drawing::Size(135, 65);
			this->button1->TabIndex = 29;
			this->button1->Text = L"登録";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &insert::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(335, 464);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(350, 133);
			this->textBox6->TabIndex = 28;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(335, 421);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(351, 22);
			this->textBox5->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(335, 374);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(351, 22);
			this->textBox4->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(335, 329);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(351, 22);
			this->textBox3->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(335, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 22);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(335, 149);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 22);
			this->textBox1->TabIndex = 22;
			this->textBox1->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(315, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 15);
			this->label10->TabIndex = 134;
			this->label10->Text = L"：";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(314, 425);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 15);
			this->label11->TabIndex = 133;
			this->label11->Text = L"：";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(314, 464);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 15);
			this->label12->TabIndex = 132;
			this->label12->Text = L"：";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(315, 330);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 15);
			this->label13->TabIndex = 131;
			this->label13->Text = L"：";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(314, 285);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 15);
			this->label14->TabIndex = 130;
			this->label14->Text = L"：";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(314, 238);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 15);
			this->label15->TabIndex = 129;
			this->label15->Text = L"：";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(314, 191);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 15);
			this->label16->TabIndex = 128;
			this->label16->Text = L"：";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(314, 149);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 15);
			this->label17->TabIndex = 127;
			this->label17->Text = L"：";
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Orange;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(779, 38);
			this->logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(135, 43);
			this->logout->TabIndex = 135;
			this->logout->Text = L"ログアウト";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &insert::logout_Click);
			// 
			// insert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->timePicker2);
			this->Controls->Add(this->timePicker1);
			this->Controls->Add(this->datePicker2);
			this->Controls->Add(this->datePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"insert";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"insert";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//テキストボックスに入力された内容をCSVに追加する関数
void AddToCSV(array<String^>^ texts)
{
	//追加するCSVのパス
	String^ filePath = ".\\schedule.csv";
	try {
		//CSVを追記モードで開く
		StreamWriter^ writer = gcnew StreamWriter(filePath, true);
		//テキストをファイルに書き込む
		writer->WriteLine(String::Join(",", texts));
		//ファイルを閉じる
		writer->Close();
	}
	catch (Exception^ e)
	{
		//エラー処理
		Console::WriteLine("エラー：" + e->Message);
	}
}

int GetNextId(String^ filePath)
{
	int lastId = 0;
	try {
		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ lastLine = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			lastLine = line;
		}
		reader->Close();
		if (!String::IsNullOrEmpty(lastLine)) {
			array<String^>^ fields = lastLine->Split(',');
			lastId = Int32::Parse(fields[0]);
		}
	}
	catch (Exception^ e)
	{
		Console::WriteLine("エラー：" + e->Message);
	}
	return lastId + 1;
}


// 登録ボタンがクリックされたときに呼び出される関数
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// テキストボックスから入力
	array<String^>^ inputTexts = gcnew array<String^>(9);
	String^ filePath = ".\\schedule.csv";
	inputTexts[0] = GetNextId(filePath).ToString(); // 0番目にはCSVファイルの最後の行の1列目の値より1大きい数字を設定
	inputTexts[1] = textBox2->Text;
	inputTexts[2] = datePicker1->Value.ToString("yyyy/MM/dd") + " " + timePicker1->Text; // 開始日時
	inputTexts[3] = datePicker2->Value.ToString("yyyy/MM/dd") + " " + timePicker2->Text; // 終了日時
	inputTexts[4] = textBox3->Text;
	inputTexts[5] = textBox4->Text;
	inputTexts[6] = textBox5->Text;
	inputTexts[7] = textBox6->Text;
	inputTexts[8] = "0"; // 9列目にはデフォルトで0を設定

	// 未入力の項目があるかチェック
	for (int i = 2; i < 8; i++) { // iは1から始まることに注意
		if (String::IsNullOrEmpty(inputTexts[i])) {
			MessageBox::Show("TextBox" + i + "が未入力です。");
			return;
		}
	}
	// CSVファイルに追加
	AddToCSV(inputTexts);
	MessageBox::Show("登録が完了しました。");
	Close();
}
//戻るボタンがクリックされたときに呼び出される関数
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("ログアウトしますか？", "確認", MessageBoxButtons::YesNo)) {
		this->Close();
	}
}
};
}
