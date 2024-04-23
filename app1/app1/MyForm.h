#pragma once

namespace app1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ wynik;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btn_photo1;
	private: System::Windows::Forms::Button^ btn_photo2;
	private: System::Windows::Forms::Button^ button6btn_photo3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_photo1 = (gcnew System::Windows::Forms::Button());
			this->btn_photo2 = (gcnew System::Windows::Forms::Button());
			this->button6btn_photo3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(65, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 149);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Tweny-one";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aquamarine;
			this->button2->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(397, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 150);
			this->button2->TabIndex = 2;
			this->button2->Text = L"DAMN";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Pink;
			this->button3->Font = (gcnew System::Drawing::Font(L"Monotxt_IV25", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(808, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 149);
			this->button3->TabIndex = 3;
			this->button3->Text = L"whae";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// wynik
			// 
			this->wynik->BackColor = System::Drawing::SystemColors::Highlight;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wynik->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->wynik->Location = System::Drawing::Point(65, 544);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(955, 141);
			this->wynik->TabIndex = 4;
			this->wynik->Text = L"Wybor najlepszych slów raperów";
			this->wynik->UseVisualStyleBackColor = false;
			this->wynik->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gold;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::SizeNS;
			this->label1->Font = (gcnew System::Drawing::Font(L"NSimSun", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Location = System::Drawing::Point(187, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(681, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Konkurs najlepszych s³ow :)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btn_photo1
			// 
			this->btn_photo1->Location = System::Drawing::Point(65, 103);
			this->btn_photo1->Name = L"btn_photo1";
			this->btn_photo1->Size = System::Drawing::Size(195, 43);
			this->btn_photo1->TabIndex = 6;
			this->btn_photo1->Text = L"Photo nr.1";
			this->btn_photo1->UseVisualStyleBackColor = true;
			this->btn_photo1->Click += gcnew System::EventHandler(this, &MyForm::btn_photo1_Click);
			// 
			// btn_photo2
			// 
			this->btn_photo2->Location = System::Drawing::Point(397, 103);
			this->btn_photo2->Name = L"btn_photo2";
			this->btn_photo2->Size = System::Drawing::Size(286, 43);
			this->btn_photo2->TabIndex = 7;
			this->btn_photo2->Text = L"Photo nr.2";
			this->btn_photo2->UseVisualStyleBackColor = true;
			this->btn_photo2->Click += gcnew System::EventHandler(this, &MyForm::btn_photo2_Click);
			// 
			// button6btn_photo3
			// 
			this->button6btn_photo3->Location = System::Drawing::Point(808, 103);
			this->button6btn_photo3->Name = L"button6btn_photo3";
			this->button6btn_photo3->Size = System::Drawing::Size(212, 43);
			this->button6btn_photo3->TabIndex = 8;
			this->button6btn_photo3->Text = L"Photo nr.3";
			this->button6btn_photo3->UseVisualStyleBackColor = true;
			this->button6btn_photo3->Click += gcnew System::EventHandler(this, &MyForm::button6btn_photo3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(361, 317);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(354, 212);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 711);
			this->Controls->Add(this->button6btn_photo3);
			this->Controls->Add(this->btn_photo2);
			this->Controls->Add(this->btn_photo1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Aplikacja Tatry";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "11/10";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "8/10";


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "100/10";

}
private: System::Void btn_photo1_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Desktop\\Bartek Janik\\23.04.2024_appDesktopowe\\21.jpg");
}
private: System::Void btn_photo2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Desktop\\Bartek Janik\\23.04.2024_appDesktopowe\\luv.jpg");

}
private: System::Void button6btn_photo3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Load(L"C:\\Users\\Programista\\Desktop\\Bartek Janik\\23.04.2024_appDesktopowe\\carti.jpg");

}
};
}
