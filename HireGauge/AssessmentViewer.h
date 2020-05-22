#pragma once
#include <msclr\marshal_cppstd.h>
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Summary for AssessmentViewer
	/// </summary>
	public ref class AssessmentViewer : public System::Windows::Forms::Form
	{
	public:
		int assessment_id;
		int application_id;
		int question_count;
		int no_of_questions;
		int timelimit;
		String^ current_questionid;
		String^ correct_option;
		Dictionary<String^, String^> answers;
		Dictionary<String^, String^> correct_answers;
		int candidate_id;
		AssessmentViewer(int id, int candidate_id, int application_id): answers(gcnew Dictionary<String^, String^>()), correct_answers(gcnew Dictionary<String^, String^>())
		{
			InitializeComponent();
			assessment_id = id;
			this->candidate_id = candidate_id;
			this->application_id = application_id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AssessmentViewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  timeleftLbl;
	private: System::Windows::Forms::Label^  timeleft;


	private: System::Windows::Forms::Label^  questionLbl;
	private: System::Windows::Forms::Label^  question;
	private: System::Windows::Forms::TextBox^  question_text;


	private: System::Windows::Forms::Label^  answerLbl;
	private: System::Windows::Forms::Button^  nextBtn;
	private: System::Windows::Forms::Button^  previousBtn;
	private: System::Windows::Forms::Button^  submitBtn;
	private: System::Windows::Forms::ComboBox^  answerChoices;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  assessment_timer;
	private: System::Windows::Forms::Label^  secondsLbl;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AssessmentViewer::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->timeleftLbl = (gcnew System::Windows::Forms::Label());
			this->timeleft = (gcnew System::Windows::Forms::Label());
			this->questionLbl = (gcnew System::Windows::Forms::Label());
			this->question = (gcnew System::Windows::Forms::Label());
			this->question_text = (gcnew System::Windows::Forms::TextBox());
			this->answerLbl = (gcnew System::Windows::Forms::Label());
			this->nextBtn = (gcnew System::Windows::Forms::Button());
			this->previousBtn = (gcnew System::Windows::Forms::Button());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->answerChoices = (gcnew System::Windows::Forms::ComboBox());
			this->assessment_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->secondsLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(191, 24);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(369, 72);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(20, 19);
			this->backBtn->Margin = System::Windows::Forms::Padding(5);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(82, 77);
			this->backBtn->TabIndex = 58;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &AssessmentViewer::backBtn_Click);
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->title->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"title.Image")));
			this->title->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->title->Location = System::Drawing::Point(234, 126);
			this->title->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->title->Name = L"title";
			this->title->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->title->Size = System::Drawing::Size(282, 39);
			this->title->TabIndex = 59;
			this->title->Text = L"<title>";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// timeleftLbl
			// 
			this->timeleftLbl->AutoSize = true;
			this->timeleftLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timeleftLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->timeleftLbl->Location = System::Drawing::Point(601, 55);
			this->timeleftLbl->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->timeleftLbl->Name = L"timeleftLbl";
			this->timeleftLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->timeleftLbl->Size = System::Drawing::Size(103, 26);
			this->timeleftLbl->TabIndex = 60;
			this->timeleftLbl->Text = L"Time Left:";
			this->timeleftLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timeleft
			// 
			this->timeleft->AutoSize = true;
			this->timeleft->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timeleft->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->timeleft->Location = System::Drawing::Point(704, 55);
			this->timeleft->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->timeleft->Name = L"timeleft";
			this->timeleft->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->timeleft->Size = System::Drawing::Size(0, 26);
			this->timeleft->TabIndex = 61;
			this->timeleft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// questionLbl
			// 
			this->questionLbl->AutoSize = true;
			this->questionLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->questionLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->questionLbl->Location = System::Drawing::Point(335, 180);
			this->questionLbl->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->questionLbl->Name = L"questionLbl";
			this->questionLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->questionLbl->Size = System::Drawing::Size(98, 23);
			this->questionLbl->TabIndex = 62;
			this->questionLbl->Text = L"Question #";
			this->questionLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// question
			// 
			this->question->AutoSize = true;
			this->question->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->question->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->question->Location = System::Drawing::Point(433, 180);
			this->question->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->question->Name = L"question";
			this->question->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->question->Size = System::Drawing::Size(0, 23);
			this->question->TabIndex = 63;
			this->question->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// question_text
			// 
			this->question_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->question_text->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->question_text->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->question_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->question_text->Location = System::Drawing::Point(160, 212);
			this->question_text->Margin = System::Windows::Forms::Padding(5);
			this->question_text->Multiline = true;
			this->question_text->Name = L"question_text";
			this->question_text->ReadOnly = true;
			this->question_text->Size = System::Drawing::Size(484, 94);
			this->question_text->TabIndex = 64;
			// 
			// answerLbl
			// 
			this->answerLbl->AutoSize = true;
			this->answerLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answerLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->answerLbl->Location = System::Drawing::Point(241, 319);
			this->answerLbl->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->answerLbl->Name = L"answerLbl";
			this->answerLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->answerLbl->Size = System::Drawing::Size(77, 23);
			this->answerLbl->TabIndex = 66;
			this->answerLbl->Text = L"Answer:";
			this->answerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nextBtn
			// 
			this->nextBtn->FlatAppearance->BorderSize = 0;
			this->nextBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextBtn->ForeColor = System::Drawing::Color::White;
			this->nextBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"nextBtn.Image")));
			this->nextBtn->Location = System::Drawing::Point(654, 218);
			this->nextBtn->Margin = System::Windows::Forms::Padding(5);
			this->nextBtn->Name = L"nextBtn";
			this->nextBtn->Size = System::Drawing::Size(80, 75);
			this->nextBtn->TabIndex = 67;
			this->nextBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->nextBtn->UseVisualStyleBackColor = true;
			this->nextBtn->Click += gcnew System::EventHandler(this, &AssessmentViewer::nextBtn_Click);
			// 
			// previousBtn
			// 
			this->previousBtn->FlatAppearance->BorderSize = 0;
			this->previousBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previousBtn->ForeColor = System::Drawing::Color::White;
			this->previousBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"previousBtn.Image")));
			this->previousBtn->Location = System::Drawing::Point(68, 218);
			this->previousBtn->Margin = System::Windows::Forms::Padding(5);
			this->previousBtn->Name = L"previousBtn";
			this->previousBtn->Size = System::Drawing::Size(82, 69);
			this->previousBtn->TabIndex = 68;
			this->previousBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->previousBtn->UseVisualStyleBackColor = true;
			this->previousBtn->Click += gcnew System::EventHandler(this, &AssessmentViewer::previousBtn_Click);
			// 
			// submitBtn
			// 
			this->submitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->submitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->submitBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"submitBtn.Image")));
			this->submitBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->submitBtn->Location = System::Drawing::Point(299, 393);
			this->submitBtn->Margin = System::Windows::Forms::Padding(5);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(217, 47);
			this->submitBtn->TabIndex = 69;
			this->submitBtn->Text = L"Submit Assessment";
			this->submitBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->submitBtn->UseVisualStyleBackColor = false;
			this->submitBtn->Click += gcnew System::EventHandler(this, &AssessmentViewer::submitBtn_Click);
			// 
			// answerChoices
			// 
			this->answerChoices->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->answerChoices->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->answerChoices->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->answerChoices->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->answerChoices->FormattingEnabled = true;
			this->answerChoices->Location = System::Drawing::Point(322, 316);
			this->answerChoices->Margin = System::Windows::Forms::Padding(5);
			this->answerChoices->Name = L"answerChoices";
			this->answerChoices->Size = System::Drawing::Size(192, 31);
			this->answerChoices->TabIndex = 65;
			this->answerChoices->SelectedIndexChanged += gcnew System::EventHandler(this, &AssessmentViewer::answerChoices_SelectedIndexChanged);
			// 
			// assessment_timer
			// 
			this->assessment_timer->Enabled = true;
			this->assessment_timer->Interval = 1000;
			this->assessment_timer->Tick += gcnew System::EventHandler(this, &AssessmentViewer::assessment_timer_Tick);
			// 
			// secondsLbl
			// 
			this->secondsLbl->AutoSize = true;
			this->secondsLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->secondsLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->secondsLbl->Location = System::Drawing::Point(735, 55);
			this->secondsLbl->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->secondsLbl->Name = L"secondsLbl";
			this->secondsLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->secondsLbl->Size = System::Drawing::Size(21, 26);
			this->secondsLbl->TabIndex = 70;
			this->secondsLbl->Text = L"s";
			this->secondsLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AssessmentViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(805, 453);
			this->Controls->Add(this->secondsLbl);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->previousBtn);
			this->Controls->Add(this->nextBtn);
			this->Controls->Add(this->answerLbl);
			this->Controls->Add(this->answerChoices);
			this->Controls->Add(this->question_text);
			this->Controls->Add(this->question);
			this->Controls->Add(this->questionLbl);
			this->Controls->Add(this->timeleft);
			this->Controls->Add(this->timeleftLbl);
			this->Controls->Add(this->title);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"AssessmentViewer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Take an Assessment";
			this->Load += gcnew System::EventHandler(this, &AssessmentViewer::AssessmentViewer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AssessmentViewer_Load(System::Object^  sender, System::EventArgs^  e) {
				 answers.Clear();
				 correct_answers.Clear();
				 assessment_timer->Start();
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.assessments where id='"+assessment_id+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 question_count = 0;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
				  	 {
						 title->Text = myReader->GetString(2);
						 timeleft->Text = myReader->GetString(3);
						 no_of_questions = System::Convert::ToInt32(myReader->GetString(4));
						 timelimit = System::Convert::ToInt32(myReader->GetString(3));
					 }
					 myReader->Close();
					 MySqlCommand^cmdDataBase2=gcnew MySqlCommand("select * from hiregauge.questions where assessment_id='"+assessment_id+"';", conDataBase);
					 MySqlDataReader^ myReader2;
					 myReader2 = cmdDataBase2->ExecuteReader();
					 while(myReader2->Read())
				  	 {
						 current_questionid = myReader2->GetString(0);
						 question_text->Text = myReader2->GetString(2);
						 answerChoices->Items->Add(myReader2->GetString(3));
						 answerChoices->Items->Add(myReader2->GetString(4));
						 answerChoices->Items->Add(myReader2->GetString(5));
						 answerChoices->Items->Add(myReader2->GetString(6));
						 correct_option = myReader2->GetString(7);
						 question_count++;
						 question->Text = Convert::ToString(question_count);
						 if (correct_answers.ContainsKey(current_questionid)){
						 }else{
							 correct_answers.Add(current_questionid, correct_option);
						 }
						 break;
					}
					myReader2->Close();
				    conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void nextBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.questions where assessment_id='"+assessment_id+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 int count=1;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 if (question_count>=no_of_questions){
							 nextBtn->Enabled = false;
							 previousBtn->Enabled = true;
					 }else{
						 while(myReader->Read())
				  		 {
							if (count == question_count+1){
								question_count++;
								question->Text = Convert::ToString(question_count);
								answerChoices->Items->Clear();
								current_questionid = myReader->GetString(0);
								question_text->Text = myReader->GetString(2);
								answerChoices->Items->Add(myReader->GetString(3));
								answerChoices->Items->Add(myReader->GetString(4));
								answerChoices->Items->Add(myReader->GetString(5));
								answerChoices->Items->Add(myReader->GetString(6));
								correct_option = myReader->GetString(7);
								if (answers.ContainsKey(current_questionid)){
									answerChoices->Text = answers[current_questionid];
								}
								if (correct_answers.ContainsKey(current_questionid)){
								}else{
									correct_answers.Add(current_questionid, correct_option);
								}
								break;
							}else{
								count++;
							}
						}
						previousBtn->Enabled = true;
						myReader->Close();
						conDataBase->Close();
					 }
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				 }
			 }
