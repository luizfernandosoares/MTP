#include<cmath>

#pragma once

namespace ProjGUI2 {

	#define MAXCHARDISP 16

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

	private: System::Windows::Forms::Button^  sete;
	private: System::Windows::Forms::Button^  oito;
	private: System::Windows::Forms::Button^  nove;
	private: System::Windows::Forms::Button^  potencia;


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
	private: System::Windows::Forms::Button^  fatorial;
	private: System::Windows::Forms::Button^  trocarsinal;
	private: System::Windows::Forms::Label^  lblDisplay;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->sete = (gcnew System::Windows::Forms::Button());
			this->oito = (gcnew System::Windows::Forms::Button());
			this->nove = (gcnew System::Windows::Forms::Button());
			this->potencia = (gcnew System::Windows::Forms::Button());
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
			this->fatorial = (gcnew System::Windows::Forms::Button());
			this->trocarsinal = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->sete->Click += gcnew System::EventHandler(this, &Form1::sete_Click);
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
			this->oito->Click += gcnew System::EventHandler(this, &Form1::oito_Click);
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
			this->nove->Click += gcnew System::EventHandler(this, &Form1::nove_Click);
			// 
			// potencia
			// 
			this->potencia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->potencia->Location = System::Drawing::Point(232, 191);
			this->potencia->Name = L"potencia";
			this->potencia->Size = System::Drawing::Size(47, 43);
			this->potencia->TabIndex = 4;
			this->potencia->Text = L"xʸ";
			this->potencia->UseVisualStyleBackColor = true;
			this->potencia->Click += gcnew System::EventHandler(this, &Form1::potencia_Click);
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
			this->quatro->Click += gcnew System::EventHandler(this, &Form1::quatro_Click);
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
			this->cinco->Click += gcnew System::EventHandler(this, &Form1::cinco_Click);
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
			this->seis->Click += gcnew System::EventHandler(this, &Form1::seis_Click);
			// 
			// mais
			// 
			this->mais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mais->Location = System::Drawing::Point(179, 91);
			this->mais->Name = L"mais";
			this->mais->Size = System::Drawing::Size(47, 43);
			this->mais->TabIndex = 9;
			this->mais->Text = L"+";
			this->mais->UseVisualStyleBackColor = true;
			this->mais->Click += gcnew System::EventHandler(this, &Form1::mais_Click);
			// 
			// menos
			// 
			this->menos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->menos->Location = System::Drawing::Point(179, 142);
			this->menos->Name = L"menos";
			this->menos->Size = System::Drawing::Size(47, 43);
			this->menos->TabIndex = 10;
			this->menos->Text = L"-";
			this->menos->UseVisualStyleBackColor = true;
			this->menos->Click += gcnew System::EventHandler(this, &Form1::menos_Click);
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
			this->tres->Click += gcnew System::EventHandler(this, &Form1::tres_Click);
			// 
			// multiplicacao
			// 
			this->multiplicacao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->multiplicacao->Location = System::Drawing::Point(179, 191);
			this->multiplicacao->Name = L"multiplicacao";
			this->multiplicacao->Size = System::Drawing::Size(47, 43);
			this->multiplicacao->TabIndex = 14;
			this->multiplicacao->Text = L"×";
			this->multiplicacao->UseVisualStyleBackColor = true;
			this->multiplicacao->Click += gcnew System::EventHandler(this, &Form1::multiplicacao_Click);
			// 
			// divisao
			// 
			this->divisao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->divisao->Location = System::Drawing::Point(179, 240);
			this->divisao->Name = L"divisao";
			this->divisao->Size = System::Drawing::Size(47, 43);
			this->divisao->TabIndex = 15;
			this->divisao->Text = L"÷";
			this->divisao->UseVisualStyleBackColor = true;
			this->divisao->Click += gcnew System::EventHandler(this, &Form1::divisao_Click);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(73, 240);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(47, 43);
			this->zero->TabIndex = 16;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// ponto
			// 
			this->ponto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ponto->Location = System::Drawing::Point(19, 240);
			this->ponto->Name = L"ponto";
			this->ponto->Size = System::Drawing::Size(47, 43);
			this->ponto->TabIndex = 17;
			this->ponto->Text = L",";
			this->ponto->UseVisualStyleBackColor = true;
			this->ponto->Click += gcnew System::EventHandler(this, &Form1::ponto_Click);
			// 
			// raiz
			// 
			this->raiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->raiz->Location = System::Drawing::Point(232, 240);
			this->raiz->Name = L"raiz";
			this->raiz->Size = System::Drawing::Size(47, 43);
			this->raiz->TabIndex = 18;
			this->raiz->Text = L"√¯";
			this->raiz->UseVisualStyleBackColor = true;
			this->raiz->Click += gcnew System::EventHandler(this, &Form1::raiz_Click);
			// 
			// igual
			// 
			this->igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->igual->Location = System::Drawing::Point(90, 289);
			this->igual->Name = L"igual";
			this->igual->Size = System::Drawing::Size(122, 42);
			this->igual->TabIndex = 19;
			this->igual->Text = L"=";
			this->igual->UseVisualStyleBackColor = true;
			this->igual->Click += gcnew System::EventHandler(this, &Form1::igual_Click);
			// 
			// fatorial
			// 
			this->fatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fatorial->Location = System::Drawing::Point(232, 142);
			this->fatorial->Name = L"fatorial";
			this->fatorial->Size = System::Drawing::Size(47, 43);
			this->fatorial->TabIndex = 20;
			this->fatorial->Text = L"n!";
			this->fatorial->UseVisualStyleBackColor = true;
			this->fatorial->Click += gcnew System::EventHandler(this, &Form1::fatorial_Click);
			// 
			// trocarsinal
			// 
			this->trocarsinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->trocarsinal->Location = System::Drawing::Point(126, 240);
			this->trocarsinal->Name = L"trocarsinal";
			this->trocarsinal->Size = System::Drawing::Size(47, 43);
			this->trocarsinal->TabIndex = 21;
			this->trocarsinal->Text = L"+/-";
			this->trocarsinal->UseVisualStyleBackColor = true;
			this->trocarsinal->Click += gcnew System::EventHandler(this, &Form1::trocarsinal_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblDisplay->BackColor = System::Drawing::SystemColors::Window;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(20, 24);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(257, 49);
			this->lblDisplay->TabIndex = 22;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lblDisplay->Click += gcnew System::EventHandler(this, &Form1::lblDisplay_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(301, 353);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->trocarsinal);
			this->Controls->Add(this->fatorial);
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
			this->Controls->Add(this->potencia);
			this->Controls->Add(this->nove);
			this->Controls->Add(this->oito);
			this->Controls->Add(this->sete);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		bool separado;
		double numero;
		char operacao;
		void LimpaDisplay () {
			separado = false;
			lblDisplay->Text = "0";
		}
		void LimpaTudo () {
			LimpaDisplay ();
			numero = 0.0;
			operacao = '\0';
		}
		double Fatorial ( double n ) {
			return ( n == 1 )? 1 : n*Fatorial(n-1);
		}

#pragma endregion
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				 if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "2";
				 else
					 lblDisplay->Text = lblDisplay->Text + "2";
			 }
		}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( lblDisplay->Text->Length < MAXCHARDISP ) {	
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "1";
				else
					lblDisplay->Text = lblDisplay->Text + "1";
			}
		 }
