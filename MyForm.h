#pragma once
#include <chrono>
#include <thread>
#include <iostream>
#include <string>
#include <fstream>//C++ function to read and write to files
#include <sstream>// convert string to an int 


namespace Bankingsystemproject{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System;
	using namespace System::IO;




	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();
			panel3->Hide();
			panel4->Hide();
			panel5->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(57, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"The Muniu Banking system ";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(224, 70);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 22);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(224, 117);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 22);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 242);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(368, 242);
			this->panel2->TabIndex = 7;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->button18);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(368, 242);
			this->panel3->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->button13);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(368, 242);
			this->panel5->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->listBox2);
			this->panel4->Controls->Add(this->button16);
			this->panel4->Controls->Add(this->button15);
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(368, 242);
			this->panel4->TabIndex = 9;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Welcome to the unique investment opportunity that the Muniu ",
					L"Bank is offering. There is a fortune to be made only a click away.*", L" This is a varied investment that will be randomly selected and",
					L" implimented from sertified investment pools that may increase ", L"the amount of money that is in your bank today**", L"Terms and conditions apply",
					L"* The bank does not gaurentee that you will make any money", L" and are ot liable for any losses you may incur, futher more they",
					L" are not responsible for any accidental click that result in money loss.", L"** There is an element of risk that could result in all ",
					L"your money being lost."
			});
			this->listBox2->Location = System::Drawing::Point(15, 47);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(341, 108);
			this->listBox2->TabIndex = 4;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(28, 199);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(56, 22);
			this->button16->TabIndex = 3;
			this->button16->Text = L"Back";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(297, 199);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(56, 22);
			this->button15->TabIndex = 2;
			this->button15->Text = L"Home";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(164, 197);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(56, 22);
			this->button14->TabIndex = 2;
			this->button14->Text = L"Invest";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"INVESTMENT";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(269, 26);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(84, 134);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"Here you can find your transaction History, all the money going in and out of you"
				L"r account. Remember to press UPDATE  ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(28, 3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 16);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Banking History";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(281, 190);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(56, 22);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Home";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(28, 190);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(56, 22);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Back";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(22, 26);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox8->Size = System::Drawing::Size(241, 134);
			this->textBox8->TabIndex = 10;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(147, 190);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(56, 22);
			this->button17->TabIndex = 2;
			this->button17->Text = L"Update";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(135, 83);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Make Transaction";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(72, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Amount:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(128, 153);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(71, 111);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Send to:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(128, 108);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(271, 199);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 22);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Home";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(271, 151);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 22);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Send";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(49, 199);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(56, 22);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Back";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(45, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Bank Balance:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(128, 45);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(100, 33);
			this->textBox3->TabIndex = 9;
			this->textBox3->UseWaitCursor = true;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(263, 43);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(56, 22);
			this->button18->TabIndex = 2;
			this->button18->Text = L"Update";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(263, 188);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 22);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Home";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(72, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Please select one of the following options  ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(263, 131);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(56, 22);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Invest";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(164, 131);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 22);
			this->button6->TabIndex = 2;
			this->button6->Text = L"History";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(46, 133);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(76, 22);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Transaction";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(136, 23);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 22);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Welcome";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(118, 62);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox7->Size = System::Drawing::Size(102, 30);
			this->textBox7->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::YellowGreen;
			this->label13->Location = System::Drawing::Point(31, 65);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Bank Balance";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(263, 62);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(56, 22);
			this->button19->TabIndex = 2;
			this->button19->Text = L"Update";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(109, 178);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 22);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(34, 133);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 87);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 117);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 70);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(37, 178);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 22);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Sign in";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(35, 23);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Sign-In ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\macon\\OneDrive\\Desktop\\c++ logo 2.jpg";
			this->pictureBox1->Location = System::Drawing::Point(74, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(129, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(368, 242);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->Location = System::Drawing::Point(147, 190);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"THE MUNIU BANKING SYSTEM";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Show();
		panel2->Hide();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "1") {
			if (textBox2->Text == "1")
				panel2->Show();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Show();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Show();
		panel3->Show();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Show();
		panel3->Show();
		panel5->Show();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
		panel2->Hide();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		int BankBalance;
		std::ofstream ofile;

		std::fstream myfile("investment.txt", std::ios_base::in);

		while (myfile >> BankBalance)
		{
			std::cout << "$" << BankBalance << std::endl;
		}

		int i = Convert::ToInt32(textBox4->Text);
		std::cout << i << std::endl;

		BankBalance - i == BankBalance;

		
		ofile.open("investment.txt", std::ios::app);
		for (int j{ 0 }; j < 1; ++j)
		{
			ofile << BankBalance << std::endl;
			BankBalance++;
		}
		ofile.close();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Hide();
		panel4->Hide();
		panel3->Hide();
		panel2->Hide();
		panel1->Hide();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Hide();
		panel3->Hide();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Hide();
		panel4->Hide();
		panel3->Hide();
		panel2->Hide();
		panel1->Hide();
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {


		double Investment_1, Investment_2, Investment_3;
		int Select = rand() % 2 + 1;

		std::ofstream ofile;

		std::fstream myfile("investment.txt", std::ios_base::in);

		int BankBalance;
		while (myfile >> BankBalance)
		{
			std::cout << "$" << BankBalance << std::endl;
		}

		for (int i = 0; i < 10; ++i) {

			switch (Select) {


			case 1: { // neutral trade 
				std::chrono::seconds interval(1); // 10 seconds
				for (int i = 0; i < 10; ++i)
				{
					Investment_1 = rand() % 6 + 10;
					BankBalance = BankBalance * (Investment_1 / 10);
					std::cout << "$" << BankBalance << "\n";
					std::this_thread::sleep_for(interval);
					break;
				}
			}

			case 2: { //losing trade
				std::chrono::seconds interval(1); // 10 seconds
				for (int i = 0; i < 10; ++i)
				{
					Investment_2 = rand() % 3 + 8;
					BankBalance = BankBalance * (Investment_2 / 10);
					std::cout << "$" << BankBalance << "\n";
					std::this_thread::sleep_for(interval);
					break;
				}
			}

			case 3: { // winning trade
				std::chrono::seconds interval(1); // 10 seconds
				for (int i = 0; i < 10; ++i)
				{
					Investment_3 = rand() % 4 + 10;
					BankBalance = BankBalance * (Investment_3 / 10);
					std::cout << BankBalance << "\n";
					std::this_thread::sleep_for(interval);
					break;
				}
			}
			}
		}

		ofile.open("investment.txt", std::ios::app);
		for (int j{ 0 }; j < 1; ++j)
		{
			ofile << BankBalance << std::endl;
			BankBalance++;

		}
		ofile.close();
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		panel5->Hide();
		panel4->Hide();
		panel3->Hide();
		panel2->Hide();
		panel1->Hide();
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Hide();
		panel3->Hide();
		panel5->Hide();
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox8->Text = System::IO::File::ReadAllText("Investment.txt");
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int j{ 0 }; j < 1; ++j)
		{
			textBox3->Text = System::IO::File::ReadAllText("Investment.txt");
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		textBox7->Text = System::IO::File::ReadAllText("Investment.txt");

	}
	};
}
