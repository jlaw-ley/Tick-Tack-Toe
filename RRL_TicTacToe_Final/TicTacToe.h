#pragma once

namespace RRLTicTacToeFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TicTacToe
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form
	{
	public:
		TicTacToe(void)
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
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(145, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic-Tac-Toe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(133, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Who is playing first\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(146, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Current Turn: ";
			this->label3->Visible = false;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(138, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"_";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(220, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 38);
			this->button2->TabIndex = 4;
			this->button2->Text = L"_";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(300, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 38);
			this->button3->TabIndex = 5;
			this->button3->Text = L"_";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(138, 167);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"_";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(220, 167);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 38);
			this->button5->TabIndex = 7;
			this->button5->Text = L"_";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(300, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 38);
			this->button6->TabIndex = 8;
			this->button6->Text = L"_";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(138, 220);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 38);
			this->button7->TabIndex = 9;
			this->button7->Text = L"_";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(220, 220);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 38);
			this->button8->TabIndex = 10;
			this->button8->Text = L"_";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(303, 220);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 38);
			this->button9->TabIndex = 11;
			this->button9->Text = L"_";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Blue;
			this->button10->Location = System::Drawing::Point(179, 112);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(45, 38);
			this->button10->TabIndex = 12;
			this->button10->Text = L"X";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Red;
			this->button11->Location = System::Drawing::Point(260, 112);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(45, 38);
			this->button11->TabIndex = 13;
			this->button11->Text = L"O";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 339);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TicTacToe";
			this->Text = L"TicTacToe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
};
}