private: System::Void zero_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( lblDisplay->Text->Length < MAXCHARDISP )	
				if ( lblDisplay->Text != "0" )
					lblDisplay->Text = lblDisplay->Text + "0";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;
		 }
private: System::Void lblDisplay_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ponto_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP && !separado ) {
				 lblDisplay->Text = lblDisplay->Text + ",";
				 separado = true;
			 }
		 }
private: System::Void trocarsinal_Click(System::Object^  sender, System::EventArgs^  e) {
			 double num = System::Convert::ToDouble(lblDisplay->Text);
			 if ( num != 0 ) {
				lblDisplay->Text = System::Convert::ToString(num*(-1));
			 }
		 }
private: System::Void tres_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( lblDisplay->Text->Length < MAXCHARDISP ) {	
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "3";
				else
					lblDisplay->Text = lblDisplay->Text + "3";
			}
		 }
private: System::Void quatro_Click(System::Object^  sender, System::EventArgs^  e) {
			if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "4";
				else
					lblDisplay->Text = lblDisplay->Text + "4";
			}
		 }
private: System::Void cinco_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "5";
				else
					lblDisplay->Text = lblDisplay->Text + "5";
			 }
		 }
private: System::Void seis_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "6";
				else
					lblDisplay->Text = lblDisplay->Text + "6";
			 }
		 }
private: System::Void sete_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "7";
				else
					lblDisplay->Text = lblDisplay->Text + "7";
			 }
		 }
private: System::Void oito_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ) {
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "8";
				else
					lblDisplay->Text = lblDisplay->Text + "8";
			 }
		 }
private: System::Void nove_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( lblDisplay->Text->Length < MAXCHARDISP ){
				if ( lblDisplay->Text == "0" )
					lblDisplay->Text = "9";
				else
					lblDisplay->Text = lblDisplay->Text + "9";
			 }
		 }
private: System::Void mais_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '+';
			 LimpaDisplay ();
		 }
private: System::Void menos_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '-';
			 LimpaDisplay ();
		 }
private: System::Void multiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '*';
			 LimpaDisplay ();
		 }
private: System::Void divisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '/';
			 LimpaDisplay ();
		 }
private: System::Void igual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = System::Convert::ToDouble(lblDisplay->Text);
			 switch (operacao){
				 case '+':
					 lblDisplay->Text = System::Convert::ToString(numero + numero2);
					 break;
				 case '-':
					 lblDisplay->Text = System::Convert::ToString(numero - numero2);
					 break;
				 case '*':
					 lblDisplay->Text = System::Convert::ToString(numero * numero2);
					 break;
				 case '/':
					 lblDisplay->Text = System::Convert::ToString(numero / numero2);
					 break;
				 case 'P':
					 lblDisplay->Text = System::Convert::ToString( pow(numero, numero2) );
					 break;
			 }
		 }
private: System::Void raiz_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = sqrt( System::Convert::ToDouble(lblDisplay->Text) );
			 lblDisplay->Text = System::Convert::ToString(numero2);
		 }
private: System::Void potencia_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = 'P';
			 LimpaDisplay();
		 }
private: System::Void fatorial_Click(System::Object^  sender, System::EventArgs^  e) {
			 double num;
			 num = Fatorial( System::Convert::ToDouble(lblDisplay->Text) );
			 lblDisplay->Text = System::Convert::ToString(num);
		 }
};
}

