#pragma once
#include "Person.h"
#include "Employer.h"
#include "Assessment.h"
#include "AssessmentEditor.h"
#include "CreateJobOpening.h"
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
	/// Summary for ManageJobOpenings
	/// </summary>
	public ref class ManageJobOpenings : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
	private: System::Windows::Forms::Button^  createBtn;
	public: 
		Assessment * assessmentObj;
		ManageJobOpenings(Person * ob)
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManageJobOpenings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  closedateLbl;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;


	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::TextBox^  description;


	private: System::Windows::Forms::Label^  mainLbl;

	private: System::Windows::Forms::GroupBox^  jobOpenings;
	private: System::Windows::Forms::ListBox^  joblist;



	private: System::Windows::Forms::GroupBox^  jobdetails;
	private: System::Windows::Forms::Button^  updateBtn;

	private: System::Windows::Forms::Label^  locationLbl;
	private: System::Windows::Forms::Label^  jobtypeLbl;
	private: System::Windows::Forms::Label^  salaryLbl;
	private: System::Windows::Forms::Label^  descriptionLbl;
	private: System::Windows::Forms::Label^  opendateLbl;
	private: System::Windows::Forms::Label^  companynameLbl;
	private: System::Windows::Forms::Label^  titleLbl;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::TextBox^  companyname;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::TextBox^  location;
	private: System::Windows::Forms::TextBox^  jobtype;
	private: System::Windows::Forms::TextBox^  salary;
	private: System::Windows::Forms::DateTimePicker^  closedate;
	private: System::Windows::Forms::DateTimePicker^  opendate;
	private: System::Windows::Forms::Button^  deleteBtn;
	private: System::Windows::Forms::Button^  editAssessmentBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageJobOpenings::typeid));
			this->closedateLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->jobOpenings = (gcnew System::Windows::Forms::GroupBox());
			this->joblist = (gcnew System::Windows::Forms::ListBox());
			this->jobdetails = (gcnew System::Windows::Forms::GroupBox());
			this->editAssessmentBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->location = (gcnew System::Windows::Forms::TextBox());
			this->jobtype = (gcnew System::Windows::Forms::TextBox());
			this->salary = (gcnew System::Windows::Forms::TextBox());
			this->closedate = (gcnew System::Windows::Forms::DateTimePicker());
			this->opendate = (gcnew System::Windows::Forms::DateTimePicker());
			this->companyname = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->locationLbl = (gcnew System::Windows::Forms::Label());
			this->jobtypeLbl = (gcnew System::Windows::Forms::Label());
			this->salaryLbl = (gcnew System::Windows::Forms::Label());
			this->descriptionLbl = (gcnew System::Windows::Forms::Label());
			this->opendateLbl = (gcnew System::Windows::Forms::Label());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->createBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->jobOpenings->SuspendLayout();
			this->jobdetails->SuspendLayout();
			this->SuspendLayout();
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
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(387, 8);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 58;
			this->pictureBox4->TabStop = false;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(58, 50);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(27, 19);
			this->idLbl->TabIndex = 15;
			this->idLbl->Text = L"ID:";
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(27, 37);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(340, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select an opening to view/modify its details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->description->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->description->Location = System::Drawing::Point(47, 277);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(548, 88);
			this->description->TabIndex = 14;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(419, 85);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(381, 63);
			this->mainLbl->TabIndex = 60;
			this->mainLbl->Text = L"Manage Job Openings";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// jobOpenings
			// 
			this->jobOpenings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->jobOpenings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->jobOpenings->Controls->Add(this->helpTxt1);
			this->jobOpenings->Controls->Add(this->joblist);
			this->jobOpenings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jobOpenings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobOpenings->Location = System::Drawing::Point(23, 164);
			this->jobOpenings->Name = L"jobOpenings";
			this->jobOpenings->Size = System::Drawing::Size(386, 317);
			this->jobOpenings->TabIndex = 61;
			this->jobOpenings->TabStop = false;
			this->jobOpenings->Text = L"Job Openings";
			// 
			// joblist
			// 
			this->joblist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->joblist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->joblist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->joblist->FormattingEnabled = true;
			this->joblist->ItemHeight = 23;
			this->joblist->Location = System::Drawing::Point(16, 72);
			this->joblist->Name = L"joblist";
			this->joblist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->joblist->Size = System::Drawing::Size(351, 232);
			this->joblist->TabIndex = 12;
			this->joblist->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageJobOpenings::joblist_SelectedIndexChanged);
			// 
			// jobdetails
			// 
			this->jobdetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->jobdetails->Controls->Add(this->editAssessmentBtn);
			this->jobdetails->Controls->Add(this->deleteBtn);
			this->jobdetails->Controls->Add(this->location);
			this->jobdetails->Controls->Add(this->jobtype);
			this->jobdetails->Controls->Add(this->salary);
			this->jobdetails->Controls->Add(this->closedate);
			this->jobdetails->Controls->Add(this->opendate);
			this->jobdetails->Controls->Add(this->companyname);
			this->jobdetails->Controls->Add(this->title);
			this->jobdetails->Controls->Add(this->id);
			this->jobdetails->Controls->Add(this->closedateLbl);
			this->jobdetails->Controls->Add(this->idLbl);
			this->jobdetails->Controls->Add(this->description);
			this->jobdetails->Controls->Add(this->updateBtn);
			this->jobdetails->Controls->Add(this->locationLbl);
			this->jobdetails->Controls->Add(this->jobtypeLbl);
			this->jobdetails->Controls->Add(this->salaryLbl);
			this->jobdetails->Controls->Add(this->descriptionLbl);
			this->jobdetails->Controls->Add(this->opendateLbl);
			this->jobdetails->Controls->Add(this->companynameLbl);
			this->jobdetails->Controls->Add(this->titleLbl);
			this->jobdetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jobdetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobdetails->Location = System::Drawing::Point(432, 164);
			this->jobdetails->Name = L"jobdetails";
			this->jobdetails->Size = System::Drawing::Size(669, 441);
			this->jobdetails->TabIndex = 59;
			this->jobdetails->TabStop = false;
			this->jobdetails->Text = L"Job Details";
			this->jobdetails->Enter += gcnew System::EventHandler(this, &ManageJobOpenings::jobdetails_Enter);
			// 
			// editAssessmentBtn
			// 
			this->editAssessmentBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), 
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->editAssessmentBtn->Enabled = false;
			this->editAssessmentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editAssessmentBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->editAssessmentBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editAssessmentBtn.Image")));
			this->editAssessmentBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->editAssessmentBtn->Location = System::Drawing::Point(222, 381);
			this->editAssessmentBtn->Name = L"editAssessmentBtn";
			this->editAssessmentBtn->Size = System::Drawing::Size(192, 41);
			this->editAssessmentBtn->TabIndex = 84;
			this->editAssessmentBtn->Text = L"Edit Assessment";
			this->editAssessmentBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->editAssessmentBtn->UseVisualStyleBackColor = false;
			this->editAssessmentBtn->Click += gcnew System::EventHandler(this, &ManageJobOpenings::editAssessmentBtn_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->deleteBtn->Enabled = false;
			this->deleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(67)), 
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->deleteBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"deleteBtn.Image")));
			this->deleteBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deleteBtn->Location = System::Drawing::Point(73, 381);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(120, 41);
			this->deleteBtn->TabIndex = 83;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ManageJobOpenings::deleteBtn_Click);
			// 
			// location
			// 
			this->location->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->location->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->location->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->location->Location = System::Drawing::Point(444, 210);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(151, 31);
			this->location->TabIndex = 82;
			// 
			// jobtype
			// 
			this->jobtype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->jobtype->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->jobtype->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobtype->Location = System::Drawing::Point(444, 167);
			this->jobtype->Name = L"jobtype";
			this->jobtype->Size = System::Drawing::Size(151, 31);
			this->jobtype->TabIndex = 81;
			// 
			// salary
			// 
			this->salary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->salary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->salary->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->salary->Location = System::Drawing::Point(444, 126);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(151, 31);
			this->salary->TabIndex = 80;
			// 
			// closedate
			// 
			this->closedate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->closedate->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->closedate->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->closedate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->closedate->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->closedate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->closedate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->closedate->Location = System::Drawing::Point(134, 205);
			this->closedate->Name = L"closedate";
			this->closedate->Size = System::Drawing::Size(126, 31);
			this->closedate->TabIndex = 79;
			this->closedate->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// opendate
			// 
			this->opendate->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->opendate->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->opendate->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->opendate->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->opendate->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->opendate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->opendate->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->opendate->Location = System::Drawing::Point(134, 161);
			this->opendate->Name = L"opendate";
			this->opendate->Size = System::Drawing::Size(126, 31);
			this->opendate->TabIndex = 78;
			this->opendate->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// companyname
			// 
			this->companyname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->companyname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->companyname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->companyname->Location = System::Drawing::Point(169, 119);
			this->companyname->Name = L"companyname";
			this->companyname->ReadOnly = true;
			this->companyname->Size = System::Drawing::Size(162, 31);
			this->companyname->TabIndex = 77;
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->title->Location = System::Drawing::Point(91, 82);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(162, 31);
			this->title->TabIndex = 76;
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->id->Location = System::Drawing::Point(91, 45);
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Size = System::Drawing::Size(102, 31);
			this->id->TabIndex = 75;
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->updateBtn->Enabled = false;
			this->updateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->updateBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updateBtn.Image")));
			this->updateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->updateBtn->Location = System::Drawing::Point(446, 381);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(120, 41);
			this->updateBtn->TabIndex = 7;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &ManageJobOpenings::updateBtn_Click);
			// 
			// locationLbl
			// 
			this->locationLbl->AutoSize = true;
			this->locationLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->locationLbl->Location = System::Drawing::Point(370, 210);
			this->locationLbl->Name = L"locationLbl";
			this->locationLbl->Size = System::Drawing::Size(72, 19);
			this->locationLbl->TabIndex = 6;
			this->locationLbl->Text = L"Location:";
			// 
			// jobtypeLbl
			// 
			this->jobtypeLbl->AutoSize = true;
			this->jobtypeLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtypeLbl->Location = System::Drawing::Point(370, 172);
			this->jobtypeLbl->Name = L"jobtypeLbl";
			this->jobtypeLbl->Size = System::Drawing::Size(72, 19);
			this->jobtypeLbl->TabIndex = 5;
			this->jobtypeLbl->Text = L"Job Type:";
			// 
			// salaryLbl
			// 
			this->salaryLbl->AutoSize = true;
			this->salaryLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->salaryLbl->Location = System::Drawing::Point(378, 131);
			this->salaryLbl->Name = L"salaryLbl";
			this->salaryLbl->Size = System::Drawing::Size(64, 19);
			this->salaryLbl->TabIndex = 4;
			this->salaryLbl->Text = L"Salary: $";
			// 
			// descriptionLbl
			// 
			this->descriptionLbl->AutoSize = true;
			this->descriptionLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->descriptionLbl->Location = System::Drawing::Point(43, 246);
			this->descriptionLbl->Name = L"descriptionLbl";
			this->descriptionLbl->Size = System::Drawing::Size(90, 19);
			this->descriptionLbl->TabIndex = 3;
			this->descriptionLbl->Text = L"Description:";
			// 
			// opendateLbl
			// 
			this->opendateLbl->AutoSize = true;
			this->opendateLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->opendateLbl->Location = System::Drawing::Point(43, 170);
			this->opendateLbl->Name = L"opendateLbl";
			this->opendateLbl->Size = System::Drawing::Size(85, 19);
			this->opendateLbl->TabIndex = 2;
			this->opendateLbl->Text = L"Open Date:";
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
			this->titleLbl->Location = System::Drawing::Point(43, 91);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(42, 19);
			this->titleLbl->TabIndex = 0;
			this->titleLbl->Text = L"Title:";
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(23, 7);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 62;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ManageJobOpenings::backBtn_Click);
			// 
			// createBtn
			// 
			this->createBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->createBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)), 
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->createBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"createBtn.Image")));
			this->createBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->createBtn->Location = System::Drawing::Point(105, 497);
			this->createBtn->Name = L"createBtn";
			this->createBtn->Size = System::Drawing::Size(217, 41);
			this->createBtn->TabIndex = 85;
			this->createBtn->Text = L"Create Job Opening";
			this->createBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->createBtn->UseVisualStyleBackColor = false;
			this->createBtn->Click += gcnew System::EventHandler(this, &ManageJobOpenings::createBtn_Click);
			// 
			// ManageJobOpenings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1113, 615);
			this->Controls->Add(this->createBtn);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->mainLbl);
			this->Controls->Add(this->jobOpenings);
			this->Controls->Add(this->jobdetails);
			this->Controls->Add(this->backBtn);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"ManageJobOpenings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Job Openings";
			this->Load += gcnew System::EventHandler(this, &ManageJobOpenings::ManageJobOpenings_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->jobOpenings->ResumeLayout(false);
			this->jobdetails->ResumeLayout(false);
			this->jobdetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void ManageJobOpenings_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ companynameVal;
				 msclr::interop::marshal_context context;
				 companynameVal = context.marshal_as<String^>(obj->getcompanyname());
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobopenings where companyname='"+companynameVal+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 joblist->Items->Add(myReader->GetString(1));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void UpdateForm() {
			 joblist->Items->Clear();
			 deleteBtn->Enabled = false;
			 updateBtn->Enabled = false;
			 id->Text = "";
			 opendate->Text = "";
			 closedate->Text = "";
			 companyname->Text = "";
			 title->Text = "";
			 description->Text = "";
			 salary->Text = "";
			 jobtype->Text = "";
			 location->Text = "";
			 String^ companynameVal;
			 msclr::interop::marshal_context context;
			 companynameVal = context.marshal_as<String^>(obj->getcompanyname());
			 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobopenings where companyname='"+companynameVal+"';", conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 joblist->Items->Add(myReader->GetString(1));
				 }
				 myReader->Close();
				 conDataBase->Close();
			 }
			 catch(MySqlException^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void joblist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (joblist->SelectedIndex != -1){
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobopenings where title='"+this->joblist->GetItemText(joblist->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 msclr::interop::marshal_context context;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 id->Text = myReader->GetString(0);
						 title->Text = myReader->GetString(1);
						 opendate->Text = myReader->GetString(2);
						 closedate->Text = myReader->GetString(3);
						 companyname->Text = myReader->GetString(4);
						 description->Text = myReader->GetString(5);
						 salary->Text = myReader->GetString(6);
						 jobtype->Text = myReader->GetString(7);
						 location->Text = myReader->GetString(8);
						 updateBtn->Enabled = true;
						 deleteBtn->Enabled = true;
						 editAssessmentBtn->Enabled = true;
						 assessmentObj = new Assessment(std::stoi(context.marshal_as<std::string>(myReader->GetString(9))), std::stoi(context.marshal_as<std::string>(myReader->GetString(0))));
					 }
					 MySqlCommand^cmdDataBase2=gcnew MySqlCommand("select * from hiregauge.assessments where id='"+myReader->GetString(9)+"';", conDataBase);
					 myReader->Close();
					 MySqlDataReader^ myReader2;
					 myReader2 = cmdDataBase2->ExecuteReader();
					 while(myReader2->Read())
					 {
						 assessmentObj->settitle(context.marshal_as<std::string>(myReader2->GetString(2)));
						 assessmentObj->settime_limit(stoi(context.marshal_as<std::string>(myReader2->GetString(3))));
						 assessmentObj->setno_of_questions(stoi(context.marshal_as<std::string>(myReader2->GetString(4))));
					 }
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 updateBtn->Enabled = false;
					 deleteBtn->Enabled = false;
					 editAssessmentBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to save your changes?","Job Opening Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			 {
				 //Don't save changes
			 }else{
				 if (DateTime::Parse(opendate->Text)>DateTime::Parse(closedate->Text)){
					 MessageBox::Show("Error: The close date cannot come before the open date.", "Unable to Save Changes");
				 }else if(id->Text == "" || title->Text == "" || companyname->Text == "" || description->Text == "" || salary->Text == "" || jobtype->Text == "" || location->Text == ""){
					 MessageBox::Show("Error: You cannot leave any fields blank.");
				 }else if(Convert::ToDouble(salary->Text)<0){
					 MessageBox::Show("Error: The salary cannot be negative!");
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "update hiregauge.jobopenings set title='"+this->title->Text+"', opendate='"+this->opendate->Value.ToShortDateString()+"', closedate='"+this->closedate->Value.ToShortDateString()+"', description='"+this->description->Text+"', salary='"+this->salary->Text+"', jobtype='"+this->jobtype->Text+"', location='"+this->location->Text+"' where id='"+this->id->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your information has been updated.");
						 while(myReader->Read())
						 {
						 }
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
		 }
private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to DELETE the selected job opening?","Delete Job Opening Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			 {
				 //Don't delete the opening
			 }else{
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 String^ Query;
				 Query = "delete from hiregauge.jobopenings where id='"+this->id->Text+"';";
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 MessageBox::Show("The selected job opening has been successfully deleted.");
					 while(myReader->Read())
					 {
					 }
					 UpdateForm();
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			   }
			 }
private: System::Void editAssessmentBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 AssessmentEditor^ f2 = gcnew AssessmentEditor(assessmentObj);
			 f2->ShowDialog();
		 }
private: System::Void createBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateJobOpening^ f3 = gcnew CreateJobOpening(obj);
			 f3->ShowDialog();
			 UpdateForm();
		 }
private: System::Void jobdetails_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
