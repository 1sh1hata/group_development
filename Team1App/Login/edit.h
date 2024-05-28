#pragma once

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
	/// edit の概要
	/// </summary>
	public ref class edit : public System::Windows::Forms::Form
	{
	public:
		edit(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}
		edit(String^ key)
		{
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
		~edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ TimePicker2;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::ComboBox^ TimePicker1;
	private: System::Windows::Forms::DateTimePicker^ datePicker2;
	private: System::Windows::Forms::DateTimePicker^ datePicker1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Button^ logout;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ memo;
	private: System::Windows::Forms::Label^ assignee;
	private: System::Windows::Forms::Label^ location;
	private: System::Windows::Forms::Label^ finish;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ s_title;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ label5;

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
			this->TimePicker2 = (gcnew System::Windows::Forms::ComboBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TimePicker1 = (gcnew System::Windows::Forms::ComboBox());
			this->datePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->back = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->memo = (gcnew System::Windows::Forms::Label());
			this->assignee = (gcnew System::Windows::Forms::Label());
			this->location = (gcnew System::Windows::Forms::Label());
			this->finish = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->s_title = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// TimePicker2
			// 
			this->TimePicker2 = (gcnew System::Windows::Forms::ComboBox());
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 60; j += 1)
				{
					this->TimePicker2->Items->Add(String::Format("{0:D2}:{1:D2}", i, j));
				}
			}
			this->TimePicker2->FormattingEnabled = true;
			this->TimePicker2->Location = System::Drawing::Point(522, 269);
			this->TimePicker2->Name = L"TimePicker2";
			this->TimePicker2->Size = System::Drawing::Size(178, 23);
			this->TimePicker2->TabIndex = 95;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// TimePicker1
			// 
			this->TimePicker1 = (gcnew System::Windows::Forms::ComboBox());
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 60; j += 1)
				{
					this->TimePicker1->Items->Add(String::Format("{0:D2}:{1:D2}", i, j));
				}
			}
			this->TimePicker1->FormattingEnabled = true;
			this->TimePicker1->Location = System::Drawing::Point(522, 227);
			this->TimePicker1->Name = L"TimePicker1";
			this->TimePicker1->Size = System::Drawing::Size(178, 23);
			this->TimePicker1->TabIndex = 95;
			// 
			// datePicker2
			// 
			this->datePicker2->Location = System::Drawing::Point(335, 282);
			this->datePicker2->Name = L"datePicker2";
			this->datePicker2->Size = System::Drawing::Size(177, 22);
			this->datePicker2->TabIndex = 124;
			// 
			// datePicker1
			// 
			this->datePicker1->Location = System::Drawing::Point(335, 234);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(177, 22);
			this->datePicker1->TabIndex = 123;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(314, 424);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 15);
			this->label8->TabIndex = 122;
			this->label8->Text = L"：";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(215, 414);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 28);
			this->label9->TabIndex = 121;
			this->label9->Text = L"重要度";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(335, 421);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(350, 22);
			this->textBox7->TabIndex = 120;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(705, 102);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 119;
			this->dataGridView1->Visible = false;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::Yellow;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->back->Location = System::Drawing::Point(45, 650);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(135, 65);
			this->back->TabIndex = 118;
			this->back->Text = L"戻る";
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &edit::back_Click);
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Orange;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(779, 38);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(135, 43);
			this->logout->TabIndex = 117;
			this->logout->Text = L"ログアウト";
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &edit::logout_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(314, 463);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 15);
			this->label7->TabIndex = 116;
			this->label7->Text = L"：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(315, 374);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 15);
			this->label6->TabIndex = 115;
			this->label6->Text = L"：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(314, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 113;
			this->label4->Text = L"：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(314, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 112;
			this->label3->Text = L"：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(314, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 15);
			this->label2->TabIndex = 111;
			this->label2->Text = L"：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(314, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 15);
			this->label1->TabIndex = 110;
			this->label1->Text = L"：";
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::Yellow;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->update->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->update->Location = System::Drawing::Point(779, 650);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(135, 65);
			this->update->TabIndex = 109;
			this->update->Text = L"更新";
			this->update->UseVisualStyleBackColor = false;
			this->update->Click += gcnew System::EventHandler(this, &edit::update_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(335, 464);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(350, 133);
			this->textBox8->TabIndex = 108;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(335, 374);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(350, 22);
			this->textBox6->TabIndex = 107;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(335, 329);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(350, 22);
			this->textBox5->TabIndex = 106;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(335, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(350, 22);
			this->textBox2->TabIndex = 105;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(335, 149);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 22);
			this->textBox1->TabIndex = 104;
			// 
			// memo
			// 
			this->memo->AutoSize = true;
			this->memo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memo->ForeColor = System::Drawing::Color::Transparent;
			this->memo->Location = System::Drawing::Point(254, 457);
			this->memo->Name = L"memo";
			this->memo->Size = System::Drawing::Size(54, 28);
			this->memo->TabIndex = 103;
			this->memo->Text = L"メモ";
			// 
			// assignee
			// 
			this->assignee->AutoSize = true;
			this->assignee->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->assignee->ForeColor = System::Drawing::Color::Transparent;
			this->assignee->Location = System::Drawing::Point(215, 367);
			this->assignee->Name = L"assignee";
			this->assignee->Size = System::Drawing::Size(99, 28);
			this->assignee->TabIndex = 102;
			this->assignee->Text = L"担当者";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->location->ForeColor = System::Drawing::Color::Transparent;
			this->location->Location = System::Drawing::Point(238, 323);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(70, 28);
			this->location->TabIndex = 101;
			this->location->Text = L"場所";
			// 
			// finish
			// 
			this->finish->AutoSize = true;
			this->finish->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->finish->ForeColor = System::Drawing::Color::Transparent;
			this->finish->Location = System::Drawing::Point(186, 278);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(128, 28);
			this->finish->TabIndex = 100;
			this->finish->Text = L"終了日時";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->start->ForeColor = System::Drawing::Color::Transparent;
			this->start->Location = System::Drawing::Point(186, 234);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(128, 28);
			this->start->TabIndex = 99;
			this->start->Text = L"開始日時";
			// 
			// s_title
			// 
			this->s_title->AutoSize = true;
			this->s_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->s_title->ForeColor = System::Drawing::Color::Transparent;
			this->s_title->Location = System::Drawing::Point(216, 183);
			this->s_title->Name = L"s_title";
			this->s_title->Size = System::Drawing::Size(98, 28);
			this->s_title->TabIndex = 98;
			this->s_title->Text = L"タイトル";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->ID->ForeColor = System::Drawing::Color::Transparent;
			this->ID->Location = System::Drawing::Point(269, 142);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(39, 28);
			this->ID->TabIndex = 97;
			this->ID->Text = L"ID";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->title->ForeColor = System::Drawing::Color::Transparent;
			this->title->Location = System::Drawing::Point(38, 45);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(292, 40);
			this->title->TabIndex = 96;
			this->title->Text = L"スケジュール編集";
			this->title->Click += gcnew System::EventHandler(this, &edit::title_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(315, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 15);
			this->label5->TabIndex = 114;
			this->label5->Text = L"：";
			// 
			// edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->TimePicker2);
			this->Controls->Add(this->TimePicker1);
			this->Controls->Add(this->datePicker2);
			this->Controls->Add(this->datePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->back);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->update);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
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
			this->Name = L"edit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"スケジュール編集";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//クラスの変数宣言
	public: String^ keyVal;
	private: int addNum = 0;

		   void AddToCSV(array<String^>^ texts)
		   {
			   //追加するCSVのパス
			   String^ path = ".\\schedule.csv";
			   StreamReader^ sr = gcnew StreamReader(path, Encoding::UTF8);
			   List<String^>^ bdArr = gcnew List<String^>;
			   try {
				   //headerを飛ばす
				   bdArr->Add(sr->ReadLine());
				   while (sr->Peek() > 0) {//読み取り文字がある間は回し続ける
					   String^ line = sr->ReadLine();  //一行ずつ読み取り
					   cli::array<String^>^ arr = line->Split(','); //読み取った文字列を、,　部分で分割
					   if (arr[0] == "END") {
						   bdArr->Add(line);
						   break;
					   }
					   //keyとなる値から検索
					   if (arr[0] == keyVal) {  //行の１番目（ID）が、渡されたKeyと一緒の場合
						   String^ afLine = ""; //空の文字列
						   String^ sep = ",";  //コンマ
						   for (int j = 0; j < 9; j++) {
							   afLine += texts[j] + sep;  //本来であれば、空の文字列に合致する1行+コンマを、項目ごとに代入していた
						   }
						   bdArr->Add(afLine);  //リストに、afLineをいれる。合致した場合は
					   }
					   else {
						   bdArr->Add(line);  //そうでない場合は、読み取った１行を、丸ごと入れる
					   }
				   }
			   }
			   catch (Exception^ e) {
				   MessageBox::Show(e->ToString());
			   }
			   finally {
				   sr->Close();
			   }
			   try {
				   //CSVを追記モードで開く
				   StreamWriter^ sw = gcnew StreamWriter(path, false, Encoding::UTF8);
				   //テキストをファイルに書き込む
				   for (int i = 0; i < bdArr->Count; i++) {
					   String^ sep = "\n";
					   if (i == bdArr->Count - 1) sep = "";
					   sw->Write(bdArr[i] + sep, false);
				   }
				   //ファイルを閉じる
				   sw->Close();
			   }
			   catch (Exception^ e)
			   {
				   //エラー処理
				   MessageBox::Show("エラーが発生しました。元の画面に戻ります。");
				   Console::WriteLine("エラー：" + e->Message);
			   }
			   return System::Void();
		   }
	private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
		//テキストボックスから入力
		array<String^>^ inputTexts = gcnew array<String^>(9);
		inputTexts[0] = textBox1->Text;
		inputTexts[1] = textBox2->Text;
		inputTexts[2] = datePicker1->Value.ToString("yyyy/MM/dd") + " " + TimePicker1->Text; // 開始日時
		inputTexts[3] = datePicker2->Value.ToString("yyyy/MM/dd") + " " + TimePicker2->Text; // 終了日時
		inputTexts[4] = textBox5->Text;
		inputTexts[5] = textBox6->Text;
		inputTexts[6] = textBox7->Text;
		inputTexts[7] = textBox8->Text;
		inputTexts[8] = "0"; // 9列目にはデフォルトで0を設定

		// 未入力の項目があるかチェック
		for (int i = 0; i < 8; i++) {
			if (String::IsNullOrEmpty(inputTexts[i])) {
				MessageBox::Show("未入力項目があります。");
				/*textBox" + (i + 1) + "が未入力です。*/
				return;
			}
		}

		if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("本当に更新しますか？", "確認", MessageBoxButtons::YesNo)) {

			//CSVファイルに追加
			AddToCSV(inputTexts);
			this->Close();
		}
		else {
			return;
		}
	}
	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::Yes == MessageBox::Show("ログアウトしますか？", "確認", MessageBoxButtons::YesNo)) {
			this->Close();
		}
		else {
			return;
		}
	}
private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
