#pragma once
#include "all_user_show.h"

namespace Login {

	using namespace alluser;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Label^ label2;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"スケジュール管理システム";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->username->Location = System::Drawing::Point(150, 187);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(109, 23);
			this->username->TabIndex = 1;
			this->username->Text = L"ユーザー名";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->password->Location = System::Drawing::Point(159, 236);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 23);
			this->password->TabIndex = 2;
			this->password->Text = L"パスワード";
			// 
			// textBox_name
			// 
			this->textBox_name->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox_name->Location = System::Drawing::Point(265, 187);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(300, 22);
			this->textBox_name->TabIndex = 3;
			// 
			// textBox_password
			// 
			this->textBox_password->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox_password->Location = System::Drawing::Point(265, 237);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(300, 22);
			this->textBox_password->TabIndex = 4;
			// 
			// button_login
			// 
			this->button_login->BackColor = System::Drawing::Color::MidnightBlue;
			this->button_login->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_login->ForeColor = System::Drawing::Color::White;
			this->button_login->Location = System::Drawing::Point(180, 342);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(146, 43);
			this->button_login->TabIndex = 5;
			this->button_login->Text = L"ログイン";
			this->button_login->UseVisualStyleBackColor = false;
			this->button_login->Click += gcnew System::EventHandler(this, &MyForm::button_login_Click);
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::SystemColors::Control;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button_cancel->Location = System::Drawing::Point(437, 342);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(146, 43);
			this->button_cancel->TabIndex = 6;
			this->button_cancel->Text = L"キャンセル";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &MyForm::button_cancel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(326, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 40);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ログイン";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ログイン";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->textBox_name->Text;
		String^ password = this->textBox_password->Text;
		StreamReader^ sr = gcnew StreamReader("C:\\MySQL\\users.csv");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			array<String^>^ parts = line->Split(',');
			if (parts[1] == username && parts[2] == password) {
				MessageBox::Show("ログイン成功！画面遷移したい。");

				All^ m1 = gcnew All();
				m1->Show();
				return System::Void();
			}
		}
		MessageBox::Show("エラー：ユーザー名またはパスワードが間違っています。");
	}
	private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