private: System::Void answerChoices_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ currAnswer =  answerChoices->GetItemText(answerChoices->SelectedItem);
			 if (answers.ContainsKey(current_questionid)){
				 answers[current_questionid] = currAnswer;
			 }else{
				 answers.Add(current_questionid, currAnswer);
			 }
		 }
private: System::Void previousBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 msclr::interop::marshal_context context;
			 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.questions where assessment_id='"+assessment_id+"';", conDataBase);
			 MySqlDataReader^ myReader;
			 int count=1;
			 try{
				 conDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 if (question_count == 1){
					  previousBtn->Enabled = false;
					  nextBtn->Enabled = true;
				 }else{
					 while(myReader->Read())
					 {
						if (count == question_count-1){
							question_count--;
							question->Text = Convert::ToString(question_count);
							answerChoices->Items->Clear();
							current_questionid = myReader->GetString(0);
							question_text->Text = myReader->GetString(2);
							answerChoices->Items->Add(myReader->GetString(3));
							answerChoices->Items->Add(myReader->GetString(4));
							answerChoices->Items->Add(myReader->GetString(5));
							answerChoices->Items->Add(myReader->GetString(6));
							correct_option = myReader->GetString(7);
							if (answers.ContainsKey(current_questionid)){
									answerChoices->Text = answers[current_questionid];
							}
							if (correct_answers.ContainsKey(current_questionid)){
							}else{
									correct_answers.Add(current_questionid, correct_option);
							}
							break;
						}else{
							count++;
						}
					}
					nextBtn->Enabled = true;
					myReader->Close();
					conDataBase->Close();
				}
			}
			catch(MySqlException^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void submitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 assessment_timer->Stop();
			 String^ selected_option;
			 String^ status;
			 int score=0;
			 int timetaken = timelimit-Convert::ToInt32(timeleft->Text);
			 if (MessageBox::Show("Are you sure you would like to submit this assessment?","Submit Assessment",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			 {
				String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				MySqlCommand^cmdDataBase;
				MySqlCommand^cmdDataBase2;
				MySqlDataReader^ myReader;
				MySqlDataReader^ myReader2;
				try{
					conDataBase->Open();
				}
				catch(MySqlException^ ex1){
					MessageBox::Show(ex1->Message);
				}
				for (auto i = 0; i <= answers.Count; i++)
				{
					if (answers.ContainsKey(Convert::ToString(i))){
						selected_option = answers[Convert::ToString(i)];
						correct_option = correct_answers[Convert::ToString(i)];
						if (selected_option == correct_option){
							status = "correct";
							score++;
						}else{
							status = "incorrect";
						}
						cmdDataBase = gcnew MySqlCommand("insert into hiregauge.answers (assessment_id, question_id, candidate_id, selected_option, correct_option, status) values('"+assessment_id+"', '"+i+"', '"+candidate_id+"', '"+selected_option+"', '"+correct_option+"', '"+status+"');",conDataBase);
						try{
							myReader = cmdDataBase->ExecuteReader();
							while(myReader->Read())
							{
							}
							myReader->Close();
						}
						catch(MySqlException^ ex){
							MessageBox::Show(ex->Message);
						}
					}
				}
				cmdDataBase2 = gcnew MySqlCommand("insert into hiregauge.results (assessment_id, application_id, candidate_id, total_score, score, timelimit, timetaken) values('"+assessment_id+"', '"+application_id+"', '"+candidate_id+"', '"+no_of_questions+"', '"+score+"', '"+timelimit+"', '"+timetaken+"');",conDataBase);
				try{
					myReader2 = cmdDataBase2->ExecuteReader();
					while(myReader2->Read())
					{
					}
					myReader2->Close();
				}
				catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				}
				MessageBox::Show("Your responses have been successfully submitted!");
				conDataBase->Close();
				this->Close();
			 }
		 }
private: System::Void assessment_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (timeleft->Text == "0"){
				 assessment_timer->Stop();
				 MessageBox::Show("You have exceeded the time limit for this assessment, and you did not submit your responses.");
				 this->Close();
			 }else{
				 timeleft->Text = Convert::ToString(Convert::ToInt32(timeleft->Text)-1);
			 }
		 }
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to leave this assessment?","Leave Assessment",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			 {
				 this->Close();
			 }
		 }
};
}
