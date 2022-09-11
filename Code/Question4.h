#pragma once
#include "endGame.h"
namespace SessionFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech;
	using namespace System::Speech::Synthesis;
	/// <summary>
	/// Summary for Question4
	/// </summary>
	public ref class Question4 : public System::Windows::Forms::Form
	{
	public:
		Question4(void)
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
		~Question4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  incorrect;
	private: System::Windows::Forms::Label^  answer;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Question4::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->incorrect = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(982, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(714, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Our national bird is peacock. This sentence is correct or not.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(982, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(292, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Please speak yes or no.";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoCheck = false;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(987, 304);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(80, 33);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Yes";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(976, 396);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 33);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"No";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1603, 575);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Next";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Question4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1251, 575);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(209, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Record Answer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Question4::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(1761, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(134, 113);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// incorrect
			// 
			this->incorrect->AutoSize = true;
			this->incorrect->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->incorrect->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->incorrect->Location = System::Drawing::Point(1068, 707);
			this->incorrect->Name = L"incorrect";
			this->incorrect->Size = System::Drawing::Size(316, 39);
			this->incorrect->TabIndex = 12;
			this->incorrect->Text = L"Your answer is incorrect";
			this->incorrect->Visible = false;
			// 
			// answer
			// 
			this->answer->AutoSize = true;
			this->answer->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->answer->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->answer->Location = System::Drawing::Point(1068, 658);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(291, 39);
			this->answer->TabIndex = 11;
			this->answer->Text = L"Your answer is correct";
			this->answer->Visible = false;
			// 
			// Question4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->incorrect);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Question4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Question4";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Shown += gcnew System::EventHandler(this, &Question4::Question4_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ currentForm = Form::ActiveForm; //this is the change, code for redirect
				 currentForm->Visible = false;
				 Form^ form1 = gcnew endGame(); //this is the change, code for redirect
				 form1->ShowDialog();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int option = record1(4);
			 incorrect->Visible = false;
			 answer->Visible = false;
			 button2->Visible = false;
			 button1->Visible = true;
			//button2->Text = ""+option;
			 SpeechSynthesizer synth;// = gcnew SpeechSynthesizer();
			// Configure the audio output.   
			synth.SetOutputToDefaultAudioDevice();  
			
			 if(option == 11){
				answer->Visible = true;
				synth.Speak(answer->Text); 
				score++;
			 }
			 else{
				incorrect->Visible = true;
				synth.Speak(incorrect->Text);
			 }
			 
			 //testing with 4 models (options in the question)
				 //Label which will show correct answer , your option is correct or incorrect
		 }
private: System::Void Question4_Shown(System::Object^  sender, System::EventArgs^  e) {
				SpeechSynthesizer synth;// = gcnew SpeechSynthesizer();
				// Configure the audio output.   
				synth.SetOutputToDefaultAudioDevice();  
				// Speak a string synchronously.  
				synth.Speak(label1->Text); 
				synth.Speak(label2->Text); 
				
				button2->Visible = true;
				synth.Speak("Please click on record button to speak the answer");
				
		 }
};
}
