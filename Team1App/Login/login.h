#pragma once
#include "all_user_show.h"

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
	/// login の概要
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ label1;

	protected:








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(335, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 40);
			this->label2->TabIndex = 15;
			this->label2->Text = L"ログイン";
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::SystemColors::Window;
			this->button_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_cancel->Location = System::Drawing::Point(470, 326);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(146, 56);
			this->button_cancel->TabIndex = 14;
			this->button_cancel->Text = L"キャンセル";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &login::button_cancel_Click);
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::Gold;
			this->button_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_login->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_login->Location = System::Drawing::Point(189, 326);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(146, 56);
			this->button_login->TabIndex = 13;
			this->button_login->Text = L"ログイン";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &login::button_login_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_password->Location = System::Drawing::Point(279, 228);
			this->textBox_password->MaxLength = 16;
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(300, 22);
			this->textBox_password->TabIndex = 12;
			this->textBox_password->Text = L"000000";
			// 
			// textBox_name
			// 
			this->textBox_name->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_name->Location = System::Drawing::Point(279, 178);
			this->textBox_name->MaxLength = 254;
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(300, 22);
			this->textBox_name->TabIndex = 11;
			this->textBox_name->Text = L"テストテストテスト";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->password->Location = System::Drawing::Point(173, 227);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 23);
			this->password->TabIndex = 10;
			this->password->Text = L"パスワード";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->username->Location = System::Drawing::Point(164, 178);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(109, 23);
			this->username->TabIndex = 9;
			this->username->Text = L"ユーザー名";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(21, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"スケジュール管理システム";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ログイン";
			this->Activated += gcnew System::EventHandler(this, &login::login_Load);
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// textの中身を空にするためのメソッドです
private: System::Void clean_TextBox() {
			textBox_name->Clear();
			textBox_password->Clear();
		}
		//ユーザー認証を行うためのメソッドです
private: System::Boolean login_Check() {
	String^ userName = textBox_name->Text;
	String^ password = textBox_password->Text;
	StreamReader^ sr;
	bool sFrg = false;
	try {
		//CSV読み取り
		String^ path = ".\\users.csv";
		sr = gcnew StreamReader(path, Encoding::UTF8);
		String^ line;

		//照合
		while ((line = sr->ReadLine()) != nullptr) {
			array<String^>^ parts = line->Split(',');
			if (parts[1] == userName && parts[2] == password) {
				//ログイン成功フラグ
				return true;
			}
			else {

			}
		}
		//ログイン失敗フラグ
		return false;
	}
	catch(Exception^ e){
		MessageBox::Show("CSVファイルが読み込めません" + "\n" + "ユーザー情報を取得できませんでした");
	}
	finally {
		if (sFrg == true) {
			sr->Close();
			sFrg = false;
		}
		else {
		
		}
	}
	return false;
}
private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
	//5月27日更新　　エラーメッセージを追加
	//ifとelseifで、空欄がないかチェック。空欄があればエラーメッセージ表示＋ユーザー認証は行わない
	if (textBox_name->Text == "") {
		MessageBox::Show("ユーザー名を入力してください", "ログイン失敗", MessageBoxButtons::OK);
	}
	if (textBox_password->Text == "") {
		MessageBox::Show("パスワードを入力してください", "ログイン失敗", MessageBoxButtons::OK);
	}
	if (login_Check()) {
		MessageBox::Show("ログインに成功しました", "ログイン成功", MessageBoxButtons::OK);
		all_user_show^ nextPage = gcnew all_user_show();
		nextPage->ShowDialog();
	}
	else {
		MessageBox::Show("ユーザー名もしくはパスワードが違います", "ログイン失敗", MessageBoxButtons::OK);
	}
}
private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
	this->clean_TextBox();
}
};
}
