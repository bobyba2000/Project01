#pragma once
#include"Qfloat.h"
#include <msclr\marshal_cppstd.h>
#include"Xuly_QInt.h"
#include"qint.h"

namespace Project01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		string*firstNum, *secondNum, *dau;
		bool isCalculate = false;
	private: System::Windows::Forms::TextBox^  textBoxOperator;
	private: System::Windows::Forms::Button^  buttonNot;

	private: System::Windows::Forms::Button^  buttonXor;

	private: System::Windows::Forms::Button^  buttonOr;

	private: System::Windows::Forms::Button^  buttonAnd;
	private: System::Windows::Forms::Button^  buttonRor;
	private: System::Windows::Forms::Button^  buttonRol;
	private: System::Windows::Forms::Button^  buttonRight;
	private: System::Windows::Forms::Button^  buttonLeft;

			 bool isNegative = false;
	public:
		MyForm(void)
		{
			firstNum = new string("");
			secondNum = new string("");
			dau = new string("");
			InitializeComponent();
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
	private: System::Windows::Forms::TextBox^  textBox;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button9;





	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  buttonNegative;
	private: System::Windows::Forms::Button^  buttonEqual;
	private: System::Windows::Forms::Button^  buttonDiv;
	private: System::Windows::Forms::Button^  buttonMul;
	private: System::Windows::Forms::Button^  buttonMinus;
	private: System::Windows::Forms::Button^  buttonPlus;
	private: System::Windows::Forms::Button^  buttonDot;

	private: System::Windows::Forms::Button^  buttonBackspace;
	private: System::Windows::Forms::Button^  buttonClearAll;
	private: System::Windows::Forms::Button^  buttonClear;




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonNegative = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonMul = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonBackspace = (gcnew System::Windows::Forms::Button());
			this->buttonClearAll = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->textBoxOperator = (gcnew System::Windows::Forms::TextBox());
			this->buttonNot = (gcnew System::Windows::Forms::Button());
			this->buttonXor = (gcnew System::Windows::Forms::Button());
			this->buttonOr = (gcnew System::Windows::Forms::Button());
			this->buttonAnd = (gcnew System::Windows::Forms::Button());
			this->buttonRor = (gcnew System::Windows::Forms::Button());
			this->buttonRol = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox
			// 
			this->textBox->BackColor = System::Drawing::Color::White;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(23, 30);
			this->textBox->Margin = System::Windows::Forms::Padding(7, 5, 7, 5);
			this->textBox->Name = L"textBox";
			this->textBox->ReadOnly = true;
			this->textBox->Size = System::Drawing::Size(390, 46);
			this->textBox->TabIndex = 0;
			this->textBox->Text = L"0";
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(89, 147);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 2;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(23, 147);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 3;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(155, 147);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 4;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(23, 211);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(89, 211);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(155, 211);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(23, 275);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 8;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(89, 275);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 9;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(155, 275);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 10;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(89, 339);
			this->button0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button0->Name = L"button0";
			this->button0->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->button0->Size = System::Drawing::Size(60, 60);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// buttonNegative
			// 
			this->buttonNegative->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNegative->Location = System::Drawing::Point(23, 339);
			this->buttonNegative->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNegative->Name = L"buttonNegative";
			this->buttonNegative->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonNegative->Size = System::Drawing::Size(60, 60);
			this->buttonNegative->TabIndex = 12;
			this->buttonNegative->Text = L"-";
			this->buttonNegative->UseVisualStyleBackColor = true;
			this->buttonNegative->Click += gcnew System::EventHandler(this, &MyForm::buttonNegative_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEqual->Location = System::Drawing::Point(221, 339);
			this->buttonEqual->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonEqual->Size = System::Drawing::Size(192, 60);
			this->buttonEqual->TabIndex = 13;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = true;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->Location = System::Drawing::Point(221, 275);
			this->buttonDiv->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonDiv->Size = System::Drawing::Size(60, 60);
			this->buttonDiv->TabIndex = 17;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonMul
			// 
			this->buttonMul->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMul->Location = System::Drawing::Point(221, 212);
			this->buttonMul->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonMul->Name = L"buttonMul";
			this->buttonMul->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonMul->Size = System::Drawing::Size(60, 60);
			this->buttonMul->TabIndex = 16;
			this->buttonMul->Text = L"*";
			this->buttonMul->UseVisualStyleBackColor = true;
			this->buttonMul->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->Location = System::Drawing::Point(221, 148);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonMinus->Size = System::Drawing::Size(60, 60);
			this->buttonMinus->TabIndex = 15;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->Location = System::Drawing::Point(221, 84);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonPlus->Size = System::Drawing::Size(60, 60);
			this->buttonPlus->TabIndex = 14;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonDot
			// 
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDot->Location = System::Drawing::Point(155, 339);
			this->buttonDot->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonDot->Size = System::Drawing::Size(60, 60);
			this->buttonDot->TabIndex = 18;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::buttonDot_Click);
			// 
			// buttonBackspace
			// 
			this->buttonBackspace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBackspace.BackgroundImage")));
			this->buttonBackspace->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBackspace->Location = System::Drawing::Point(155, 83);
			this->buttonBackspace->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonBackspace->Name = L"buttonBackspace";
			this->buttonBackspace->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonBackspace->Size = System::Drawing::Size(60, 60);
			this->buttonBackspace->TabIndex = 19;
			this->buttonBackspace->UseVisualStyleBackColor = true;
			this->buttonBackspace->Click += gcnew System::EventHandler(this, &MyForm::buttonBackspace_Click);
			// 
			// buttonClearAll
			// 
			this->buttonClearAll->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClearAll->Location = System::Drawing::Point(89, 84);
			this->buttonClearAll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonClearAll->Name = L"buttonClearAll";
			this->buttonClearAll->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonClearAll->Size = System::Drawing::Size(60, 60);
			this->buttonClearAll->TabIndex = 20;
			this->buttonClearAll->Text = L"C";
			this->buttonClearAll->UseVisualStyleBackColor = true;
			this->buttonClearAll->Click += gcnew System::EventHandler(this, &MyForm::buttonClearAll_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(23, 83);
			this->buttonClear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonClear->Size = System::Drawing::Size(60, 60);
			this->buttonClear->TabIndex = 21;
			this->buttonClear->Text = L"CE";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// textBoxOperator
			// 
			this->textBoxOperator->BackColor = System::Drawing::SystemColors::Control;
			this->textBoxOperator->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxOperator->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOperator->Location = System::Drawing::Point(301, 8);
			this->textBoxOperator->Name = L"textBoxOperator";
			this->textBoxOperator->Size = System::Drawing::Size(54, 20);
			this->textBoxOperator->TabIndex = 22;
			this->textBoxOperator->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonNot
			// 
			this->buttonNot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNot->Location = System::Drawing::Point(287, 275);
			this->buttonNot->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNot->Name = L"buttonNot";
			this->buttonNot->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonNot->Size = System::Drawing::Size(60, 60);
			this->buttonNot->TabIndex = 26;
			this->buttonNot->Text = L"NOT";
			this->buttonNot->UseVisualStyleBackColor = true;
			this->buttonNot->Click += gcnew System::EventHandler(this, &MyForm::buttonNot_Click);
			// 
			// buttonXor
			// 
			this->buttonXor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonXor->Location = System::Drawing::Point(287, 212);
			this->buttonXor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonXor->Name = L"buttonXor";
			this->buttonXor->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonXor->Size = System::Drawing::Size(60, 60);
			this->buttonXor->TabIndex = 25;
			this->buttonXor->Text = L"XOR";
			this->buttonXor->UseVisualStyleBackColor = true;
			this->buttonXor->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonOr
			// 
			this->buttonOr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOr->Location = System::Drawing::Point(287, 148);
			this->buttonOr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonOr->Name = L"buttonOr";
			this->buttonOr->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonOr->Size = System::Drawing::Size(60, 60);
			this->buttonOr->TabIndex = 24;
			this->buttonOr->Text = L"OR";
			this->buttonOr->UseVisualStyleBackColor = true;
			this->buttonOr->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonAnd
			// 
			this->buttonAnd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnd->Location = System::Drawing::Point(287, 84);
			this->buttonAnd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonAnd->Name = L"buttonAnd";
			this->buttonAnd->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonAnd->Size = System::Drawing::Size(60, 60);
			this->buttonAnd->TabIndex = 23;
			this->buttonAnd->Text = L"AND";
			this->buttonAnd->UseVisualStyleBackColor = true;
			this->buttonAnd->Click += gcnew System::EventHandler(this, &MyForm::buttonOperator_Click);
			// 
			// buttonRor
			// 
			this->buttonRor->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRor->Location = System::Drawing::Point(353, 275);
			this->buttonRor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRor->Name = L"buttonRor";
			this->buttonRor->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonRor->Size = System::Drawing::Size(60, 60);
			this->buttonRor->TabIndex = 30;
			this->buttonRor->Text = L"ROR";
			this->buttonRor->UseVisualStyleBackColor = true;
			this->buttonRor->Click += gcnew System::EventHandler(this, &MyForm::buttonRor_Click);
			// 
			// buttonRol
			// 
			this->buttonRol->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRol->Location = System::Drawing::Point(353, 212);
			this->buttonRol->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRol->Name = L"buttonRol";
			this->buttonRol->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonRol->Size = System::Drawing::Size(60, 60);
			this->buttonRol->TabIndex = 29;
			this->buttonRol->Text = L"ROL";
			this->buttonRol->UseVisualStyleBackColor = true;
			this->buttonRol->Click += gcnew System::EventHandler(this, &MyForm::buttonRol_Click);
			// 
			// buttonRight
			// 
			this->buttonRight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRight->Location = System::Drawing::Point(353, 148);
			this->buttonRight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonRight->Name = L"buttonRight";
			this->buttonRight->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonRight->Size = System::Drawing::Size(60, 60);
			this->buttonRight->TabIndex = 28;
			this->buttonRight->Text = L">>";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->buttonRight->Click += gcnew System::EventHandler(this, &MyForm::buttonRight_Click);
			// 
			// buttonLeft
			// 
			this->buttonLeft->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLeft->Location = System::Drawing::Point(353, 84);
			this->buttonLeft->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonLeft->Name = L"buttonLeft";
			this->buttonLeft->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->buttonLeft->Size = System::Drawing::Size(60, 60);
			this->buttonLeft->TabIndex = 27;
			this->buttonLeft->Text = L"<<";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->buttonLeft->Click += gcnew System::EventHandler(this, &MyForm::buttonLeft_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 416);
			this->Controls->Add(this->buttonRor);
			this->Controls->Add(this->buttonRol);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonNot);
			this->Controls->Add(this->buttonXor);
			this->Controls->Add(this->buttonOr);
			this->Controls->Add(this->buttonAnd);
			this->Controls->Add(this->textBoxOperator);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonClearAll);
			this->Controls->Add(this->buttonBackspace);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonMul);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonNegative);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//so am
		private: System::Void buttonNegative_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox->Text != "0" && !isNegative)
				textBox->Text = "-" + textBox->Text;
			if (isNegative)
				textBox->Text = textBox->Text->Substring(1);
			if(textBox->Text!="0")
				isNegative = !isNegative;
		}

		//dau '.'
		private: System::Void buttonDot_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox->Text += ".";
			isCalculate = false;
		}

		//chen so vao
		private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox->Text == "0" || isCalculate==true)
				textBox->Text = ((Button^)sender)->Text;
			else textBox->Text += ((Button^)sender)->Text;
			isCalculate = false;
		}

		//xoa di 1 so
		private: System::Void buttonBackspace_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox->Text->Length == 1 || (textBox->Text->Length == 2 && isNegative))
				textBox->Text = "0";
			else textBox->Text = textBox->Text->Substring(0, textBox->Text->Length - 1);
		}

		//chuyen tu System::string sang std::string
		private: void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		private: bool isFloat(string firstNum, string secondNum)
		{
			//Kiem tra xem co phai so Qfloat
			for (int i = 0; i < firstNum.length(); i++)
				if (firstNum[i] == '.')
					return true;
			for (int i = 0; i < secondNum.length(); i++)
				if (secondNum[i] == '.')
					return true;

			//kiem tra xem hai so co vuot khoi gioi han cua QInt
			string soA;
			soA = firstNum;
			string inf = string("170141183460469231731687303715884105727");
			if (firstNum[0] == '-')
				if (soSanh(soA, "-" + inf))
					return true;
			if (soSanh(soA,inf)) return true;

			soA = secondNum;
			if (secondNum[0] == '-')
				if (soSanh("-" + inf, soA))
					return true;
			if (soSanh(soA, inf)) return true;

			return false;
		}

				 //tinh toan voi so QInt
		string calculateInt(string firstNum, string secondNum, string*dau)
		{
			isNegative = false;
			char *num1 = new char[firstNum.length() + 1];
			char*num2 = new char[secondNum.length() + 1];
			strcpy(num1, firstNum.c_str());
			strcpy(num2, secondNum.c_str());

			QInt number1, number2;
			bool* bits;
			bits = str10_to_bit(num1, QInt_Size);
			number1= BinToDec_int(bits);
			bits = str10_to_bit(num2, QInt_Size);
			number2 = BinToDec_int(bits);

			if (*dau == "+")
				number1 = number1 + number2;
			if (*dau == "-")
				number1 = number1 - number2;
			if (*dau == "*")
				number1 = number1 * number2;
			if (*dau == "/")
				number1 = number1 / number2;
			if (*dau == "AND")
				number1 = number1 & number2;
			if (*dau == "OR")
				number1 = number1 | number2;
			if (*dau == "XOR")
				number1 = number1 ^ number2;

			bits = DecToBin_int(number1);
			char *str10 = bit_to_str10(bits, 128);
			return string(str10);
		}

		//thuc hien tinh toan giua hai so
		string calculate(string*firstNum, string*secondNum, string*dau)
		{
			isCalculate = true;

			if (*dau == "AND" || *dau == "OR" || *dau == "XOR")
				return calculateInt(*firstNum, *secondNum, dau);

			if (isFloat(*firstNum,*secondNum))
			{
				Qfloat number1, number2;
				number1.convertFromString(*firstNum);
				number2.convertFromString(*secondNum);
				if (*dau == "+")
					number1 = number1 + number2;
				if (*dau == "-")
					number1 = number1 - number2;
				if (*dau == "*")
					number1 = number1 * number2;
				if (*dau == "/")
					number1 = number1 / number2;
				return number1.convertToStringDec();
			}

			return calculateInt(*firstNum, *secondNum, dau);
		}

		//lay dau de thuc hien phep tinh
		private: System::Void buttonOperator_Click(System::Object^  sender, System::EventArgs^  e) {
			isCalculate = true;
			if (textBoxOperator->Text != "")
			{
				MarshalString(textBox->Text, *secondNum);
				MarshalString(textBoxOperator->Text, *dau);
				textBox->Text = gcnew String(calculate(firstNum, secondNum, dau).c_str());
			}
			textBoxOperator->Text = ((Button^)sender)->Text;
			MarshalString(textBox->Text, *firstNum);
		}

		//lay dau = va tinh ket qua
		private: System::Void buttonEqual_Click(System::Object^  sender, System::EventArgs^  e) {
			MarshalString(textBox->Text, *secondNum);
			MarshalString(textBoxOperator->Text, *dau);
			textBoxOperator->Text = "";
			if (*firstNum == "")
				textBox->Text = gcnew String((*secondNum).c_str());
			else
			textBox->Text = gcnew String(calculate(firstNum, secondNum, dau).c_str());
		}

		//Xoa so hien tai
		private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox->Text = "0";
		}

		//Xoa tat ca
		private: System::Void buttonClearAll_Click(System::Object^  sender, System::EventArgs^  e) {
			textBoxOperator->Text = "";
			textBox->Text = "0";
			*firstNum = "";
			*secondNum = "";
		}

				 //chuyen tu xau sang QInt
				 QInt convertFromStringToQInt(string number)
				 {
					 char*num = new char[number.length() + 1];
					 strcpy(num, number.c_str());
					 QInt kq;
					 bool* bits;
					 bits = str10_to_bit(num, QInt_Size);
					 kq = BinToDec_int(bits);
					 return kq;
				 }

				 //chuyen tu QInt sang xau
				 string convertFromQInt(QInt number)
				 {
					 bool *bits = DecToBin_int(number);
					 char *str10 = bit_to_str10(bits, 128);
					 return string(str10);
				 }

				 //Phep toan not
