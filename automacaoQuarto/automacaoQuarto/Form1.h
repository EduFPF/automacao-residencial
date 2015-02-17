#pragma once
#include <windows.h>

namespace automacaoQuarto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			procurarPortas();
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
	private: System::IO::Ports::SerialPort^  portaSerial;
	protected: 

	protected: 
	private: System::Windows::Forms::ComboBox^  cb_Serial;
	private: System::Windows::Forms::Label^  lb_PortaSerial;

	private: System::Windows::Forms::ProgressBar^  pb_Conectando;


	private: System::Windows::Forms::Button^  bt_Desconectar;

	private: System::Windows::Forms::Button^  bt_Ligar;
	private: System::Windows::Forms::Button^  bt_Desligar;
	private: System::Windows::Forms::Button^  bt_Sair;
	private: System::Windows::Forms::Button^  bt_Conectar;




	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->portaSerial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->cb_Serial = (gcnew System::Windows::Forms::ComboBox());
			this->lb_PortaSerial = (gcnew System::Windows::Forms::Label());
			this->pb_Conectando = (gcnew System::Windows::Forms::ProgressBar());
			this->bt_Desconectar = (gcnew System::Windows::Forms::Button());
			this->bt_Ligar = (gcnew System::Windows::Forms::Button());
			this->bt_Desligar = (gcnew System::Windows::Forms::Button());
			this->bt_Sair = (gcnew System::Windows::Forms::Button());
			this->bt_Conectar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cb_Serial
			// 
			this->cb_Serial->FormattingEnabled = true;
			this->cb_Serial->Location = System::Drawing::Point(12, 29);
			this->cb_Serial->Name = L"cb_Serial";
			this->cb_Serial->Size = System::Drawing::Size(121, 21);
			this->cb_Serial->TabIndex = 0;
			// 
			// lb_PortaSerial
			// 
			this->lb_PortaSerial->AutoSize = true;
			this->lb_PortaSerial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lb_PortaSerial->Location = System::Drawing::Point(13, 13);
			this->lb_PortaSerial->Name = L"lb_PortaSerial";
			this->lb_PortaSerial->Size = System::Drawing::Size(77, 13);
			this->lb_PortaSerial->TabIndex = 1;
			this->lb_PortaSerial->Text = L"Porta Serial:";
			// 
			// pb_Conectando
			// 
			this->pb_Conectando->Location = System::Drawing::Point(12, 87);
			this->pb_Conectando->Name = L"pb_Conectando";
			this->pb_Conectando->Size = System::Drawing::Size(121, 21);
			this->pb_Conectando->TabIndex = 3;
			// 
			// bt_Desconectar
			// 
			this->bt_Desconectar->Enabled = false;
			this->bt_Desconectar->Location = System::Drawing::Point(12, 171);
			this->bt_Desconectar->Name = L"bt_Desconectar";
			this->bt_Desconectar->Size = System::Drawing::Size(78, 23);
			this->bt_Desconectar->TabIndex = 4;
			this->bt_Desconectar->Text = L"Desco&nectar";
			this->bt_Desconectar->UseVisualStyleBackColor = true;
			this->bt_Desconectar->Click += gcnew System::EventHandler(this, &Form1::bt_Desconectar_Click);
			// 
			// bt_Ligar
			// 
			this->bt_Ligar->Enabled = false;
			this->bt_Ligar->Location = System::Drawing::Point(206, 28);
			this->bt_Ligar->Name = L"bt_Ligar";
			this->bt_Ligar->Size = System::Drawing::Size(131, 80);
			this->bt_Ligar->TabIndex = 5;
			this->bt_Ligar->Text = L"&Ligar";
			this->bt_Ligar->UseVisualStyleBackColor = true;
			this->bt_Ligar->Click += gcnew System::EventHandler(this, &Form1::bt_Ligar_Click);
			// 
			// bt_Desligar
			// 
			this->bt_Desligar->Enabled = false;
			this->bt_Desligar->Location = System::Drawing::Point(206, 114);
			this->bt_Desligar->Name = L"bt_Desligar";
			this->bt_Desligar->Size = System::Drawing::Size(131, 80);
			this->bt_Desligar->TabIndex = 6;
			this->bt_Desligar->Text = L"&Desligar";
			this->bt_Desligar->UseVisualStyleBackColor = true;
			this->bt_Desligar->Click += gcnew System::EventHandler(this, &Form1::bt_Desligar_Click);
			// 
			// bt_Sair
			// 
			this->bt_Sair->Location = System::Drawing::Point(97, 171);
			this->bt_Sair->Name = L"bt_Sair";
			this->bt_Sair->Size = System::Drawing::Size(75, 23);
			this->bt_Sair->TabIndex = 7;
			this->bt_Sair->Text = L"&Sair";
			this->bt_Sair->UseVisualStyleBackColor = true;
			// 
			// bt_Conectar
			// 
			this->bt_Conectar->Location = System::Drawing::Point(12, 57);
			this->bt_Conectar->Name = L"bt_Conectar";
			this->bt_Conectar->Size = System::Drawing::Size(121, 23);
			this->bt_Conectar->TabIndex = 8;
			this->bt_Conectar->Text = L"&Conectar";
			this->bt_Conectar->UseVisualStyleBackColor = true;
			this->bt_Conectar->Click += gcnew System::EventHandler(this, &Form1::bt_Conectar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 205);
			this->Controls->Add(this->bt_Conectar);
			this->Controls->Add(this->bt_Sair);
			this->Controls->Add(this->bt_Desligar);
			this->Controls->Add(this->bt_Ligar);
			this->Controls->Add(this->bt_Desconectar);
			this->Controls->Add(this->pb_Conectando);
			this->Controls->Add(this->lb_PortaSerial);
			this->Controls->Add(this->cb_Serial);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"AutomaJoy";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		 // Procurar portas seriais disponiveis
	private: void procurarPortas(void)
			 {
		    array<Object^>^ serialArray = SerialPort::GetPortNames();
			this->cb_Serial->Items->AddRange( serialArray );
			 
			 }
private: System::Void bt_Conectar_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (!this->portaSerial->IsOpen) {
				 this->portaSerial->PortName = this->cb_Serial->Text;
			     this->portaSerial->Open();
				 this->bt_Conectar->Enabled = false;
				 this->bt_Desconectar->Enabled = true;
				 this->bt_Ligar->Enabled = true;
				 this->bt_Desligar->Enabled = true;
				 this->pb_Conectando->Value=100;
			 }
		 }
private: System::Void bt_Ligar_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->portaSerial->IsOpen) 
				this->portaSerial->WriteLine("1");
		 }
private: System::Void bt_Desconectar_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->portaSerial->IsOpen) {
				 this->portaSerial->Close();
				 this->bt_Conectar->Enabled = true;
				 this->bt_Desconectar->Enabled = false;
				 this->bt_Ligar->Enabled = false;
				 this->bt_Desligar->Enabled = false;
				 this->pb_Conectando->Value=0;
			 }
		 }
private: System::Void bt_Desligar_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->portaSerial->IsOpen) 
				this->portaSerial->WriteLine("0");
		 }
};
}

