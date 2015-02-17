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
	private: System::IO::Ports::SerialPort^  serialPort1;
	protected: 
	private: System::Windows::Forms::ComboBox^  cb_Serial;
	private: System::Windows::Forms::Label^  lb_PortaSerial;

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
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->cb_Serial = (gcnew System::Windows::Forms::ComboBox());
			this->lb_PortaSerial = (gcnew System::Windows::Forms::Label());
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 262);
			this->Controls->Add(this->lb_PortaSerial);
			this->Controls->Add(this->cb_Serial);
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
	};
}

