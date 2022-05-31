#pragma once

namespace ClearVisionCalculatorProjectJohnPeecook {

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
	public:
		MyForm(void)
		{
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
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::TextBox^ textBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonSignSwap;

	private: System::Windows::Forms::Button^ buttonSeven;
	private: System::Windows::Forms::Button^ buttonNine;
	private: System::Windows::Forms::Button^ buttonMultiply;






	private: System::Windows::Forms::Button^ buttonEight;
	private: System::Windows::Forms::Button^ buttonOne;
	private: System::Windows::Forms::Button^ buttonAdd;



	private: System::Windows::Forms::Button^ buttonTwo;

	private: System::Windows::Forms::Button^ buttonThree;

	private: System::Windows::Forms::Button^ buttonFour;
	private: System::Windows::Forms::Button^ buttonDivide;


	private: System::Windows::Forms::Button^ buttonFive;

	private: System::Windows::Forms::Button^ buttonSix;
	private: System::Windows::Forms::Button^ buttonEnter;


	private: System::Windows::Forms::Button^ buttonDecimal;

	private: System::Windows::Forms::Button^ buttonZero;
	private: System::Windows::Forms::Button^ buttonSubtract;




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
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonSignSwap = (gcnew System::Windows::Forms::Button());
			this->buttonSeven = (gcnew System::Windows::Forms::Button());
			this->buttonNine = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonEight = (gcnew System::Windows::Forms::Button());
			this->buttonOne = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonTwo = (gcnew System::Windows::Forms::Button());
			this->buttonThree = (gcnew System::Windows::Forms::Button());
			this->buttonFour = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonFive = (gcnew System::Windows::Forms::Button());
			this->buttonSix = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonDecimal = (gcnew System::Windows::Forms::Button());
			this->buttonZero = (gcnew System::Windows::Forms::Button());
			this->buttonSubtract = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonDelete->Location = System::Drawing::Point(12, 80);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(86, 76);
			this->buttonDelete->TabIndex = 0;
			this->buttonDelete->Text = L"Delete";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->textBox->Location = System::Drawing::Point(12, 12);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(362, 62);
			this->textBox->TabIndex = 1;
			this->textBox->Text = L"0";
			this->textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonClear->Location = System::Drawing::Point(104, 80);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(86, 76);
			this->buttonClear->TabIndex = 2;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonSignSwap
			// 
			this->buttonSignSwap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonSignSwap->Location = System::Drawing::Point(196, 80);
			this->buttonSignSwap->Name = L"buttonSignSwap";
			this->buttonSignSwap->Size = System::Drawing::Size(86, 76);
			this->buttonSignSwap->TabIndex = 4;
			this->buttonSignSwap->Text = L"±";
			this->buttonSignSwap->UseVisualStyleBackColor = true;
			this->buttonSignSwap->Click += gcnew System::EventHandler(this, &MyForm::buttonSignSwap_Click);
			// 
			// buttonSeven
			// 
			this->buttonSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonSeven->Location = System::Drawing::Point(12, 162);
			this->buttonSeven->Name = L"buttonSeven";
			this->buttonSeven->Size = System::Drawing::Size(86, 76);
			this->buttonSeven->TabIndex = 5;
			this->buttonSeven->Text = L"7";
			this->buttonSeven->UseVisualStyleBackColor = true;
			this->buttonSeven->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonNine
			// 
			this->buttonNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonNine->Location = System::Drawing::Point(196, 162);
			this->buttonNine->Name = L"buttonNine";
			this->buttonNine->Size = System::Drawing::Size(86, 76);
			this->buttonNine->TabIndex = 8;
			this->buttonNine->Text = L"9";
			this->buttonNine->UseVisualStyleBackColor = true;
			this->buttonNine->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonMultiply->Location = System::Drawing::Point(288, 162);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(86, 76);
			this->buttonMultiply->TabIndex = 7;
			this->buttonMultiply->Text = L"X";
			this->buttonMultiply->UseVisualStyleBackColor = true;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::selectOperation);
			// 
			// buttonEight
			// 
			this->buttonEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonEight->Location = System::Drawing::Point(104, 162);
			this->buttonEight->Name = L"buttonEight";
			this->buttonEight->Size = System::Drawing::Size(86, 76);
			this->buttonEight->TabIndex = 6;
			this->buttonEight->Text = L"8";
			this->buttonEight->UseVisualStyleBackColor = true;
			this->buttonEight->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonOne
			// 
			this->buttonOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonOne->Location = System::Drawing::Point(196, 326);
			this->buttonOne->Name = L"buttonOne";
			this->buttonOne->Size = System::Drawing::Size(86, 76);
			this->buttonOne->TabIndex = 16;
			this->buttonOne->Text = L"1";
			this->buttonOne->UseVisualStyleBackColor = true;
			this->buttonOne->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonAdd->Location = System::Drawing::Point(288, 326);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(86, 76);
			this->buttonAdd->TabIndex = 15;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::selectOperation);
			// 
			// buttonTwo
			// 
			this->buttonTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonTwo->Location = System::Drawing::Point(104, 326);
			this->buttonTwo->Name = L"buttonTwo";
			this->buttonTwo->Size = System::Drawing::Size(86, 76);
			this->buttonTwo->TabIndex = 14;
			this->buttonTwo->Text = L"2";
			this->buttonTwo->UseVisualStyleBackColor = true;
			this->buttonTwo->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonThree
			// 
			this->buttonThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonThree->Location = System::Drawing::Point(12, 326);
			this->buttonThree->Name = L"buttonThree";
			this->buttonThree->Size = System::Drawing::Size(86, 76);
			this->buttonThree->TabIndex = 13;
			this->buttonThree->Text = L"3";
			this->buttonThree->UseVisualStyleBackColor = true;
			this->buttonThree->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonFour
			// 
			this->buttonFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonFour->Location = System::Drawing::Point(196, 244);
			this->buttonFour->Name = L"buttonFour";
			this->buttonFour->Size = System::Drawing::Size(86, 76);
			this->buttonFour->TabIndex = 12;
			this->buttonFour->Text = L"4";
			this->buttonFour->UseVisualStyleBackColor = true;
			this->buttonFour->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonDivide
			// 
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonDivide->Location = System::Drawing::Point(288, 244);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(86, 76);
			this->buttonDivide->TabIndex = 11;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = true;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::selectOperation);
			// 
			// buttonFive
			// 
			this->buttonFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonFive->Location = System::Drawing::Point(104, 244);
			this->buttonFive->Name = L"buttonFive";
			this->buttonFive->Size = System::Drawing::Size(86, 76);
			this->buttonFive->TabIndex = 10;
			this->buttonFive->Text = L"5";
			this->buttonFive->UseVisualStyleBackColor = true;
			this->buttonFive->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonSix
			// 
			this->buttonSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonSix->Location = System::Drawing::Point(12, 244);
			this->buttonSix->Name = L"buttonSix";
			this->buttonSix->Size = System::Drawing::Size(86, 76);
			this->buttonSix->TabIndex = 9;
			this->buttonSix->Text = L"6";
			this->buttonSix->UseVisualStyleBackColor = true;
			this->buttonSix->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonEnter
			// 
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonEnter->Location = System::Drawing::Point(196, 408);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(86, 76);
			this->buttonEnter->TabIndex = 19;
			this->buttonEnter->Text = L"Enter";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonEnter_Click);
			// 
			// buttonDecimal
			// 
			this->buttonDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonDecimal->Location = System::Drawing::Point(104, 408);
			this->buttonDecimal->Name = L"buttonDecimal";
			this->buttonDecimal->Size = System::Drawing::Size(86, 76);
			this->buttonDecimal->TabIndex = 18;
			this->buttonDecimal->Text = L".";
			this->buttonDecimal->UseVisualStyleBackColor = true;
			this->buttonDecimal->Click += gcnew System::EventHandler(this, &MyForm::buttonDecimal_Click);
			// 
			// buttonZero
			// 
			this->buttonZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonZero->Location = System::Drawing::Point(12, 408);
			this->buttonZero->Name = L"buttonZero";
			this->buttonZero->Size = System::Drawing::Size(86, 76);
			this->buttonZero->TabIndex = 17;
			this->buttonZero->Text = L"0";
			this->buttonZero->UseVisualStyleBackColor = true;
			this->buttonZero->Click += gcnew System::EventHandler(this, &MyForm::enterNum);
			// 
			// buttonSubtract
			// 
			this->buttonSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->buttonSubtract->Location = System::Drawing::Point(288, 408);
			this->buttonSubtract->Name = L"buttonSubtract";
			this->buttonSubtract->Size = System::Drawing::Size(86, 76);
			this->buttonSubtract->TabIndex = 20;
			this->buttonSubtract->Text = L"-";
			this->buttonSubtract->UseVisualStyleBackColor = true;
			this->buttonSubtract->Click += gcnew System::EventHandler(this, &MyForm::selectOperation);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 497);
			this->Controls->Add(this->buttonSubtract);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->buttonDecimal);
			this->Controls->Add(this->buttonZero);
			this->Controls->Add(this->buttonOne);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->buttonTwo);
			this->Controls->Add(this->buttonThree);
			this->Controls->Add(this->buttonFour);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonFive);
			this->Controls->Add(this->buttonSix);
			this->Controls->Add(this->buttonNine);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonEight);
			this->Controls->Add(this->buttonSeven);
			this->Controls->Add(this->buttonSignSwap);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->buttonDelete);
			this->Name = L"MyForm";
			this->Text = L"ClearVision Calculator Project John Peecook";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double termOne;
		double termTwo;
		double result;
		String^ operation;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void enterNum(System::Object^ sender, System::EventArgs^ e) {

		Button^ Numbers = safe_cast<Button^>(sender);

		if (textBox->Text == "0")
		{
			textBox->Text = Numbers->Text;
		}
		else
		{
			textBox->Text = textBox->Text + Numbers->Text;
		}
	}
	private: System::Void selectOperation(System::Object^ sender, System::EventArgs^ e) {
		if (textBox->Text != "")
		{
			Button^ NumbersOps = safe_cast<Button^>(sender);
			termOne = Double::Parse(textBox->Text);

			textBox->Text = "";
			operation = NumbersOps->Text;
		}
		else
		{
			Button^ NumbersOps = safe_cast<Button^>(sender);
			operation = NumbersOps->Text;
		}
	}
	private: System::Void buttonDecimal_Click(System::Object^ sender, System::EventArgs^ e) {

		if (!textBox->Text->Contains("."))
		{
			textBox->Text = textBox->Text + ".";
		}
	}
	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {

		termTwo = Double::Parse(textBox->Text);

		if (operation == "+") //additon
		{
			result = termOne + termTwo;
			textBox->Text = System::Convert::ToString(result);
		}
		else if (operation == "-") //subtraction
		{
			result = termOne - termTwo;
			textBox->Text = System::Convert::ToString(result);
		}
		else if (operation == "X") //multiplication
		{
			result = termOne * termTwo;
			textBox->Text = System::Convert::ToString(result);
		}
		else if (operation == "/" && textBox->Text != "0") //division
		{
			result = termOne / termTwo;
			textBox->Text = System::Convert::ToString(result);
		}
		else if (operation == "/" && textBox->Text == "0") //division by 0 case
		{
			textBox->Text = "Div by 0 Error. Select \"Clear\".";
		}
	};
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {

		textBox->Text = "0";
	}
private: System::Void buttonSignSwap_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox->Text->Contains("-"))
	{
		textBox->Text = textBox->Text->Remove(0, 1);
	}
	else
	{
		textBox->Text = "-" + textBox->Text;
	}
}
private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox->Text->Length > 1)
	{
		textBox->Text = textBox->Text->Remove(textBox->Text->Length - 1, 1);
	}
	else if (textBox->Text->Length == 0 || textBox->Text->Length == 1)
	{
		textBox->Text = "0";
	}
}
private: System::Void buttonExponent(System::Object^ sender, System::EventArgs^ e) {
}
};
}
