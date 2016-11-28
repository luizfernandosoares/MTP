#pragma once

namespace ProjGUI1 {

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
	private: System::Windows::Forms::Button^  btnIniciar;
	protected: 

	private: System::Windows::Forms::TextBox^  txtEntrada;
	protected: 

	private: System::Windows::Forms::CheckBox^  chkboxOpcao;

	private: System::Windows::Forms::Label^  lblMsg;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::RadioButton^  Button1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::GroupBox^  grpBoxEscolhas;
	private: System::Windows::Forms::RadioButton^  Button2;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::Label^  lblDownload;
	private: System::Windows::Forms::Label^  Download;


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
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->chkboxOpcao = (gcnew System::Windows::Forms::CheckBox());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Button1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->grpBoxEscolhas = (gcnew System::Windows::Forms::GroupBox());
			this->Button2 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->lblDownload = (gcnew System::Windows::Forms::Label());
			this->Download = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->grpBoxEscolhas->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(126, 355);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(75, 23);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(98, 190);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(139, 20);
			this->txtEntrada->TabIndex = 1;
			// 
			// chkboxOpcao
			// 
			this->chkboxOpcao->AutoSize = true;
			this->chkboxOpcao->Location = System::Drawing::Point(44, 331);
			this->chkboxOpcao->Name = L"chkboxOpcao";
			this->chkboxOpcao->Size = System::Drawing::Size(92, 17);
			this->chkboxOpcao->TabIndex = 2;
			this->chkboxOpcao->Text = L"Salvar em HD";
			this->chkboxOpcao->UseVisualStyleBackColor = true;
			// 
			// lblMsg
			// 
			this->lblMsg->AutoSize = true;
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMsg->Location = System::Drawing::Point(40, 23);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(251, 18);
			this->lblMsg->TabIndex = 3;
			this->lblMsg->Text = L"Conversor de videos de youtube";
			this->lblMsg->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lblMsg->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"WMA", L"MP3", L"MP4", L"AVI", L"WMV", L"MPEG"});
			this->comboBox1->Location = System::Drawing::Point(98, 149);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(139, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// Button1
			// 
			this->Button1->AutoSize = true;
			this->Button1->Location = System::Drawing::Point(22, 33);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(171, 17);
			this->Button1->TabIndex = 5;
			this->Button1->TabStop = true;
			this->Button1->Text = L"Abrir quando terminar de baixar";
			this->Button1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(132, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// grpBoxEscolhas
			// 
			this->grpBoxEscolhas->Controls->Add(this->Button2);
			this->grpBoxEscolhas->Controls->Add(this->Button1);
			this->grpBoxEscolhas->Location = System::Drawing::Point(32, 227);
			this->grpBoxEscolhas->Name = L"grpBoxEscolhas";
			this->grpBoxEscolhas->Size = System::Drawing::Size(264, 99);
			this->grpBoxEscolhas->TabIndex = 7;
			this->grpBoxEscolhas->TabStop = false;
			this->grpBoxEscolhas->Text = L"Opções";
			// 
			// Button2
			// 
			this->Button2->AutoSize = true;
			this->Button2->Location = System::Drawing::Point(22, 56);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(155, 17);
			this->Button2->TabIndex = 6;
			this->Button2->TabStop = true;
			this->Button2->Text = L"Não fazer nada após baixar";
			this->Button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Mirror link";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Formato";
			// 
			// lblDownload
			// 
			this->lblDownload->Location = System::Drawing::Point(0, 0);
			this->lblDownload->Name = L"lblDownload";
			this->lblDownload->Size = System::Drawing::Size(100, 23);
			this->lblDownload->TabIndex = 0;
			// 
			// Download
			// 
			this->Download->AutoSize = true;
			this->Download->Location = System::Drawing::Point(146, 398);
			this->Download->Name = L"Download";
			this->Download->Size = System::Drawing::Size(10, 13);
			this->Download->TabIndex = 10;
			this->Download->Text = L" ";
			this->Download->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 423);
			this->Controls->Add(this->Download);
			this->Controls->Add(this->lblDownload);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->grpBoxEscolhas);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->chkboxOpcao);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->btnIniciar);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"Form1";
			this->Text = L"Conversor YT";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->grpBoxEscolhas->ResumeLayout(false);
			this->grpBoxEscolhas->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ( Button1 || Button2 )
				 Download->Text = "Download terminado!";
		 }






// não apagar:
	};
}