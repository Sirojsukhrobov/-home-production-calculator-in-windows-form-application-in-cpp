#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;

	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnPlusMin;
	protected:




	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;








	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn3;


	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ btnEq;
	private: System::Windows::Forms::Button^ btnDel;















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnPlusMin = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Wingdings", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btnBack->Location = System::Drawing::Point(12, 138);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(140, 129);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::Desktop;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::Window;
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(748, 97);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(203, 138);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(346, 129);
			this->btnCE->TabIndex = 0;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = false;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btnPlusMin
			// 
			this->btnPlusMin->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnPlusMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlusMin->Location = System::Drawing::Point(620, 138);
			this->btnPlusMin->Name = L"btnPlusMin";
			this->btnPlusMin->Size = System::Drawing::Size(140, 129);
			this->btnPlusMin->TabIndex = 0;
			this->btnPlusMin->Text = L"±";
			this->btnPlusMin->UseVisualStyleBackColor = false;
			this->btnPlusMin->Click += gcnew System::EventHandler(this, &MyForm::buttonPlusMin_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(12, 291);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(140, 129);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(203, 291);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(140, 129);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(409, 291);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(140, 129);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAdd->Location = System::Drawing::Point(620, 291);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(140, 129);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(12, 456);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(140, 129);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(203, 456);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(140, 129);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(12, 609);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(140, 129);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(203, 609);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(140, 129);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(409, 456);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(140, 129);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(409, 609);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(140, 129);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSub->Location = System::Drawing::Point(620, 456);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(140, 129);
			this->btnSub->TabIndex = 0;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btnMul
			// 
			this->btnMul->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMul->Location = System::Drawing::Point(620, 609);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(140, 129);
			this->btnMul->TabIndex = 0;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = false;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ControlText;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(12, 770);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(140, 129);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// btnEq
			// 
			this->btnEq->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnEq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEq->Location = System::Drawing::Point(203, 770);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(346, 129);
			this->btnEq->TabIndex = 0;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = false;
			this->btnEq->Click += gcnew System::EventHandler(this, &MyForm::buttonEq_Click);
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::SystemColors::ControlText;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDel->Location = System::Drawing::Point(620, 770);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(140, 129);
			this->btnDel->TabIndex = 0;
			this->btnDel->Text = L"/";
			this->btnDel->UseVisualStyleBackColor = false;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(777, 917);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnPlusMin);
			this->Controls->Add(this->btnEq);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnBack);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double firtnum, secondnum, answer;
		String^ charOP;

#pragma endregion


private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {
	Button ^ numb = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0") {
		txtDisplay->Text = numb->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + numb->Text;
	}
}
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	firtnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOP = Aop->Text;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}

private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";
	}
}

private: System::Void buttonPlusMin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void buttonEq_Click(System::Object^ sender, System::EventArgs^ e) {
	secondnum = Double::Parse(txtDisplay->Text);

	if (charOP == "+") {
		answer = firtnum + secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "-") {
		answer = firtnum - secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "*") {
		answer = firtnum * secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}

	else if (charOP == "/") {
		answer = firtnum / secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
