#pragma once
#include "Person.h"
#include "Candidate.h"
#include <msclr\marshal_cppstd.h>
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyResults
	/// </summary>
	public ref class MyResults : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		MyResults(Person * ob)
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyResults()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::GroupBox^  resultscontainer;
	private: System::Windows::Forms::Label^  helpTxt2;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  resultlist;
	private: System::Windows::Forms::GroupBox^  resultdetails;
	private: System::Windows::Forms::Label^  timelimit;


	private: System::Windows::Forms::Label^  timelimitLbl;

	private: System::Windows::Forms::Label^  timetaken;

	private: System::Windows::Forms::Label^  timetakenLbl;
	private: System::Windows::Forms::Label^  resultid;


	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Label^  totalscore;

	private: System::Windows::Forms::Label^  score;

	private: System::Windows::Forms::Label^  applicationid;
	private: System::Windows::Forms::Button^  printresultBtn;


	private: System::Windows::Forms::Label^  totalscoreLbl;

	private: System::Windows::Forms::Label^  scoreLbl;

	private: System::Windows::Forms::Label^  applicationidLbl;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyResults::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->resultscontainer = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt2 = (gcnew System::Windows::Forms::Label());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->resultlist = (gcnew System::Windows::Forms::ListBox());
			this->resultdetails = (gcnew System::Windows::Forms::GroupBox());
			this->timelimit = (gcnew System::Windows::Forms::Label());
			this->timelimitLbl = (gcnew System::Windows::Forms::Label());
			this->timetaken = (gcnew System::Windows::Forms::Label());
			this->timetakenLbl = (gcnew System::Windows::Forms::Label());
			this->resultid = (gcnew System::Windows::Forms::Label());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->totalscore = (gcnew System::Windows::Forms::Label());
			this->score = (gcnew System::Windows::Forms::Label());
			this->applicationid = (gcnew System::Windows::Forms::Label());
			this->printresultBtn = (gcnew System::Windows::Forms::Button());
			this->totalscoreLbl = (gcnew System::Windows::Forms::Label());
			this->scoreLbl = (gcnew System::Windows::Forms::Label());
			this->applicationidLbl = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->resultscontainer->SuspendLayout();
			this->resultdetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(166, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(12, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 58;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyResults::backBtn_Click);
			// 
			// resultscontainer
			// 
			this->resultscontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resultscontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->resultscontainer->Controls->Add(this->helpTxt2);
			this->resultscontainer->Controls->Add(this->helpTxt1);
			this->resultscontainer->Controls->Add(this->resultlist);
			this->resultscontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resultscontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resultscontainer->Location = System::Drawing::Point(28, 119);
			this->resultscontainer->Name = L"resultscontainer";
			this->resultscontainer->Size = System::Drawing::Size(314, 362);
			this->resultscontainer->TabIndex = 59;
			this->resultscontainer->TabStop = false;
			this->resultscontainer->Text = L"My Results";
			// 
			// helpTxt2
			// 
			this->helpTxt2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt2->Location = System::Drawing::Point(12, 73);
			this->helpTxt2->Name = L"helpTxt2";
			this->helpTxt2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt2->Size = System::Drawing::Size(75, 19);
			this->helpTxt2->TabIndex = 13;
			this->helpTxt2->Text = L"Result ID";
			this->helpTxt2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(30, 41);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(249, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select a result to view details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// resultlist
			// 
			this->resultlist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resultlist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultlist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resultlist->FormattingEnabled = true;
			this->resultlist->ItemHeight = 23;
			this->resultlist->Location = System::Drawing::Point(16, 95);
			this->resultlist->Name = L"resultlist";
			this->resultlist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resultlist->Size = System::Drawing::Size(273, 255);
			this->resultlist->TabIndex = 12;
			this->resultlist->SelectedIndexChanged += gcnew System::EventHandler(this, &MyResults::resultlist_SelectedIndexChanged);
			// 
			// resultdetails
			// 
			this->resultdetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resultdetails->Controls->Add(this->timelimit);
			this->resultdetails->Controls->Add(this->timelimitLbl);
			this->resultdetails->Controls->Add(this->timetaken);
			this->resultdetails->Controls->Add(this->timetakenLbl);
			this->resultdetails->Controls->Add(this->resultid);
			this->resultdetails->Controls->Add(this->idLbl);
			this->resultdetails->Controls->Add(this->totalscore);
			this->resultdetails->Controls->Add(this->score);
			this->resultdetails->Controls->Add(this->applicationid);
			this->resultdetails->Controls->Add(this->printresultBtn);
			this->resultdetails->Controls->Add(this->totalscoreLbl);
			this->resultdetails->Controls->Add(this->scoreLbl);
			this->resultdetails->Controls->Add(this->applicationidLbl);
			this->resultdetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resultdetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resultdetails->Location = System::Drawing::Point(364, 119);
			this->resultdetails->Name = L"resultdetails";
			this->resultdetails->Size = System::Drawing::Size(415, 362);
			this->resultdetails->TabIndex = 60;
			this->resultdetails->TabStop = false;
			this->resultdetails->Text = L"Result Details";
			this->resultdetails->Enter += gcnew System::EventHandler(this, &MyResults::resultdetails_Enter);
			// 
			// timelimit
			// 
			this->timelimit->AutoSize = true;
			this->timelimit->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timelimit->Location = System::Drawing::Point(124, 251);
			this->timelimit->Name = L"timelimit";
			this->timelimit->Size = System::Drawing::Size(0, 19);
			this->timelimit->TabIndex = 20;
			// 
			// timelimitLbl
			// 
			this->timelimitLbl->AutoSize = true;
			this->timelimitLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timelimitLbl->Location = System::Drawing::Point(43, 251);
			this->timelimitLbl->Name = L"timelimitLbl";
			this->timelimitLbl->Size = System::Drawing::Size(81, 19);
			this->timelimitLbl->TabIndex = 19;
			this->timelimitLbl->Text = L"Time Limit:";
			// 
			// timetaken
			// 
			this->timetaken->AutoSize = true;
			this->timetaken->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timetaken->Location = System::Drawing::Point(125, 212);
			this->timetaken->Name = L"timetaken";
			this->timetaken->Size = System::Drawing::Size(0, 19);
			this->timetaken->TabIndex = 18;
			// 
			// timetakenLbl
			// 
			this->timetakenLbl->AutoSize = true;
			this->timetakenLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timetakenLbl->Location = System::Drawing::Point(43, 212);
			this->timetakenLbl->Name = L"timetakenLbl";
			this->timetakenLbl->Size = System::Drawing::Size(88, 19);
			this->timetakenLbl->TabIndex = 17;
			this->timetakenLbl->Text = L"Time Taken:";
			// 
			// resultid
			// 
			this->resultid->AutoSize = true;
			this->resultid->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resultid->Location = System::Drawing::Point(116, 54);
			this->resultid->Name = L"resultid";
			this->resultid->Size = System::Drawing::Size(0, 19);
			this->resultid->TabIndex = 16;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(43, 54);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(74, 19);
			this->idLbl->TabIndex = 15;
			this->idLbl->Text = L"Result ID:";
			// 
			// totalscore
			// 
			this->totalscore->AutoSize = true;
			this->totalscore->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->totalscore->Location = System::Drawing::Point(132, 172);
			this->totalscore->Name = L"totalscore";
			this->totalscore->Size = System::Drawing::Size(0, 19);
			this->totalscore->TabIndex = 10;
			// 
			// score
			// 
			this->score->AutoSize = true;
			this->score->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->score->Location = System::Drawing::Point(91, 131);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(0, 19);
			this->score->TabIndex = 9;
			// 
			// applicationid
			// 
			this->applicationid->AutoSize = true;
			this->applicationid->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->applicationid->Location = System::Drawing::Point(149, 90);
			this->applicationid->Name = L"applicationid";
			this->applicationid->Size = System::Drawing::Size(0, 19);
			this->applicationid->TabIndex = 8;
			// 
			// printresultBtn
			// 
			this->printresultBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->printresultBtn->Enabled = false;
			this->printresultBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->printresultBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->printresultBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"printresultBtn.Image")));
			this->printresultBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->printresultBtn->Location = System::Drawing::Point(129, 295);
			this->printresultBtn->Name = L"printresultBtn";
			this->printresultBtn->Size = System::Drawing::Size(151, 41);
			this->printresultBtn->TabIndex = 7;
			this->printresultBtn->Text = L"Print Result";
			this->printresultBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->printresultBtn->UseVisualStyleBackColor = false;
			this->printresultBtn->Click += gcnew System::EventHandler(this, &MyResults::printresultBtn_Click);
			// 
			// totalscoreLbl
			// 
			this->totalscoreLbl->AutoSize = true;
			this->totalscoreLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->totalscoreLbl->Location = System::Drawing::Point(43, 172);
			this->totalscoreLbl->Name = L"totalscoreLbl";
			this->totalscoreLbl->Size = System::Drawing::Size(88, 19);
			this->totalscoreLbl->TabIndex = 2;
			this->totalscoreLbl->Text = L"Total Score:";
			// 
			// scoreLbl
			// 
			this->scoreLbl->AutoSize = true;
			this->scoreLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->scoreLbl->Location = System::Drawing::Point(44, 131);
			this->scoreLbl->Name = L"scoreLbl";
			this->scoreLbl->Size = System::Drawing::Size(51, 19);
			this->scoreLbl->TabIndex = 1;
			this->scoreLbl->Text = L"Score:";
			// 
			// applicationidLbl
			// 
			this->applicationidLbl->AutoSize = true;
			this->applicationidLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->applicationidLbl->Location = System::Drawing::Point(43, 90);
			this->applicationidLbl->Name = L"applicationidLbl";
			this->applicationidLbl->Size = System::Drawing::Size(107, 19);
			this->applicationidLbl->TabIndex = 0;
			this->applicationidLbl->Text = L"Application ID:";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyResults::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyResults
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(791, 501);
			this->Controls->Add(this->resultdetails);
			this->Controls->Add(this->resultscontainer);
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
			this->Name = L"MyResults";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Results";
			this->Load += gcnew System::EventHandler(this, &MyResults::MyResults_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->resultscontainer->ResumeLayout(false);
			this->resultdetails->ResumeLayout(false);
			this->resultdetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void resultdetails_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void resultlist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (resultlist->SelectedIndex != -1){
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.results where id='"+this->resultlist->GetItemText(resultlist->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 resultid->Text = myReader->GetString(0);
						 applicationid->Text = myReader->GetString(2);
						 totalscore->Text = myReader->GetString(4);
						 score->Text = myReader->GetString(5);
						 timelimit->Text = myReader->GetString(6);
						 timetaken->Text = myReader->GetString(7);
						 printresultBtn->Enabled = true;
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 printresultBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void MyResults_Load(System::Object^  sender, System::EventArgs^  e) {
			 	 String^ candidate_id;
				 candidate_id = System::Convert::ToString(obj->getid());
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.results where candidate_id='"+candidate_id+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
				  	 {
						 resultlist->Items->Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			 String^ candidate_id;
			 candidate_id = System::Convert::ToString(obj->getid());
			 String^ today = Convert::ToString(DateTime::Now.ToString());
			 FontFamily ^ fntFamily = gcnew FontFamily("Candara");
			 System::Drawing::Font ^ fntWrite = gcnew System::Drawing::Font(fntFamily, 24.00F, FontStyle::Regular);
			 System::Drawing::Font ^ fntTitle = gcnew System::Drawing::Font(fntFamily, 32.00F, FontStyle::Regular);
			 e->Graphics->DrawString (L"HireGauge | Candidate Results", fntTitle, Brushes::Red, 50, 50);
			 e->Graphics->DrawString (L"[Generated on " + today + " ]", fntWrite, Brushes::Blue, 50, 150);
			 e->Graphics->DrawString (L"Candidate ID: " + candidate_id, fntWrite, Brushes::Black, 50, 200);
			 e->Graphics->DrawString (L"Result ID: " + resultid->Text, fntWrite, Brushes::Black, 50, 250);
			 e->Graphics->DrawString (L"Application ID: " + applicationid->Text, fntWrite, Brushes::Black, 50, 300);
			 e->Graphics->DrawString (L"Score: " + score->Text, fntWrite, Brushes::Black, 50, 350);
			 e->Graphics->DrawString (L"Total Score: " + totalscore->Text, fntWrite, Brushes::Black, 50, 400);
			 e->Graphics->DrawString (L"Time Taken: " + timetaken->Text + " s", fntWrite, Brushes::Black, 50, 450);
			 e->Graphics->DrawString (L"Total Time: " + timelimit->Text + " s", fntWrite, Brushes::Black, 50, 500);
		 }
private: System::Void printresultBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			  printPreviewDialog1->Document = printDocument1;
			  printPreviewDialog1->ShowDialog ();
		 }
};
}
