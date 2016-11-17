#pragma once

namespace ProjGUI2 {

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
	private: System::Windows::Forms::TextBox^  Display;
	private: System::Windows::Forms::Button^  sete;
	private: System::Windows::Forms::Button^  oito;
	private: System::Windows::Forms::Button^  nove;
	private: System::Windows::Forms::Button^  apagar;
	private: System::Windows::Forms::Button^  apagartudo;





	private: System::Windows::Forms::Button^  quatro;
	private: System::Windows::Forms::Button^  cinco;
	private: System::Windows::Forms::Button^  seis;
	private: System::Windows::Forms::Button^  mais;

	private: System::Windows::Forms::Button^  menos;





	private: System::Windows::Forms::Button^  um;
	private: System::Windows::Forms::Button^  dois;
	private: System::Windows::Forms::Button^  tres;
	private: System::Windows::Forms::Button^  multiplicacao;
	private: System::Windows::Forms::Button^  divisao;





	private: System::Windows::Forms::Button^  zero;
	private: System::Windows::Forms::Button^  ponto;
	private: System::Windows::Forms::Button^  raiz;



	private: System::Windows::Forms::Button^  igual;

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
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->sete = (gcnew System::Windows::Forms::Button());
			this->oito = (gcnew System::Windows::Forms::Button());
			this->nove = (gcnew System::Windows::Forms::Button());
			this->apagar = (gcnew System::Windows::Forms::Button());
			this->apagartudo = (gcnew System::Windows::Forms::Button());
			this->quatro = (gcnew System::Windows::Forms::Button());
			this->cinco = (gcnew System::Windows::Forms::Button());
			this->seis = (gcnew System::Windows::Forms::Button());
			this->mais = (gcnew System::Windows::Forms::Button());
			this->menos = (gcnew System::Windows::Forms::Button());
			this->um = (gcnew System::Windows::Forms::Button());
			this->dois = (gcnew System::Windows::Forms::Button());
			this->tres = (gcnew System::Windows::Forms::Button());
			this->multiplicacao = (gcnew System::Windows::Forms::Button());
			this->divisao = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->ponto = (gcnew System::Windows::Forms::Button());
			this->raiz = (gcnew System::Windows::Forms::Button());
			this->igual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(12, 23);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(282, 41);
			this->Display->TabIndex = 0;
			// 
			// sete
			// 
			this->sete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sete->Location = System::Drawing::Point(19, 91);
			this->sete->Name = L"sete";
			this->sete->Size = System::Drawing::Size(47, 43);
			this->sete->TabIndex = 1;
			this->sete->Text = L"7";
			this->sete->UseVisualStyleBackColor = true;
			// 
			// oito
			// 
			this->oito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oito->Location = System::Drawing::Point(72, 91);
			this->oito->Name = L"oito";
			this->oito->Size = System::Drawing::Size(47, 43);
			this->oito->TabIndex = 2;
			this->oito->Text = L"8";
			this->oito->UseVisualStyleBackColor = true;
			// 
			// nove
			// 
			this->nove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nove->Location = System::Drawing::Point(124, 91);
			this->nove->Name = L"nove";
			this->nove->Size = System::Drawing::Size(47, 43);
			this->nove->TabIndex = 3;
			this->nove->Text = L"9";
			this->nove->UseVisualStyleBackColor = true;
			// 
			// apagar
			// 
			this->apagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->apagar->Location = System::Drawing::Point(179, 91);
			this->apagar->Name = L"apagar";
			this->apagar->Size = System::Drawing::Size(47, 43);
			this->apagar->TabIndex = 4;
			this->apagar->Text = L"C";
			this->apagar->UseVisualStyleBackColor = true;
			// 
			// apagartudo
			// 
			this->apagartudo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->apagartudo->Location = System::Drawing::Point(232, 91);
			this->apagartudo->Name = L"apagartudo";
			this->apagartudo->Size = System::Drawing::Size(47, 43);
			this->apagartudo->TabIndex = 5;
			this->apagartudo->Text = L"CE";
			this->apagartudo->UseVisualStyleBackColor = true;
			this->apagartudo->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// quatro
			// 
			this->quatro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->quatro->Location = System::Drawing::Point(20, 142);
			this->quatro->Name = L"quatro";
			this->quatro->Size = System::Drawing::Size(47, 43);
			this->quatro->TabIndex = 6;
			this->quatro->Text = L"4";
			this->quatro->UseVisualStyleBackColor = true;
			// 
			// cinco
			// 
			this->cinco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cinco->Location = System::Drawing::Point(73, 142);
			this->cinco->Name = L"cinco";
			this->cinco->Size = System::Drawing::Size(47, 43);
			this->cinco->TabIndex = 7;
			this->cinco->Text = L"5";
			this->cinco->UseVisualStyleBackColor = true;
			// 
			// seis
			// 
			this->seis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->seis->Location = System::Drawing::Point(124, 142);
			this->seis->Name = L"seis";
			this->seis->Size = System::Drawing::Size(47, 43);
			this->seis->TabIndex = 8;
			this->seis->Text = L"6";
			this->seis->UseVisualStyleBackColor = true;
			// 
			// mais
			// 
			this->mais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mais->Location = System::Drawing::Point(179, 140);
			this->mais->Name = L"mais";
			this->mais->Size = System::Drawing::Size(47, 43);
			this->mais->TabIndex = 9;
			this->mais->Text = L"+";
			this->mais->UseVisualStyleBackColor = true;
			// 
			// menos
			// 
			this->menos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->menos->Location = System::Drawing::Point(232, 142);
			this->menos->Name = L"menos";
			this->menos->Size = System::Drawing::Size(47, 43);
			this->menos->TabIndex = 10;
			this->menos->Text = L"-";
			this->menos->UseVisualStyleBackColor = true;
			// 
			// um
			// 
			this->um->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->um->Location = System::Drawing::Point(20, 191);
			this->um->Name = L"um";
			this->um->Size = System::Drawing::Size(47, 43);
			this->um->TabIndex = 11;
			this->um->Text = L"1";
			this->um->UseVisualStyleBackColor = true;
			this->um->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// dois
			// 
			this->dois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dois->Location = System::Drawing::Point(73, 191);
			this->dois->Name = L"dois";
			this->dois->Size = System::Drawing::Size(47, 43);
			this->dois->TabIndex = 12;
			this->dois->Text = L"2";
			this->dois->UseVisualStyleBackColor = true;
			this->dois->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// tres
			// 
			this->tres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tres->Location = System::Drawing::Point(126, 191);
			this->tres->Name = L"tres";
			this->tres->Size = System::Drawing::Size(47, 43);
			this->tres->TabIndex = 13;
			this->tres->Text = L"3";
			this->tres->UseVisualStyleBackColor = true;
			// 
			// multiplicacao
			// 
			this->multiplicacao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->multiplicacao->Location = System::Drawing::Point(179, 191);
			this->multiplicacao->Name = L"multiplicacao";
			this->multiplicacao->Size = System::Drawing::Size(47, 43);
			this->multiplicacao->TabIndex = 14;
			this->multiplicacao->Text = L"x";
			this->multiplicacao->UseVisualStyleBackColor = true;
			// 
			// divisao
			// 
			this->divisao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->divisao->Location = System::Drawing::Point(232, 191);
			this->divisao->Name = L"divisao";
			this->divisao->Size = System::Drawing::Size(47, 43);
			this->divisao->TabIndex = 15;
			this->divisao->Text = L"÷";
			this->divisao->UseVisualStyleBackColor = true;
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(19, 240);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(47, 43);
			this->zero->TabIndex = 16;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// ponto
			// 
			this->ponto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ponto->Location = System::Drawing::Point(72, 240);
			this->ponto->Name = L"ponto";
			this->ponto->Size = System::Drawing::Size(47, 43);
			this->ponto->TabIndex = 17;
			this->ponto->Text = L".";
			this->ponto->UseVisualStyleBackColor = true;
			// 
			// raiz
			// 
			this->raiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->raiz->Location = System::Drawing::Point(126, 240);
			this->raiz->Name = L"raiz";
			this->raiz->Size = System::Drawing::Size(47, 43);
			this->raiz->TabIndex = 18;
			this->raiz->Text = L"√";
			this->raiz->UseVisualStyleBackColor = true;
			// 
			// igual
			// 
			this->igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->igual->Location = System::Drawing::Point(179, 241);
			this->igual->Name = L"igual";
			this->igual->Size = System::Drawing::Size(100, 42);
			this->igual->TabIndex = 19;
			this->igual->Text = L"=";
			this->igual->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 300);
			this->Controls->Add(this->igual);
			this->Controls->Add(this->raiz);
			this->Controls->Add(this->ponto);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->divisao);
			this->Controls->Add(this->multiplicacao);
			this->Controls->Add(this->tres);
			this->Controls->Add(this->dois);
			this->Controls->Add(this->um);
			this->Controls->Add(this->menos);
			this->Controls->Add(this->mais);
			this->Controls->Add(this->seis);
			this->Controls->Add(this->cinco);
			this->Controls->Add(this->quatro);
			this->Controls->Add(this->apagartudo);
			this->Controls->Add(this->apagar);
			this->Controls->Add(this->nove);
			this->Controls->Add(this->oito);
			this->Controls->Add(this->sete);
			this->Controls->Add(this->Display);
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void zero_Click(System::Object^  sender, System::EventArgs^  e) {
			 Display->Text = 't';
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

