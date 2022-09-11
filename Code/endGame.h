#pragma once
#include "recording.h"
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
	/// Summary for endGame
	/// </summary>
	public ref class endGame : public System::Windows::Forms::Form
	{
	public:
		endGame(void)
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
		~endGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  score1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(endGame::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->score1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(771, 738);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(356, 71);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &endGame::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(720, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(522, 117);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Thank you !!!";
			// 
			// score1
			// 
			this->score1->AutoSize = true;
			this->score1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->score1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->score1->Location = System::Drawing::Point(763, 201);
			this->score1->Name = L"score1";
			this->score1->Size = System::Drawing::Size(0, 46);
			this->score1->TabIndex = 2;
			// 
			// endGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->score1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"endGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"endGame";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Shown += gcnew System::EventHandler(this, &endGame::endGame_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ currentForm = Form::ActiveForm; //this is the change, code for redirect
				 currentForm->Visible = false;
				// Form^ form1 = gcnew Form1(); //this is the change, code for redirect
				// form1->Visible = true;
			 }
	private: System::Void endGame_Shown(System::Object^  sender, System::EventArgs^  e) {

				 SpeechSynthesizer synth;// = gcnew SpeechSynthesizer();
				// Configure the audio output.   
				synth.SetOutputToDefaultAudioDevice();  
				// Speak a string synchronously.  
				//score1->Text = L"your score is "+score;
				//synth.Speak(score1->Text);
				synth.Speak("Thank you For playing the game");  
			 }
	};
}
