#pragma once

namespace Hennsyuu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}
		MyForm(String^ key)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
			keyVal = key;
		}


	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ back;
	protected:
	private: System::Windows::Forms::Button^ logout;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ update;

	private: System::Windows::Forms::TextBox^ textBox_memo;
	private: System::Windows::Forms::TextBox^ textBox_assignee;
	private: System::Windows::Forms::TextBox^ textBox_location;
	private: System::Windows::Forms::TextBox^ textBox_finish;
	private: System::Windows::Forms::TextBox^ textBox_start;
	private: System::Windows::Forms::TextBox^ textBox_title;
	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::Label^ memo;
	private: System::Windows::Forms::Label^ assignee;
	private: System::Windows::Forms::Label^ location;
	private: System::Windows::Forms::Label^ finish;
	private: System::Windows::Forms::Label^ start;
	private: System::Windows::Forms::Label^ s_title;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ password;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::TextBox^ textBox_password;



	protected:


	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->back = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->update = (gcnew System::Windows::Forms::Button());
			this->textBox_memo = (gcnew System::Windows::Forms::TextBox());
			this->textBox_assignee = (gcnew System::Windows::Forms::TextBox());
			this->textBox_location = (gcnew System::Windows::Forms::TextBox());
			this->textBox_finish = (gcnew System::Windows::Forms::TextBox());
			this->textBox_start = (gcnew System::Windows::Forms::TextBox());
			this->textBox_title = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->memo = (gcnew System::Windows::Forms::Label());
			this->assignee = (gcnew System::Windows::Forms::Label());
			this->location = (gcnew System::Windows::Forms::Label());
			this->finish = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Label());
			this->s_title = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::Yellow;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->back->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->back->Location = System::Drawing::Point(60, 650);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(135, 65);
			this->back->TabIndex = 49;
			this->back->Text = L"�߂�";
			this->back->UseVisualStyleBackColor = false;
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Orange;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(794, 38);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(135, 43);
			this->logout->TabIndex = 48;
			this->logout->Text = L"���O�A�E�g";
			this->logout->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(329, 396);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 15);
			this->label7->TabIndex = 47;
			this->label7->Text = L"�F";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(329, 349);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 15);
			this->label6->TabIndex = 46;
			this->label6->Text = L"�F";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(329, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 15);
			this->label5->TabIndex = 45;
			this->label5->Text = L"�F";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(329, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 44;
			this->label4->Text = L"�F";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(329, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 43;
			this->label3->Text = L"�F";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(329, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 15);
			this->label2->TabIndex = 42;
			this->label2->Text = L"�F";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(329, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 15);
			this->label1->TabIndex = 41;
			this->label1->Text = L"�F";
			// 
			// update
			// 
			this->update->BackColor = System::Drawing::Color::Yellow;
			this->update->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->update->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->update->Location = System::Drawing::Point(794, 650);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(135, 65);
			this->update->TabIndex = 40;
			this->update->Text = L"�X�V";
			this->update->UseVisualStyleBackColor = false;
			// 
			// textBox_memo
			// 
			this->textBox_memo->Location = System::Drawing::Point(350, 392);
			this->textBox_memo->Multiline = true;
			this->textBox_memo->Name = L"textBox_memo";
			this->textBox_memo->Size = System::Drawing::Size(350, 133);
			this->textBox_memo->TabIndex = 39;
			// 
			// textBox_assignee
			// 
			this->textBox_assignee->Location = System::Drawing::Point(350, 346);
			this->textBox_assignee->Name = L"textBox_assignee";
			this->textBox_assignee->Size = System::Drawing::Size(350, 22);
			this->textBox_assignee->TabIndex = 38;
			// 
			// textBox_location
			// 
			this->textBox_location->Location = System::Drawing::Point(350, 305);
			this->textBox_location->Name = L"textBox_location";
			this->textBox_location->Size = System::Drawing::Size(350, 22);
			this->textBox_location->TabIndex = 37;
			// 
			// textBox_finish
			// 
			this->textBox_finish->Location = System::Drawing::Point(350, 269);
			this->textBox_finish->Name = L"textBox_finish";
			this->textBox_finish->Size = System::Drawing::Size(350, 22);
			this->textBox_finish->TabIndex = 36;
			// 
			// textBox_start
			// 
			this->textBox_start->Location = System::Drawing::Point(350, 230);
			this->textBox_start->Name = L"textBox_start";
			this->textBox_start->Size = System::Drawing::Size(350, 22);
			this->textBox_start->TabIndex = 35;
			// 
			// textBox_title
			// 
			this->textBox_title->Location = System::Drawing::Point(350, 190);
			this->textBox_title->Name = L"textBox_title";
			this->textBox_title->Size = System::Drawing::Size(350, 22);
			this->textBox_title->TabIndex = 34;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(350, 148);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(350, 22);
			this->textBox_ID->TabIndex = 33;
			// 
			// memo
			// 
			this->memo->AutoSize = true;
			this->memo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memo->ForeColor = System::Drawing::Color::Transparent;
			this->memo->Location = System::Drawing::Point(265, 388);
			this->memo->Name = L"memo";
			this->memo->Size = System::Drawing::Size(45, 23);
			this->memo->TabIndex = 32;
			this->memo->Text = L"����";
			// 
			// assignee
			// 
			this->assignee->AutoSize = true;
			this->assignee->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->assignee->ForeColor = System::Drawing::Color::Transparent;
			this->assignee->Location = System::Drawing::Point(229, 342);
			this->assignee->Name = L"assignee";
			this->assignee->Size = System::Drawing::Size(82, 23);
			this->assignee->TabIndex = 31;
			this->assignee->Text = L"�S����";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->location->ForeColor = System::Drawing::Color::Transparent;
			this->location->Location = System::Drawing::Point(253, 301);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(58, 23);
			this->location->TabIndex = 30;
			this->location->Text = L"�ꏊ";
			// 
			// finish
			// 
			this->finish->AutoSize = true;
			this->finish->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->finish->ForeColor = System::Drawing::Color::Transparent;
			this->finish->Location = System::Drawing::Point(206, 262);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(106, 23);
			this->finish->TabIndex = 29;
			this->finish->Text = L"�I������";
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->start->ForeColor = System::Drawing::Color::Transparent;
			this->start->Location = System::Drawing::Point(207, 226);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(106, 23);
			this->start->TabIndex = 28;
			this->start->Text = L"�J�n����";
			// 
			// s_title
			// 
			this->s_title->AutoSize = true;
			this->s_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->s_title->ForeColor = System::Drawing::Color::Transparent;
			this->s_title->Location = System::Drawing::Point(231, 183);
			this->s_title->Name = L"s_title";
			this->s_title->Size = System::Drawing::Size(82, 23);
			this->s_title->TabIndex = 27;
			this->s_title->Text = L"�^�C�g��";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->ID->ForeColor = System::Drawing::Color::Transparent;
			this->ID->Location = System::Drawing::Point(272, 142);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(39, 28);
			this->ID->TabIndex = 26;
			this->ID->Text = L"ID";
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->title->ForeColor = System::Drawing::Color::Transparent;
			this->title->Location = System::Drawing::Point(53, 45);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(292, 40);
			this->title->TabIndex = 25;
			this->title->Text = L"�X�P�W���[���ҏW";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->username->ForeColor = System::Drawing::Color::Transparent;
			this->username->Location = System::Drawing::Point(199, 587);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(114, 23);
			this->username->TabIndex = 50;
			this->username->Text = L"���[�U�[��";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->password->ForeColor = System::Drawing::Color::Transparent;
			this->password->Location = System::Drawing::Point(206, 620);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(105, 23);
			this->password->TabIndex = 51;
			this->password->Text = L"�p�X���[�h";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(330, 595);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 15);
			this->label10->TabIndex = 52;
			this->label10->Text = L"�F";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(329, 631);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 15);
			this->label11->TabIndex = 53;
			this->label11->Text = L"�F";
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(350, 588);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(350, 22);
			this->textBox_username->TabIndex = 54;
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(350, 624);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(350, 22);
			this->textBox_password->TabIndex = 55;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
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
			this->Controls->Add(this->textBox_memo);
			this->Controls->Add(this->textBox_assignee);
			this->Controls->Add(this->textBox_location);
			this->Controls->Add(this->textBox_finish);
			this->Controls->Add(this->textBox_start);
			this->Controls->Add(this->textBox_title);
			this->Controls->Add(this->textBox_ID);
			this->Controls->Add(this->memo);
			this->Controls->Add(this->assignee);
			this->Controls->Add(this->location);
			this->Controls->Add(this->finish);
			this->Controls->Add(this->start);
			this->Controls->Add(this->s_title);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->title);
			this->Name = L"MyForm";
			this->Text = L"�X�P�W���[���ҏW";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
