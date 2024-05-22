#pragma once

namespace Detail {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox_memo;

	private: System::Windows::Forms::TextBox^ textBox_assignee;

	private: System::Windows::Forms::TextBox^ textBox_title;
	private: System::Windows::Forms::TextBox^ textBox_start;
	private: System::Windows::Forms::TextBox^ textBox_finish;
	private: System::Windows::Forms::TextBox^ textBox_location;




	private: System::Windows::Forms::TextBox^ textBox_ID;
	private: System::Windows::Forms::Button^ logout;


	private: System::Windows::Forms::Button^ back;





	protected:

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
			this->textBox_memo = (gcnew System::Windows::Forms::TextBox());
			this->textBox_assignee = (gcnew System::Windows::Forms::TextBox());
			this->textBox_title = (gcnew System::Windows::Forms::TextBox());
			this->textBox_start = (gcnew System::Windows::Forms::TextBox());
			this->textBox_finish = (gcnew System::Windows::Forms::TextBox());
			this->textBox_location = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ID = (gcnew System::Windows::Forms::TextBox());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->title->Location = System::Drawing::Point(26, 52);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(292, 40);
			this->title->TabIndex = 0;
			this->title->Text = L"スケジュール詳細";
			this->title->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->ID->Location = System::Drawing::Point(245, 149);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(37, 28);
			this->ID->TabIndex = 1;
			this->ID->Text = L"ID";
			this->ID->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// s_title
			// 
			this->s_title->AutoSize = true;
			this->s_title->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->s_title->Location = System::Drawing::Point(204, 190);
			this->s_title->Name = L"s_title";
			this->s_title->Size = System::Drawing::Size(78, 23);
			this->s_title->TabIndex = 2;
			this->s_title->Text = L"タイトル";
			this->s_title->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// start
			// 
			this->start->AutoSize = true;
			this->start->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->start->Location = System::Drawing::Point(180, 233);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(102, 23);
			this->start->TabIndex = 3;
			this->start->Text = L"開始日時";
			// 
			// finish
			// 
			this->finish->AutoSize = true;
			this->finish->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->finish->Location = System::Drawing::Point(179, 269);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(102, 23);
			this->finish->TabIndex = 4;
			this->finish->Text = L"終了日時";
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->location->Location = System::Drawing::Point(226, 308);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(56, 23);
			this->location->TabIndex = 5;
			this->location->Text = L"場所";
			// 
			// assignee
			// 
			this->assignee->AutoSize = true;
			this->assignee->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->assignee->Location = System::Drawing::Point(202, 349);
			this->assignee->Name = L"assignee";
			this->assignee->Size = System::Drawing::Size(79, 23);
			this->assignee->TabIndex = 6;
			this->assignee->Text = L"担当者";
			this->assignee->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_2);
			// 
			// memo
			// 
			this->memo->AutoSize = true;
			this->memo->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->memo->Location = System::Drawing::Point(238, 395);
			this->memo->Name = L"memo";
			this->memo->Size = System::Drawing::Size(43, 23);
			this->memo->TabIndex = 7;
			this->memo->Text = L"メモ";
			// 
			// edit
			// 
			this->edit->BackColor = System::Drawing::Color::Yellow;
			this->edit->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->edit->Location = System::Drawing::Point(767, 657);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(135, 65);
			this->edit->TabIndex = 15;
			this->edit->Text = L"編集";
			this->edit->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(302, 155);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 15);
			this->label1->TabIndex = 16;
			this->label1->Text = L"：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(302, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(302, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 15);
			this->label3->TabIndex = 18;
			this->label3->Text = L"：";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(302, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 15);
			this->label4->TabIndex = 19;
			this->label4->Text = L"：";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(302, 312);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 15);
			this->label5->TabIndex = 20;
			this->label5->Text = L"：";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(302, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 15);
			this->label6->TabIndex = 21;
			this->label6->Text = L"：";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(302, 403);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 15);
			this->label7->TabIndex = 22;
			this->label7->Text = L"：";
			// 
			// textBox_memo
			// 
			this->textBox_memo->Location = System::Drawing::Point(323, 399);
			this->textBox_memo->Multiline = true;
			this->textBox_memo->Name = L"textBox_memo";
			this->textBox_memo->Size = System::Drawing::Size(350, 238);
			this->textBox_memo->TabIndex = 14;
			// 
			// textBox_assignee
			// 
			this->textBox_assignee->Location = System::Drawing::Point(323, 353);
			this->textBox_assignee->Name = L"textBox_assignee";
			this->textBox_assignee->Size = System::Drawing::Size(350, 22);
			this->textBox_assignee->TabIndex = 13;
			// 
			// textBox_title
			// 
			this->textBox_title->Location = System::Drawing::Point(323, 190);
			this->textBox_title->Name = L"textBox_title";
			this->textBox_title->Size = System::Drawing::Size(350, 22);
			this->textBox_title->TabIndex = 9;
			// 
			// textBox_start
			// 
			this->textBox_start->Location = System::Drawing::Point(323, 237);
			this->textBox_start->Name = L"textBox_start";
			this->textBox_start->Size = System::Drawing::Size(350, 22);
			this->textBox_start->TabIndex = 10;
			// 
			// textBox_finish
			// 
			this->textBox_finish->Location = System::Drawing::Point(323, 276);
			this->textBox_finish->Name = L"textBox_finish";
			this->textBox_finish->Size = System::Drawing::Size(350, 22);
			this->textBox_finish->TabIndex = 11;
			// 
			// textBox_location
			// 
			this->textBox_location->Location = System::Drawing::Point(323, 312);
			this->textBox_location->Name = L"textBox_location";
			this->textBox_location->Size = System::Drawing::Size(350, 22);
			this->textBox_location->TabIndex = 12;
			// 
			// textBox_ID
			// 
			this->textBox_ID->Location = System::Drawing::Point(323, 155);
			this->textBox_ID->Name = L"textBox_ID";
			this->textBox_ID->Size = System::Drawing::Size(350, 22);
			this->textBox_ID->TabIndex = 8;
			// 
			// logout
			// 
			this->logout->BackColor = System::Drawing::Color::Tomato;
			this->logout->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->logout->Location = System::Drawing::Point(767, 45);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(135, 43);
			this->logout->TabIndex = 23;
			this->logout->Text = L"ログアウト";
			this->logout->UseVisualStyleBackColor = false;
			// 
			// back
			// 
			this->back->BackColor = System::Drawing::Color::Yellow;
			this->back->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->back->Location = System::Drawing::Point(82, 657);
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
			this->Text = L"スケジュール詳細";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
