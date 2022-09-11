#pragma once
#include "hmmModelling.h"

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
	/// Summary for Training
	/// </summary>
	public ref class Training : public System::Windows::Forms::Form
	{
	public:
		Training(void)
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
		~Training()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::TextBox^  word;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  dir;
	private: System::Windows::Forms::Label^  error;
	public protected: System::Windows::Forms::Label^  msg;
	private: System::Windows::Forms::Button^  exit;
	public protected: 
	private: 





	private: 
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
			System::Windows::Forms::ListViewGroup^  listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"Words", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^  listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {L"CAR", 
				L"CAR"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {L"LAPTOP", 
				L"LAPTOP"}, -1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {L"THREE", 
				L"THREE"}, -1));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Training::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->word = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dir = (gcnew System::Windows::Forms::TextBox());
			this->error = (gcnew System::Windows::Forms::Label());
			this->msg = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(911, 282);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Word";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(911, 408);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Directory";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1146, 543);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 43);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Train";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Training::button1_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			listViewGroup1->Header = L"Words";
			listViewGroup1->Name = L"listViewGroup1";
			listViewGroup2->Header = L"ListViewGroup";
			listViewGroup2->Name = L"listViewGroup2";
			listViewGroup2->Tag = L"grp2";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(2) {listViewGroup1, listViewGroup2});
			listViewItem1->IndentCount = 2;
			listViewItem1->StateImageIndex = 0;
			listViewItem2->StateImageIndex = 0;
			listViewItem3->StateImageIndex = 0;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {listViewItem1, listViewItem2, 
				listViewItem3});
			this->listView1->Location = System::Drawing::Point(1371, 195);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(428, 363);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Words";
			this->columnHeader1->Width = 176;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Directory";
			this->columnHeader2->Width = 179;
			// 
			// word
			// 
			this->word->Location = System::Drawing::Point(1146, 282);
			this->word->Name = L"word";
			this->word->Size = System::Drawing::Size(100, 26);
			this->word->TabIndex = 6;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(1761, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(134, 113);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// dir
			// 
			this->dir->Location = System::Drawing::Point(1146, 408);
			this->dir->Name = L"dir";
			this->dir->Size = System::Drawing::Size(100, 26);
			this->dir->TabIndex = 10;
			// 
			// error
			// 
			this->error->AutoSize = true;
			this->error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->error->Location = System::Drawing::Point(911, 610);
			this->error->Name = L"error";
			this->error->Size = System::Drawing::Size(437, 29);
			this->error->TabIndex = 11;
			this->error->Text = L"Either Directory or Word is incorrect.";
			this->error->Visible = false;
			// 
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->msg->Location = System::Drawing::Point(842, 660);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(595, 26);
			this->msg->TabIndex = 12;
			this->msg->Text = L"Model has been generated. Please check the directory.";
			this->msg->Visible = false;
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->exit->Location = System::Drawing::Point(1611, 610);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(100, 40);
			this->exit->TabIndex = 13;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Training::exit_Click);
			// 
			// Training
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1898, 1024);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->error);
			this->Controls->Add(this->dir);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->word);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Training";
			this->Text = L"Training";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Shown += gcnew System::EventHandler(this, &Training::Training_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
						System::String^ word1 = word->Text;
						System::String^ dir1 = dir->Text;
						msg->Visible = false;
						error->Visible = false;
						SpeechSynthesizer synth;// = gcnew SpeechSynthesizer();
						// Configure the audio output.   
						synth.SetOutputToDefaultAudioDevice();    
						 
						if(word1 == "CAR" && dir1 == "CAR"){
							char * word = "CAR";
							char * dir = "CAR";
							modelling(word ,dir);
							msg->Visible = true;
							synth.Speak(msg->Text); 
						}
						else if(word1 == "LAPTOP" && dir1 == "LAPTOP"){
							char * word = "LAPTOP";
							char * dir = "LAPTOP";
							modelling(word ,dir);
							msg->Visible = true;
							synth.Speak(msg->Text); 
						}
						else if(word1 == "THREE" && dir1 == "THREE"){
							char * word = "THREE";
							char * dir = "THREE";
							modelling(word ,dir);
							msg->Visible = true;
							synth.Speak(msg->Text); 
						}
						else{
							error->Visible = true;
							synth.Speak(error->Text); 
						}
						
			 }

private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form^ currentForm = Form::ActiveForm; //this is the change, code for redirect
			 currentForm->Visible = false;
		 }
private: System::Void Training_Shown(System::Object^  sender, System::EventArgs^  e) {
			 SpeechSynthesizer synth;// = gcnew SpeechSynthesizer();
				// Configure the audio output.   
				synth.SetOutputToDefaultAudioDevice();  
				// Speak a string synchronously.  
				synth.Speak("Please enter the word and directory to train new words.");  
		 }
};
}
