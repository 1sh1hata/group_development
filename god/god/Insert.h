#pragma once

namespace hodumi {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Insert �̊T�v
	/// </summary>
	public ref class Insert : public System::Windows::Forms::Form
	{
	public:
		Insert(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}
	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~Insert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DateTimePicker^ datePicker1;
	private: System::Windows::Forms::DateTimePicker^ datePicker2;


	private: System::Windows::Forms::ComboBox^ timePicker1;
	private: System::Windows::Forms::ComboBox^ timePicker2;



	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->datePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->timePicker1 = (gcnew System::Windows::Forms::ComboBox());
			this->timePicker2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(217, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(217, 153);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(217, 292);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(217, 339);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 22);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(217, 395);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(262, 22);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(217, 445);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(262, 270);
			this->textBox6->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(578, 679);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(2);
			this->button1->Size = System::Drawing::Size(101, 52);
			this->button1->TabIndex = 9;
			this->button1->Text = L"�o�^";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Insert::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(24, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(427, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"�X�P�W���[���V�K�o�^";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(147, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ID�@�F ��������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(96, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"�^�C�g���@�F";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(69, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"�J�n�����@�F";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(69, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 25);
			this->label5->TabIndex = 14;
			this->label5->Text = L"�I�������@�F";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(119, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"�ꏊ�@�F";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(94, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 25);
			this->label7->TabIndex = 16;
			this->label7->Text = L"�S���ҁ@�F";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(94, 390);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 25);
			this->label8->TabIndex = 17;
			this->label8->Text = L"�d�v�x�@�F";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(133, 440);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 25);
			this->label9->TabIndex = 18;
			this->label9->Text = L"�����@�F";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(31, 679);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(2);
			this->button2->Size = System::Drawing::Size(101, 52);
			this->button2->TabIndex = 19;
			this->button2->Text = L"�߂�";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Insert::button2_Click);
			// 
			// datePicker1
			// 
			this->datePicker1->Location = System::Drawing::Point(218, 192);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(144, 22);
			this->datePicker1->TabIndex = 20;
			// 
			// datePicker2
			// 
			this->datePicker2->Location = System::Drawing::Point(218, 240);
			this->datePicker2->Name = L"datePicker2";
			this->datePicker2->Size = System::Drawing::Size(144, 22);
			this->datePicker2->TabIndex = 20;
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
			this->timePicker1->Location = System::Drawing::Point(358, 192);
			this->timePicker1->Name = L"timePicker1";
			this->timePicker1->Size = System::Drawing::Size(121, 23);
			this->timePicker1->TabIndex = 22;
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
			// Insert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(718, 753);
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
			this->Name = L"Insert";
			this->Text = L"Insert";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//�e�L�X�g�{�b�N�X�ɓ��͂��ꂽ���e��CSV�ɒǉ�����֐�
		void AddToCSV(array<String^>^ texts)
		{
			//�ǉ�����CSV�̃p�X
			String^ filePath = "C:\\MySQL\\schedule.csv";
			try {
				//CSV��ǋL���[�h�ŊJ��
				StreamWriter^ writer = gcnew StreamWriter(filePath, true);
				//�e�L�X�g���t�@�C���ɏ�������
				writer->WriteLine(String::Join(",", texts));
				//�t�@�C�������
				writer->Close();
			}
			catch (Exception^ e)
			{
				//�G���[����
				Console::WriteLine("�G���[�F" + e->Message);
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
				Console::WriteLine("�G���[�F" + e->Message);
			}
			return lastId + 1;
		}

		// �o�^�{�^�����N���b�N���ꂽ�Ƃ��ɌĂяo�����֐�
	// �o�^�{�^�����N���b�N���ꂽ�Ƃ��ɌĂяo�����֐�
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// �e�L�X�g�{�b�N�X�������
		array<String^>^ inputTexts = gcnew array<String^>(9);
		String^ filePath = "C:\\MySQL\\schedule.csv";
		inputTexts[0] = GetNextId(filePath).ToString(); // 0�Ԗڂɂ�CSV�t�@�C���̍Ō�̍s��1��ڂ̒l���1�傫��������ݒ�
		inputTexts[1] = textBox2->Text;
		inputTexts[2] = datePicker1->Value.ToString("yyyy/MM/dd") + " " + timePicker1->Text; // �J�n����
		inputTexts[3] = datePicker2->Value.ToString("yyyy/MM/dd") + " " + timePicker2->Text; // �I������
		inputTexts[4] = textBox3->Text;
		inputTexts[5] = textBox4->Text;
		inputTexts[6] = textBox5->Text;
		inputTexts[7] = textBox6->Text;
		inputTexts[8] = "0"; // 9��ڂɂ̓f�t�H���g��0��ݒ�

		// �����͂̍��ڂ����邩�`�F�b�N
		for (int i = 2; i < 8; i++) { // i��1����n�܂邱�Ƃɒ���
			if (String::IsNullOrEmpty(inputTexts[i])) {
				MessageBox::Show("TextBox" + i + "�������͂ł��B");
				return;
			}
		}
		// CSV�t�@�C���ɒǉ�
		AddToCSV(inputTexts);
		MessageBox::Show("�o�^���������܂����B");
		Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}


	};

}