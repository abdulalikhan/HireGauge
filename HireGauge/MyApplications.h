#pragma once
#include "Person.h"
#include "Candidate.h"
#include "AssessmentViewer.h"
#include <msclr\marshal_cppstd.h>
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyApplications
	/// </summary>
	public ref class MyApplications : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		int assessment_id;
		int no_of_questions;
		int application_id;
		MyApplications(Person * ob)
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyApplications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::GroupBox^  applicationcontainer;

	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  applicationlist;
	private: System::Windows::Forms::GroupBox^  applicationdetails;

	private: System::Windows::Forms::Label^  closedate;
	private: System::Windows::Forms::Label^  closedateLbl;
	private: System::Windows::Forms::Label^  openingid;

	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Label^  dateapplied;

	private: System::Windows::Forms::Label^  companyname;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Button^  takeassessmentBtn;
	private: System::Windows::Forms::Label^  dateappliedLbl;

	private: System::Windows::Forms::Label^  companynameLbl;
	private: System::Windows::Forms::Label^  titleLbl;
	private: System::Windows::Forms::Label^  helpTxt2;
	private: System::Windows::Forms::Label^  applicationstatus;
	private: System::Windows::Forms::Label^  applicationstatusLbl;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyApplications::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->applicationcontainer = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt2 = (gcnew System::Windows::Forms::Label());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->applicationlist = (gcnew System::Windows::Forms::ListBox());
			this->applicationdetails = (gcnew System::Windows::Forms::GroupBox());
			this->applicationstatus = (gcnew System::Windows::Forms::Label());
			this->applicationstatusLbl = (gcnew System::Windows::Forms::Label());
			this->closedate = (gcnew System::Windows::Forms::Label());
			this->closedateLbl = (gcnew System::Windows::Forms::Label());
			this->openingid = (gcnew System::Windows::Forms::Label());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->dateapplied = (gcnew System::Windows::Forms::Label());
			this->companyname = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->takeassessmentBtn = (gcnew System::Windows::Forms::Button());
			this->dateappliedLbl = (gcnew System::Windows::Forms::Label());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->applicationcontainer->SuspendLayout();
			this->applicationdetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(176, 12);
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
			this->backBtn->Location = System::Drawing::Point(12, 12);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 57;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyApplications::backBtn_Click);
			// 
			// applicationcontainer
			// 
			this->applicationcontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->applicationcontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->applicationcontainer->Controls->Add(this->helpTxt2);
			this->applicationcontainer->Controls->Add(this->helpTxt1);
			this->applicationcontainer->Controls->Add(this->applicationlist);
			this->applicationcontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->applicationcontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->applicationcontainer->Location = System::Drawing::Point(12, 121);
			this->applicationcontainer->Name = L"applicationcontainer";
			this->applicationcontainer->Size = System::Drawing::Size(314, 362);
			this->applicationcontainer->TabIndex = 58;
			this->applicationcontainer->TabStop = false;
			this->applicationcontainer->Text = L"My Job Applications";
			this->applicationcontainer->Enter += gcnew System::EventHandler(this, &MyApplications::applicationcontainer_Enter);
			// 
			// helpTxt2
			// 
			this->helpTxt2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt2->Location = System::Drawing::Point(12, 73);
			this->helpTxt2->Name = L"helpTxt2";
			this->helpTxt2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt2->Size = System::Drawing::Size(109, 19);
			this->helpTxt2->TabIndex = 13;
			this->helpTxt2->Text = L"Application ID";
			this->helpTxt2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(12, 37);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(292, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select an application to view details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->helpTxt1->Click += gcnew System::EventHandler(this, &MyApplications::helpTxt1_Click);
			// 
			// applicationlist
			// 
			this->applicationlist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->applicationlist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->applicationlist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->applicationlist->FormattingEnabled = true;
			this->applicationlist->ItemHeight = 23;
			this->applicationlist->Location = System::Drawing::Point(16, 95);
			this->applicationlist->Name = L"applicationlist";
			this->applicationlist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->applicationlist->Size = System::Drawing::Size(273, 255);
			this->applicationlist->TabIndex = 12;
			this->applicationlist->SelectedIndexChanged += gcnew System::EventHandler(this, &MyApplications::applicationlist_SelectedIndexChanged);
			// 
			// applicationdetails
			// 
			this->applicationdetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->applicationdetails->Controls->Add(this->applicationstatus);
			this->applicationdetails->Controls->Add(this->applicationstatusLbl);
			this->applicationdetails->Controls->Add(this->closedate);
			this->applicationdetails->Controls->Add(this->closedateLbl);
			this->applicationdetails->Controls->Add(this->openingid);
			this->applicationdetails->Controls->Add(this->idLbl);
			this->applicationdetails->Controls->Add(this->dateapplied);
			this->applicationdetails->Controls->Add(this->companyname);
			this->applicationdetails->Controls->Add(this->title);
			this->applicationdetails->Controls->Add(this->takeassessmentBtn);
			this->applicationdetails->Controls->Add(this->dateappliedLbl);
			this->applicationdetails->Controls->Add(this->companynameLbl);
			this->applicationdetails->Controls->Add(this->titleLbl);
			this->applicationdetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->applicationdetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->applicationdetails->Location = System::Drawing::Point(349, 121);
			this->applicationdetails->Name = L"applicationdetails";
			this->applicationdetails->Size = System::Drawing::Size(415, 362);
			this->applicationdetails->TabIndex = 59;
			this->applicationdetails->TabStop = false;
			this->applicationdetails->Text = L"Application Details";
			// 
			// applicationstatus
			// 
			this->applicationstatus->AutoSize = true;
			this->applicationstatus->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->applicationstatus->Location = System::Drawing::Point(175, 253);
			this->applicationstatus->Name = L"applicationstatus";
			this->applicationstatus->Size = System::Drawing::Size(0, 19);
			this->applicationstatus->TabIndex = 20;
			// 
			// applicationstatusLbl
			// 
			this->applicationstatusLbl->AutoSize = true;
			this->applicationstatusLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->applicationstatusLbl->Location = System::Drawing::Point(43, 253);
			this->applicationstatusLbl->Name = L"applicationstatusLbl";
			this->applicationstatusLbl->Size = System::Drawing::Size(137, 19);
			this->applicationstatusLbl->TabIndex = 19;
			this->applicationstatusLbl->Text = L"Application Status:";
			// 
			// closedate
			// 
			this->closedate->AutoSize = true;
			this->closedate->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->closedate->Location = System::Drawing::Point(125, 214);
			this->closedate->Name = L"closedate";
			this->closedate->Size = System::Drawing::Size(0, 19);
			this->closedate->TabIndex = 18;
			// 
			// closedateLbl
			// 
			this->closedateLbl->AutoSize = true;
			this->closedateLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->closedateLbl->Location = System::Drawing::Point(43, 214);
			this->closedateLbl->Name = L"closedateLbl";
			this->closedateLbl->Size = System::Drawing::Size(85, 19);
			this->closedateLbl->TabIndex = 17;
			this->closedateLbl->Text = L"Close Date:";
			// 
			// openingid
			// 
			this->openingid->AutoSize = true;
			this->openingid->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->openingid->Location = System::Drawing::Point(128, 50);
			this->openingid->Name = L"openingid";
			this->openingid->Size = System::Drawing::Size(0, 19);
			this->openingid->TabIndex = 16;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(43, 50);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(88, 19);
			this->idLbl->TabIndex = 15;
			this->idLbl->Text = L"Opening ID:";
			// 
			// dateapplied
			// 
			this->dateapplied->AutoSize = true;
			this->dateapplied->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateapplied->Location = System::Drawing::Point(143, 171);
			this->dateapplied->Name = L"dateapplied";
			this->dateapplied->Size = System::Drawing::Size(0, 19);
			this->dateapplied->TabIndex = 10;
			// 
			// companyname
			// 
			this->companyname->AutoSize = true;
			this->companyname->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->companyname->Location = System::Drawing::Point(159, 128);
			this->companyname->Name = L"companyname";
			this->companyname->Size = System::Drawing::Size(0, 19);
			this->companyname->TabIndex = 9;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(80, 85);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(0, 19);
			this->title->TabIndex = 8;
			// 
			// takeassessmentBtn
			// 
			this->takeassessmentBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->takeassessmentBtn->Enabled = false;
			this->takeassessmentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->takeassessmentBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->takeassessmentBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"takeassessmentBtn.Image")));
			this->takeassessmentBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->takeassessmentBtn->Location = System::Drawing::Point(129, 309);
			this->takeassessmentBtn->Name = L"takeassessmentBtn";
			this->takeassessmentBtn->Size = System::Drawing::Size(194, 41);
			this->takeassessmentBtn->TabIndex = 7;
			this->takeassessmentBtn->Text = L"Take Assessment";
			this->takeassessmentBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->takeassessmentBtn->UseVisualStyleBackColor = false;
			this->takeassessmentBtn->Click += gcnew System::EventHandler(this, &MyApplications::takeassessmentBtn_Click);
			// 
			// dateappliedLbl
			// 
			this->dateappliedLbl->AutoSize = true;
			this->dateappliedLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateappliedLbl->Location = System::Drawing::Point(43, 171);
			this->dateappliedLbl->Name = L"dateappliedLbl";
			this->dateappliedLbl->Size = System::Drawing::Size(100, 19);
			this->dateappliedLbl->TabIndex = 2;
			this->dateappliedLbl->Text = L"Date Applied:";
			// 
			// companynameLbl
			// 
			this->companynameLbl->AutoSize = true;
			this->companynameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->companynameLbl->Location = System::Drawing::Point(43, 128);
			this->companynameLbl->Name = L"companynameLbl";
			this->companynameLbl->Size = System::Drawing::Size(120, 19);
			this->companynameLbl->TabIndex = 1;
			this->companynameLbl->Text = L"Company Name:";
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->titleLbl->Location = System::Drawing::Point(43, 85);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(42, 19);
			this->titleLbl->TabIndex = 0;
			this->titleLbl->Text = L"Title:";
			// 
			// MyApplications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(776, 495);
			this->Controls->Add(this->applicationdetails);
			this->Controls->Add(this->applicationcontainer);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyApplications";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Job Applications";
			this->Load += gcnew System::EventHandler(this, &MyApplications::MyApplications_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->applicationcontainer->ResumeLayout(false);
			this->applicationdetails->ResumeLayout(false);
			this->applicationdetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyApplications_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ candidate_id;
				 candidate_id = System::Convert::ToString(obj->getid());
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where candidate_id='"+candidate_id+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
				  	 {
						 applicationlist->Items->Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				 }
			 }
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void applicationlist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (applicationlist->SelectedIndex != -1){
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 String^ assessment_taken;
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where id='"+this->applicationlist->GetItemText(applicationlist->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 application_id = Convert::ToInt32(applicationlist->GetItemText(applicationlist->SelectedItem));
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 openingid->Text = myReader->GetString(1);
						 dateapplied->Text = myReader->GetString(3);
						 applicationstatus->Text = myReader->GetString(4);
						 assessment_taken = myReader->GetString(5);
					 }
					 MySqlCommand^cmdDataBase2=gcnew MySqlCommand("select * from hiregauge.jobopenings where id='"+this->openingid->Text+"';", conDataBase);
					 myReader->Close();
					 MySqlDataReader^ myReader2;
					 myReader2 = cmdDataBase2->ExecuteReader();
					 while(myReader2->Read())
					 {
						 assessment_id = System::Convert::ToInt32(myReader2->GetString(9));
						 title->Text = myReader2->GetString(1);
						 closedate->Text = myReader2->GetString(3);
						 companyname->Text = myReader2->GetString(4);
					 }
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 application_id = Convert::ToInt32(this->applicationlist->GetItemText(applicationlist->SelectedItem));
					 if ((DateTime::Parse(closedate->Text)>DateTime::Parse(today)) && (assessment_taken == "no")){
						 takeassessmentBtn->Enabled = true;
					 }else{
						 takeassessmentBtn->Enabled = false;
					 }
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
		 }
private: System::Void takeassessmentBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to take this assessment?","Assessment",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			 {
				 // Set "assessment_taken" flag to yes
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("update hiregauge.jobapplications set assessment_taken='yes' where id='"+application_id+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 int candidate_id = obj->getid();
				 MessageBox::Show("The timed assessment will begin as soon as you click the 'OK' button.");
				 this->Hide();
				 AssessmentViewer^ f2 = gcnew AssessmentViewer(assessment_id, candidate_id, application_id);
				 f2->ShowDialog();
				 this->Close();
			 }
		 }
private: System::Void helpTxt1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void applicationcontainer_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
