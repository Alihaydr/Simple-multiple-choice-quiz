#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib> // for system
#include <vector>
#include <string> //toupper
#include <time.h> //toupper
#include < stdlib.h >
 

//By Ali Habib Haydar

namespace QuizGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		// variables list for this quiz game
		String^ correctAnswer;
		int questionNumber = 1;
		int score;
		int percentage;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



		   int totalQuestions;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			askQuestion(questionNumber);

			totalQuestions = 15;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	public: String^ name;



	public:
		 
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ welcom_text;
	private: System::Windows::Forms::Button^ btn_exit;

	private: System::Windows::Forms::Button^ btn_play;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ D;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ B;
	private: System::Windows::Forms::Button^ A;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->welcom_text = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_play = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->D = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->B = (gcnew System::Windows::Forms::Button());
			this->A = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->welcom_text);
			this->groupBox2->Controls->Add(this->btn_exit);
			this->groupBox2->Controls->Add(this->btn_play);
			this->groupBox2->Location = System::Drawing::Point(197, 283);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(358, 346);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			// 
			// welcom_text
			// 
			this->welcom_text->AutoSize = true;
			this->welcom_text->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcom_text->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->welcom_text->Location = System::Drawing::Point(72, 64);
			this->welcom_text->Name = L"welcom_text";
			this->welcom_text->Size = System::Drawing::Size(205, 50);
			this->welcom_text->TabIndex = 3;
			this->welcom_text->Text = L"Hello Name !";
			// 
			// btn_exit
			// 
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold));
			this->btn_exit->Location = System::Drawing::Point(70, 231);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(207, 57);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->Text = L"EXIT";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->UseWaitCursor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// btn_play
			// 
			this->btn_play->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_play->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btn_play->Location = System::Drawing::Point(70, 151);
			this->btn_play->Name = L"btn_play";
			this->btn_play->Size = System::Drawing::Size(207, 57);
			this->btn_play->TabIndex = 0;
			this->btn_play->Text = L"PLAY";
			this->btn_play->UseVisualStyleBackColor = true;
			this->btn_play->Click += gcnew System::EventHandler(this, &MyForm::btn_play_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->D);
			this->groupBox3->Controls->Add(this->C);
			this->groupBox3->Controls->Add(this->B);
			this->groupBox3->Controls->Add(this->A);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(37, 29);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(683, 594);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(22, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(638, 318);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// D
			// 
			this->D->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->D->Location = System::Drawing::Point(355, 497);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(276, 58);
			this->D->TabIndex = 4;
			this->D->Tag = L"4";
			this->D->Text = L"D";
			this->D->UseVisualStyleBackColor = true;
			this->D->Click += gcnew System::EventHandler(this, &MyForm::clickanswerevent);
			// 
			// C
			// 
			this->C->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->C->Location = System::Drawing::Point(49, 497);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(257, 58);
			this->C->TabIndex = 3;
			this->C->Tag = L"3";
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &MyForm::clickanswerevent);
			// 
			// B
			// 
			this->B->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold));
			this->B->Location = System::Drawing::Point(355, 422);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(276, 58);
			this->B->TabIndex = 2;
			this->B->Tag = L"2";
			this->B->Text = L"B";
			this->B->UseVisualStyleBackColor = true;
			this->B->Click += gcnew System::EventHandler(this, &MyForm::clickanswerevent);
			// 
			// A
			// 
			this->A->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A->Location = System::Drawing::Point(49, 422);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(257, 58);
			this->A->TabIndex = 1;
			this->A->Tag = L"1";
			this->A->Text = L"A";
			this->A->UseVisualStyleBackColor = true;
			this->A->Click += gcnew System::EventHandler(this, &MyForm::clickanswerevent);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 33);
			this->label3->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(209, -19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(329, 296);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->ClientSize = System::Drawing::Size(752, 657);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
 
	 

		   private: void askQuestion(int qnum)
		   {

			   switch (qnum)
			   {

			   case 1:
 
				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\one.jpg");
				   label3->Text = "who created the first airplane in the world";

				   A->Text = "Galileo Galilei";
				   B->Text = "Alexandre Mikulin";
				   C->Text = "The Wright brothers";
				   D->Text = "Karl Benz";

				   correctAnswer = "C";

				   break;
			   case 2:
				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\two.jpg");
				   label3->Text = "When the jet engine was invented";

				   A->Text = "1930";
				   B->Text = "1911";
				   C->Text = "1925";
				   D->Text = "1935";

				   correctAnswer = "A";

				   break;

			   case 3:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\three.png");

				   label3->Text = "who created the first turboprop engine in the world?";

				   A->Text = "Nikolai Polikarpov";
				   B->Text = "Semion Lavochkin";
				   C->Text = "Andrey Tupalev";
				   D->Text = "György Jendrassik";

				   correctAnswer = "D";

				   break;

			   case 4:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\four.jpg");

				   label3->Text = "what is the name of the first fighter";

				   A->Text = " IL 405";
				   B->Text = "IL 400";
				   C->Text = "IL 34";
				   D->Text = "IL 200";

				   correctAnswer = "B";

				   break;

			   case 5:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\figh.jpg");

				   label3->Text = "who was the first astronaut";

				   A->Text = "Valentina Tereshkova";
				   B->Text = "Nil Armestrong ";
				   C->Text = "Yuri Gagarin";
				   D->Text = "Andre Citroen";

				   correctAnswer = "C";

				   break;

			   case 6:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\six1.jpg");

				   label3->Text = "the fastest aircraft in the world is";

				   A->Text = "F-15 Eagle";
				   B->Text = "F-111 Aardvark";
				   C->Text = "Су-27";
				   D->Text = "Boeing X-43";

				   correctAnswer = "D";

				   break;

			   case 7:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\seven.png");

				   label3->Text = " The fastest fighter in the world";

				   A->Text = "McDonnell Douglas F-15 Eagle";
				   B->Text = "Fighter MiG-25";
				   C->Text = "Fighter MiG-31";
				   D->Text = "Grumman F-14 Tomcat";

				   correctAnswer = "C";

				   break;

			   case 8:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\eight.jpg");

				   label3->Text = "the first supersonic aircraft in the world";

				   A->Text = "Bell X-1";
				   B->Text = "Douglas X-3 Stiletto";
				   C->Text = "Fairey Delta 2";
				   D->Text = "Mitsubishi F-1";

				   correctAnswer = "A";

				   break;

			   case 9:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\nine.jpg");

				   label3->Text = "What is the name of a plane with 3 wings?";

				   A->Text = "biplane";
				   B->Text = "monoplane";
				   C->Text = "triplane";
				   D->Text = "parosol";

				   correctAnswer = "C";

				   break;

			   case 10:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\ten.png");

				   label3->Text = "At MIG -15 what shape of the wing";

				   A->Text = "rectangular";
				   B->Text = "round";
				   C->Text = "elliptical";
				   D->Text = "swept";

				   correctAnswer = "D";

				   break;
			   case 11:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\eleven.jpg");

				   label3->Text = "in the plane Ant-20 where are the engines";

				   A->Text = "in the nose";
				   B->Text = "4 on pylons under the wing";
				   C->Text = " 4 in the crown of the wing";
				   D->Text = "over the wing";

				   correctAnswer = "B";

				   break;

			   case 12:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\twelve.jpg");

				   label3->Text = "what is the fuselage layout of the Tu-4 aircraft";

				   A->Text = "Normal";
				   B->Text = "gondola";
				   C->Text = "boat";
				   D->Text = "two-beam";

				   correctAnswer = "A";

				   break;

			   case 13:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\therteen.jpg");

				   label3->Text = "how the location and number of wings of the AN-2";

				   A->Text = "monoplane";
				   B->Text = "biplane";
				   C->Text = "gull";
				   D->Text = "triplane";

				   correctAnswer = "B";

				   break;
			   case 14:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\fourteen.jpg");

				   label3->Text = "what is called an aircraft that is capable of carrying aviation weapons";

				   A->Text = "fighter";
				   B->Text = "strategic bomber";
				   C->Text = "helicopter";
				   D->Text = "tanker";

				   correctAnswer = "B";

				   break;

			   case 15:

				   pictureBox1->Image = Image::FromFile("C:\\Users\\user\\Documents\\airplane project\\fighvteen.png");

				   label3->Text = "What is the part of an aircraft that provides lift?";

				   A->Text = "engine";
				   B->Text = "chassis";
				   C->Text = "front of the aircraft";
				   D->Text = "wing";

				   correctAnswer = "D";

				   break;
			   }

		   }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

 
}
 
	private: System::Void btn_play_Click(System::Object^ sender, System::EventArgs^ e) {

		groupBox2->Visible = false;
		pictureBox2->Visible = false;
		groupBox3->Visible = true;
	}
 
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
 
 
private: System::Void clickanswerevent(System::Object^ sender, System::EventArgs^ e) {

	Button^ senderObject = (Button^)sender;	 

	if (senderObject->Name == correctAnswer)
		score++;

	if (questionNumber == totalQuestions)
	{
		percentage = (int)Math::Round((double)(100 * score) / totalQuestions);


		MessageBox::Show("Quiz Ended" + Environment::NewLine +
			"You have answered " + score + " questions correcly" + Environment::NewLine +
			"Your total percentage is " + percentage + " %" + Environment::NewLine +
			"Click Ok to play again"

		);

		score = 0;
		questionNumber = 0;

		askQuestion(questionNumber);
	}

	questionNumber++;

	askQuestion(questionNumber);

}
	 
};
}