private: System::Void buttonNot_Click(System::Object^  sender, System::EventArgs^  e) {
	string number = "";
	MarshalString(textBox->Text, number);
	QInt num=convertFromStringToQInt(number);
	QInt num2 = num.operator~();
	textBox->Text = gcnew String(convertFromQInt(num2).c_str());
}

		 //Phep dich trai
private: System::Void buttonLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	string number = "";
	MarshalString(textBox->Text, number);
	QInt num = convertFromStringToQInt(number);
	QInt num2 = num.operator<<(1);
	textBox->Text = gcnew String(convertFromQInt(num2).c_str());
}
		 
		 //phep dich phai
private: System::Void buttonRight_Click(System::Object^  sender, System::EventArgs^  e) {
	string number = "";
	MarshalString(textBox->Text, number);
	QInt num = convertFromStringToQInt(number);
	QInt num2 = num.operator>>(1);
	textBox->Text = gcnew String(convertFromQInt(num2).c_str());
}

		 //phep rol
private: System::Void buttonRol_Click(System::Object^  sender, System::EventArgs^  e) {
	string number = "";
	MarshalString(textBox->Text, number);
	QInt num = convertFromStringToQInt(number);
	QInt num2 = num.rol(1);
	textBox->Text = gcnew String(convertFromQInt(num2).c_str());
}

		 //phep ror
private: System::Void buttonRor_Click(System::Object^  sender, System::EventArgs^  e) {
	string number = "";
	MarshalString(textBox->Text, number);
	QInt num = convertFromStringToQInt(number);
	QInt num2 = num.ror(1);
	textBox->Text = gcnew String(convertFromQInt(num2).c_str());
}
};
}
