#pragma once


namespace BlackScholes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  tbStock;
	private: System::Windows::Forms::TextBox^  tbVolatility;
	private: System::Windows::Forms::TextBox^  tbStrike;
	private: System::Windows::Forms::TextBox^  tbRate;
	private: System::Windows::Forms::Button^  btnCalculate;
	private: System::Windows::Forms::TextBox^  tbCall;
	private: System::Windows::Forms::TextBox^  tbPut;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DateTimePicker^  dtpCurrentDate;
	private: System::Windows::Forms::DateTimePicker^  dtpExpirationDate;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  Black;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:

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
			this->tbStock = (gcnew System::Windows::Forms::TextBox());
			this->tbVolatility = (gcnew System::Windows::Forms::TextBox());
			this->tbStrike = (gcnew System::Windows::Forms::TextBox());
			this->tbRate = (gcnew System::Windows::Forms::TextBox());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->tbCall = (gcnew System::Windows::Forms::TextBox());
			this->tbPut = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dtpCurrentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpExpirationDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Black = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbStock
			// 
			this->tbStock->Location = System::Drawing::Point(148, 15);
			this->tbStock->Name = L"tbStock";
			this->tbStock->Size = System::Drawing::Size(100, 22);
			this->tbStock->TabIndex = 1;
			// 
			// tbVolatility
			// 
			this->tbVolatility->Location = System::Drawing::Point(148, 52);
			this->tbVolatility->Name = L"tbVolatility";
			this->tbVolatility->Size = System::Drawing::Size(100, 22);
			this->tbVolatility->TabIndex = 2;
			// 
			// tbStrike
			// 
			this->tbStrike->Location = System::Drawing::Point(148, 85);
			this->tbStrike->Name = L"tbStrike";
			this->tbStrike->Size = System::Drawing::Size(100, 22);
			this->tbStrike->TabIndex = 3;
			// 
			// tbRate
			// 
			this->tbRate->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tbRate->Location = System::Drawing::Point(148, 123);
			this->tbRate->Name = L"tbRate";
			this->tbRate->Size = System::Drawing::Size(100, 22);
			this->tbRate->TabIndex = 4;
			// 
			// btnCalculate
			// 
			this->btnCalculate->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Helvetica", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalculate->Location = System::Drawing::Point(148, 320);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(100, 23);
			this->btnCalculate->TabIndex = 5;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = false;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::btnCalculate_Click);
			// 
			// tbCall
			// 
			this->tbCall->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tbCall->Location = System::Drawing::Point(150, 243);
			this->tbCall->Name = L"tbCall";
			this->tbCall->Size = System::Drawing::Size(100, 22);
			this->tbCall->TabIndex = 7;
			// 
			// tbPut
			// 
			this->tbPut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tbPut->Location = System::Drawing::Point(148, 272);
			this->tbPut->Name = L"tbPut";
			this->tbPut->Size = System::Drawing::Size(100, 22);
			this->tbPut->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Stock Price:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Volatility:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Strike Price:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Risk Free Rate:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Call Price:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(67, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Put Price:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dtpCurrentDate
			// 
			this->dtpCurrentDate->Location = System::Drawing::Point(148, 167);
			this->dtpCurrentDate->Name = L"dtpCurrentDate";
			this->dtpCurrentDate->Size = System::Drawing::Size(200, 22);
			this->dtpCurrentDate->TabIndex = 15;
			// 
			// dtpExpirationDate
			// 
			this->dtpExpirationDate->Location = System::Drawing::Point(148, 200);
			this->dtpExpirationDate->Name = L"dtpExpirationDate";
			this->dtpExpirationDate->Size = System::Drawing::Size(200, 22);
			this->dtpExpirationDate->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(43, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Current Date:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Expiration Date:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(264, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"enter 0.01 instead of 1%";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Black
			// 
			this->Black->AutoSize = true;
			this->Black->Font = (gcnew System::Drawing::Font(L"Helvetica", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Black->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Black->Location = System::Drawing::Point(10, 9);
			this->Black->Name = L"Black";
			this->Black->Size = System::Drawing::Size(490, 24);
			this->Black->TabIndex = 20;
			this->Black->Text = L"Black Scholes Option Pricing Apllication\r\n";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->tbStock);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnCalculate);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->dtpExpirationDate);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->tbPut);
			this->groupBox1->Controls->Add(this->dtpCurrentDate);
			this->groupBox1->Controls->Add(this->tbCall);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbVolatility);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->tbStrike);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tbRate);
			this->groupBox1->Location = System::Drawing::Point(14, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(486, 400);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 454);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Black);
			this->Name = L"Form1";
			this->Text = L"Black-Scholes Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
	
	// Declaring variables
	double stock, volatility, strike, rate, yearsdiff;
	double d1, d2;
	double cdf1, cdf2;
	double callPrice, putPrice;

	// Getting the datastamps, and converting the difference to years Credit: holowczak.com
	System::TimeSpan daysdiff;
	daysdiff = this->dtpExpirationDate->Value - this->dtpCurrentDate->Value;
	yearsdiff = ((double)daysdiff.Days / 365.0);
	
	// trying to read the user's input
	try{
		stock = Convert::ToDouble(tbStock->Text);
		volatility = Convert::ToDouble(tbVolatility->Text);
		strike = Convert::ToDouble(tbStrike->Text);
		rate = Convert::ToDouble(tbRate->Text);
		while (rate > 1 || yearsdiff < 0 || volatility > 1 ){			//checks if rate is in 0.001 format, if yearsdiff is positive, and volatility is also in 0.001 format
			if (rate > 1) {
				MessageBox::Show("Rate has to be in the format 0.00!");
			} //end if loop
			if (yearsdiff < 0) {
				MessageBox::Show("Current date can't be later than your expiration date!");
			} //end if loop
			if (volatility > 1) {
				MessageBox::Show("Volatility has to be expressed in 0.00 format, not percentage!");
			} //end if loop
			break;
		} // end of while loop
	} // end of try
	catch (Exception ^) //if there is an error, we'll catch it
	{
		MessageBox::Show(L"The values are invalid");
	}

	//calling functions to calculate d1,d2, cdf1, cdf2, and finally call and put price
	d1 = calculated1(stock, volatility, strike, rate, yearsdiff);
	d2 = calculated2(stock, volatility, strike, rate, yearsdiff);

	cdf1 = normalCDF(d1);
	cdf2 = normalCDF(d2);

	callPrice = Call(stock, strike, rate, yearsdiff, cdf1, cdf2);
	putPrice = Put(stock, strike, rate, yearsdiff, cdf1, cdf2);

	//outputting call and put prices in the correct format
	tbCall->Text = callPrice.ToString("#0.0000");
	tbPut->Text = putPrice.ToString("#0.0000");
	
	} //end btnCalculate_Click 

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	} //void label1_Click
};
}
