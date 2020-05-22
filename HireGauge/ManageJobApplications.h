#pragma once
#include "Person.h"
#include "Employer.h"
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
	/// Summary for ManageJobApplications
	/// </summary>
	public ref class ManageJobApplications : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		String^ current_applicationID;
		String^ current_applicantID;
		String^ current_assessmentID;
		String^ current_openingID;
		Dictionary<String^, String^> openinglist;
		Dictionary<String^, String^> assessmentIDlist;
		Dictionary<String^, String^> AgilityPts;
		Dictionary<String^, String^> AccuracyPts;
		Dictionary<String^, String^> CandidateResponses;
		Dictionary<String^, String^> AcceptedCandidateResponses;
		Dictionary<String^, String^> Questions;
		Dictionary<String^, double> DuplicateCandidates;
		SortedDictionary<double, String^> OrderedCandidates;
		List<String^> acceptedCandidates;
		List<String^> Candidates;
		ManageJobApplications(Person * ob): openinglist(gcnew Dictionary<String^, String^>()), assessmentIDlist(gcnew Dictionary<String^, String^>()), AgilityPts(gcnew Dictionary<String^, String^>()), AccuracyPts(gcnew Dictionary<String^, String^>()), DuplicateCandidates(gcnew Dictionary<String^, double>()), CandidateResponses(gcnew Dictionary<String^, String^>()), AcceptedCandidateResponses(gcnew Dictionary<String^, String^>()), Questions(gcnew Dictionary<String^, String^>()), OrderedCandidates(gcnew SortedDictionary<double, String^>()), acceptedCandidates(gcnew List<String^>()), Candidates(gcnew List<String^>())
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManageJobApplications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	protected: 
	private: System::Windows::Forms::Label^  mainLbl;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::GroupBox^  jobApplications;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  applicationlist;
	private: System::Windows::Forms::ComboBox^  openings;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  helpTxt2;
	private: System::Windows::Forms::Label^  assessmentTakenLbl;
	private: System::Windows::Forms::Label^  appStatusLbl;
	private: System::Windows::Forms::Label^  dateSubmittedLbl;
	private: System::Windows::Forms::Label^  applyingForLbl;
	private: System::Windows::Forms::Label^  appIDLbl;
	private: System::Windows::Forms::TextBox^  assessmentTaken;
	private: System::Windows::Forms::TextBox^  status;
	private: System::Windows::Forms::TextBox^  dateSubmitted;
	private: System::Windows::Forms::TextBox^  applyingFor;
	private: System::Windows::Forms::TextBox^  appID;

	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::Label^  genderLbl;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  dob;
	private: System::Windows::Forms::TextBox^  candidateID;
	private: System::Windows::Forms::Label^  candidateIDLbl;
	private: System::Windows::Forms::TextBox^  gender;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  timelimit;
	private: System::Windows::Forms::TextBox^  timetaken;
	private: System::Windows::Forms::TextBox^  totalscore;
	private: System::Windows::Forms::TextBox^  score;
	private: System::Windows::Forms::TextBox^  resultID;
	private: System::Windows::Forms::Label^  timelimitLbl;
	private: System::Windows::Forms::Label^  timetakenLbl;
	private: System::Windows::Forms::Label^  resultidLbl;
	private: System::Windows::Forms::Label^  totalscoreLbl;
	private: System::Windows::Forms::Label^  scoreLbl;
	private: System::Windows::Forms::GroupBox^  performanceDetails;
	private: System::Windows::Forms::Label^  accuracyLbl;
	private: System::Windows::Forms::ProgressBar^  accuracy;
	private: System::Windows::Forms::Label^  agilityLbl;
	private: System::Windows::Forms::ProgressBar^  agility;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  candidatecmpBtn;
	private: System::Windows::Forms::GroupBox^  parameters;

	private: System::Windows::Forms::Label^  helpTxt3Lbl;
	private: System::Windows::Forms::CheckBox^  factortime;
	private: System::Windows::Forms::CheckBox^  factoraccuracy;
	private: System::Windows::Forms::CheckBox^  useHARI;
	private: System::Windows::Forms::Button^  HARIBtn;
	private: System::Windows::Forms::TrackBar^  accuracyBar;
	private: System::Windows::Forms::Label^  helpTxt4Lbl;
	private: System::Windows::Forms::TrackBar^  agilityBar;
	private: System::Windows::Forms::TrackBar^  HARIBar;
	private: System::Windows::Forms::Label^  helpTxt5Lbl;
	private: System::Windows::Forms::Label^  helpTxt6;
	private: System::Windows::Forms::ListBox^  comparisonResult;
	private: System::Windows::Forms::ProgressBar^  performance;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  skills;
	private: System::Windows::Forms::Label^  helpTxt7Lbl;
	private: System::Windows::Forms::GroupBox^  performanceBySkill;
	private: System::Windows::Forms::Button^  generateBtn;
	private: System::Windows::Forms::Label^  skillAA;
	private: System::Windows::Forms::Label^  helpTxt8Lbl;
	private: System::Windows::Forms::Button^  rejectBtn;
	private: System::Windows::Forms::Button^  approveBtn;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageJobApplications::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->jobApplications = (gcnew System::Windows::Forms::GroupBox());
			this->openings = (gcnew System::Windows::Forms::ComboBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->applicationlist = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->rejectBtn = (gcnew System::Windows::Forms::Button());
			this->approveBtn = (gcnew System::Windows::Forms::Button());
			this->assessmentTaken = (gcnew System::Windows::Forms::TextBox());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->dateSubmitted = (gcnew System::Windows::Forms::TextBox());
			this->applyingFor = (gcnew System::Windows::Forms::TextBox());
			this->appID = (gcnew System::Windows::Forms::TextBox());
			this->assessmentTakenLbl = (gcnew System::Windows::Forms::Label());
			this->appStatusLbl = (gcnew System::Windows::Forms::Label());
			this->dateSubmittedLbl = (gcnew System::Windows::Forms::Label());
			this->applyingForLbl = (gcnew System::Windows::Forms::Label());
			this->appIDLbl = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gender = (gcnew System::Windows::Forms::TextBox());
			this->candidateID = (gcnew System::Windows::Forms::TextBox());
			this->candidateIDLbl = (gcnew System::Windows::Forms::Label());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->genderLbl = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->dobLbl = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->dob = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->performanceBySkill = (gcnew System::Windows::Forms::GroupBox());
			this->skillAA = (gcnew System::Windows::Forms::Label());
			this->helpTxt8Lbl = (gcnew System::Windows::Forms::Label());
			this->generateBtn = (gcnew System::Windows::Forms::Button());
			this->performance = (gcnew System::Windows::Forms::ProgressBar());
			this->helpTxt7Lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->skills = (gcnew System::Windows::Forms::ComboBox());
			this->performanceDetails = (gcnew System::Windows::Forms::GroupBox());
			this->accuracyLbl = (gcnew System::Windows::Forms::Label());
			this->accuracy = (gcnew System::Windows::Forms::ProgressBar());
			this->agilityLbl = (gcnew System::Windows::Forms::Label());
			this->agility = (gcnew System::Windows::Forms::ProgressBar());
			this->timelimit = (gcnew System::Windows::Forms::TextBox());
			this->timetaken = (gcnew System::Windows::Forms::TextBox());
			this->totalscore = (gcnew System::Windows::Forms::TextBox());
			this->score = (gcnew System::Windows::Forms::TextBox());
			this->resultID = (gcnew System::Windows::Forms::TextBox());
			this->timelimitLbl = (gcnew System::Windows::Forms::Label());
			this->timetakenLbl = (gcnew System::Windows::Forms::Label());
			this->resultidLbl = (gcnew System::Windows::Forms::Label());
			this->totalscoreLbl = (gcnew System::Windows::Forms::Label());
			this->scoreLbl = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->helpTxt6 = (gcnew System::Windows::Forms::Label());
			this->comparisonResult = (gcnew System::Windows::Forms::ListBox());
			this->parameters = (gcnew System::Windows::Forms::GroupBox());
			this->HARIBar = (gcnew System::Windows::Forms::TrackBar());
			this->candidatecmpBtn = (gcnew System::Windows::Forms::Button());
			this->helpTxt5Lbl = (gcnew System::Windows::Forms::Label());
			this->accuracyBar = (gcnew System::Windows::Forms::TrackBar());
			this->helpTxt4Lbl = (gcnew System::Windows::Forms::Label());
			this->agilityBar = (gcnew System::Windows::Forms::TrackBar());
			this->helpTxt3Lbl = (gcnew System::Windows::Forms::Label());
			this->factortime = (gcnew System::Windows::Forms::CheckBox());
			this->factoraccuracy = (gcnew System::Windows::Forms::CheckBox());
			this->useHARI = (gcnew System::Windows::Forms::CheckBox());
			this->HARIBtn = (gcnew System::Windows::Forms::Button());
			this->helpTxt2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->jobApplications->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->performanceBySkill->SuspendLayout();
			this->performanceDetails->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->parameters->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HARIBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accuracyBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->agilityBar))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(359, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 63;
			this->pictureBox4->TabStop = false;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(391, 89);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(381, 63);
			this->mainLbl->TabIndex = 64;
			this->mainLbl->Text = L"Manage Job Applications";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(8, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 65;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::backBtn_Click);
			// 
			// jobApplications
			// 
			this->jobApplications->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->jobApplications->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->jobApplications->Controls->Add(this->openings);
			this->jobApplications->Controls->Add(this->helpTxt1);
			this->jobApplications->Controls->Add(this->applicationlist);
			this->jobApplications->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jobApplications->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobApplications->Location = System::Drawing::Point(12, 166);
			this->jobApplications->Name = L"jobApplications";
			this->jobApplications->Size = System::Drawing::Size(386, 431);
			this->jobApplications->TabIndex = 66;
			this->jobApplications->TabStop = false;
			this->jobApplications->Text = L"Job Applications";
			this->jobApplications->Enter += gcnew System::EventHandler(this, &ManageJobApplications::jobApplications_Enter);
			// 
			// openings
			// 
			this->openings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->openings->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->openings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->openings->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->openings->FormattingEnabled = true;
			this->openings->Location = System::Drawing::Point(16, 69);
			this->openings->Name = L"openings";
			this->openings->Size = System::Drawing::Size(351, 31);
			this->openings->TabIndex = 36;
			this->openings->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageJobApplications::openings_SelectedIndexChanged);
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(16, 37);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(364, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select an opening to view its applications by ID";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->applicationlist->Location = System::Drawing::Point(16, 118);
			this->applicationlist->Name = L"applicationlist";
			this->applicationlist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->applicationlist->Size = System::Drawing::Size(351, 278);
			this->applicationlist->TabIndex = 12;
			this->applicationlist->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageJobApplications::applicationlist_SelectedIndexChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(422, 191);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(680, 410);
			this->tabControl1->TabIndex = 67;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage1->Controls->Add(this->rejectBtn);
			this->tabPage1->Controls->Add(this->approveBtn);
			this->tabPage1->Controls->Add(this->assessmentTaken);
			this->tabPage1->Controls->Add(this->status);
			this->tabPage1->Controls->Add(this->dateSubmitted);
			this->tabPage1->Controls->Add(this->applyingFor);
			this->tabPage1->Controls->Add(this->appID);
			this->tabPage1->Controls->Add(this->assessmentTakenLbl);
			this->tabPage1->Controls->Add(this->appStatusLbl);
			this->tabPage1->Controls->Add(this->dateSubmittedLbl);
			this->tabPage1->Controls->Add(this->applyingForLbl);
			this->tabPage1->Controls->Add(this->appIDLbl);
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(672, 374);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Application Details";
			// 
			// rejectBtn
			// 
			this->rejectBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->rejectBtn->Enabled = false;
			this->rejectBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rejectBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(67)), 
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->rejectBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rejectBtn.Image")));
			this->rejectBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->rejectBtn->Location = System::Drawing::Point(100, 278);
			this->rejectBtn->Name = L"rejectBtn";
			this->rejectBtn->Size = System::Drawing::Size(225, 41);
			this->rejectBtn->TabIndex = 85;
			this->rejectBtn->Text = L"Reject Application";
			this->rejectBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->rejectBtn->UseVisualStyleBackColor = false;
			this->rejectBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::rejectBtn_Click);
			// 
			// approveBtn
			// 
			this->approveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->approveBtn->Enabled = false;
			this->approveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->approveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->approveBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"approveBtn.Image")));
			this->approveBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->approveBtn->Location = System::Drawing::Point(350, 278);
			this->approveBtn->Name = L"approveBtn";
			this->approveBtn->Size = System::Drawing::Size(225, 41);
			this->approveBtn->TabIndex = 84;
			this->approveBtn->Text = L"Approve Application";
			this->approveBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->approveBtn->UseVisualStyleBackColor = false;
			this->approveBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::approveBtn_Click);
			// 
			// assessmentTaken
			// 
			this->assessmentTaken->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->assessmentTaken->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->assessmentTaken->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->assessmentTaken->Location = System::Drawing::Point(328, 220);
			this->assessmentTaken->Name = L"assessmentTaken";
			this->assessmentTaken->ReadOnly = true;
			this->assessmentTaken->Size = System::Drawing::Size(79, 31);
			this->assessmentTaken->TabIndex = 18;
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->status->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->status->Location = System::Drawing::Point(330, 175);
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			this->status->Size = System::Drawing::Size(179, 31);
			this->status->TabIndex = 17;
			// 
			// dateSubmitted
			// 
			this->dateSubmitted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dateSubmitted->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dateSubmitted->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dateSubmitted->Location = System::Drawing::Point(330, 133);
			this->dateSubmitted->Name = L"dateSubmitted";
			this->dateSubmitted->ReadOnly = true;
			this->dateSubmitted->Size = System::Drawing::Size(127, 31);
			this->dateSubmitted->TabIndex = 16;
			// 
			// applyingFor
			// 
			this->applyingFor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->applyingFor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->applyingFor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->applyingFor->Location = System::Drawing::Point(329, 85);
			this->applyingFor->Name = L"applyingFor";
			this->applyingFor->ReadOnly = true;
			this->applyingFor->Size = System::Drawing::Size(179, 31);
			this->applyingFor->TabIndex = 14;
			// 
			// appID
			// 
			this->appID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->appID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->appID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->appID->Location = System::Drawing::Point(329, 42);
			this->appID->Name = L"appID";
			this->appID->ReadOnly = true;
			this->appID->Size = System::Drawing::Size(77, 31);
			this->appID->TabIndex = 13;
			// 
			// assessmentTakenLbl
			// 
			this->assessmentTakenLbl->AutoSize = true;
			this->assessmentTakenLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->assessmentTakenLbl->Location = System::Drawing::Point(157, 222);
			this->assessmentTakenLbl->Name = L"assessmentTakenLbl";
			this->assessmentTakenLbl->Size = System::Drawing::Size(166, 23);
			this->assessmentTakenLbl->TabIndex = 5;
			this->assessmentTakenLbl->Text = L"Assessment Taken\?";
			// 
			// appStatusLbl
			// 
			this->appStatusLbl->AutoSize = true;
			this->appStatusLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->appStatusLbl->Location = System::Drawing::Point(162, 177);
			this->appStatusLbl->Name = L"appStatusLbl";
			this->appStatusLbl->Size = System::Drawing::Size(164, 23);
			this->appStatusLbl->TabIndex = 4;
			this->appStatusLbl->Text = L"Application Status:";
			// 
			// dateSubmittedLbl
			// 
			this->dateSubmittedLbl->AutoSize = true;
			this->dateSubmittedLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateSubmittedLbl->Location = System::Drawing::Point(182, 135);
			this->dateSubmittedLbl->Name = L"dateSubmittedLbl";
			this->dateSubmittedLbl->Size = System::Drawing::Size(143, 23);
			this->dateSubmittedLbl->TabIndex = 3;
			this->dateSubmittedLbl->Text = L"Date Submitted:";
			// 
			// applyingForLbl
			// 
			this->applyingForLbl->AutoSize = true;
			this->applyingForLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->applyingForLbl->Location = System::Drawing::Point(206, 87);
			this->applyingForLbl->Name = L"applyingForLbl";
			this->applyingForLbl->Size = System::Drawing::Size(119, 23);
			this->applyingForLbl->TabIndex = 1;
			this->applyingForLbl->Text = L"Applying For:";
			// 
			// appIDLbl
			// 
			this->appIDLbl->AutoSize = true;
			this->appIDLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->appIDLbl->Location = System::Drawing::Point(195, 44);
			this->appIDLbl->Name = L"appIDLbl";
			this->appIDLbl->Size = System::Drawing::Size(130, 23);
			this->appIDLbl->TabIndex = 0;
			this->appIDLbl->Text = L"Application ID:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage2->Controls->Add(this->gender);
			this->tabPage2->Controls->Add(this->candidateID);
			this->tabPage2->Controls->Add(this->candidateIDLbl);
			this->tabPage2->Controls->Add(this->fnameLbl);
			this->tabPage2->Controls->Add(this->firstname);
			this->tabPage2->Controls->Add(this->lnameLbl);
			this->tabPage2->Controls->Add(this->genderLbl);
			this->tabPage2->Controls->Add(this->lastname);
			this->tabPage2->Controls->Add(this->emailLbl);
			this->tabPage2->Controls->Add(this->dobLbl);
			this->tabPage2->Controls->Add(this->email);
			this->tabPage2->Controls->Add(this->dob);
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(672, 374);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Applicant Details";
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gender->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gender->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gender->Location = System::Drawing::Point(322, 275);
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Size = System::Drawing::Size(123, 31);
			this->gender->TabIndex = 84;
			// 
			// candidateID
			// 
			this->candidateID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->candidateID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->candidateID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->candidateID->Location = System::Drawing::Point(322, 39);
			this->candidateID->Name = L"candidateID";
			this->candidateID->ReadOnly = true;
			this->candidateID->Size = System::Drawing::Size(77, 31);
			this->candidateID->TabIndex = 83;
			// 
			// candidateIDLbl
			// 
			this->candidateIDLbl->AutoSize = true;
			this->candidateIDLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->candidateIDLbl->Location = System::Drawing::Point(199, 41);
			this->candidateIDLbl->Name = L"candidateIDLbl";
			this->candidateIDLbl->Size = System::Drawing::Size(117, 23);
			this->candidateIDLbl->TabIndex = 82;
			this->candidateIDLbl->Text = L"Candidate ID:";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(219, 82);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 68;
			this->fnameLbl->Text = L"First name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(323, 79);
			this->firstname->Name = L"firstname";
			this->firstname->ReadOnly = true;
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 69;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(219, 127);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 70;
			this->lnameLbl->Text = L"Last name:";
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(242, 277);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 78;
			this->genderLbl->Text = L"Gender:";
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(323, 125);
			this->lastname->Name = L"lastname";
			this->lastname->ReadOnly = true;
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 71;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(256, 175);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 72;
			this->emailLbl->Text = L"Email:";
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(197, 227);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 76;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(322, 173);
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 73;
			// 
			// dob
			// 
			this->dob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dob->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->dob->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dob->Location = System::Drawing::Point(322, 225);
			this->dob->Name = L"dob";
			this->dob->ReadOnly = true;
			this->dob->Size = System::Drawing::Size(165, 31);
			this->dob->TabIndex = 75;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage3->Controls->Add(this->performanceBySkill);
			this->tabPage3->Controls->Add(this->performanceDetails);
			this->tabPage3->Controls->Add(this->timelimit);
			this->tabPage3->Controls->Add(this->timetaken);
			this->tabPage3->Controls->Add(this->totalscore);
			this->tabPage3->Controls->Add(this->score);
			this->tabPage3->Controls->Add(this->resultID);
			this->tabPage3->Controls->Add(this->timelimitLbl);
			this->tabPage3->Controls->Add(this->timetakenLbl);
			this->tabPage3->Controls->Add(this->resultidLbl);
			this->tabPage3->Controls->Add(this->totalscoreLbl);
			this->tabPage3->Controls->Add(this->scoreLbl);
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(672, 374);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Assessment Details";
			// 
			// performanceBySkill
			// 
			this->performanceBySkill->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->performanceBySkill->Controls->Add(this->skillAA);
			this->performanceBySkill->Controls->Add(this->helpTxt8Lbl);
			this->performanceBySkill->Controls->Add(this->generateBtn);
			this->performanceBySkill->Controls->Add(this->performance);
			this->performanceBySkill->Controls->Add(this->helpTxt7Lbl);
			this->performanceBySkill->Controls->Add(this->label1);
			this->performanceBySkill->Controls->Add(this->skills);
			this->performanceBySkill->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->performanceBySkill->Location = System::Drawing::Point(264, 137);
			this->performanceBySkill->Name = L"performanceBySkill";
			this->performanceBySkill->Size = System::Drawing::Size(391, 231);
			this->performanceBySkill->TabIndex = 90;
			this->performanceBySkill->TabStop = false;
			this->performanceBySkill->Text = L"Performance by Skill ";
			// 
			// skillAA
			// 
			this->skillAA->AutoSize = true;
			this->skillAA->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->skillAA->Location = System::Drawing::Point(183, 117);
			this->skillAA->Name = L"skillAA";
			this->skillAA->Size = System::Drawing::Size(0, 23);
			this->skillAA->TabIndex = 97;
			// 
			// helpTxt8Lbl
			// 
			this->helpTxt8Lbl->AutoSize = true;
			this->helpTxt8Lbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt8Lbl->Location = System::Drawing::Point(16, 117);
			this->helpTxt8Lbl->Name = L"helpTxt8Lbl";
			this->helpTxt8Lbl->Size = System::Drawing::Size(166, 23);
			this->helpTxt8Lbl->TabIndex = 96;
			this->helpTxt8Lbl->Text = L"Skill Area Accuracy:";
			// 
			// generateBtn
			// 
			this->generateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->generateBtn->Enabled = false;
			this->generateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->generateBtn->ForeColor = System::Drawing::Color::Red;
			this->generateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->generateBtn->Location = System::Drawing::Point(272, 26);
			this->generateBtn->Name = L"generateBtn";
			this->generateBtn->Size = System::Drawing::Size(100, 41);
			this->generateBtn->TabIndex = 91;
			this->generateBtn->Text = L"Generate";
			this->generateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->generateBtn->UseVisualStyleBackColor = false;
			this->generateBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::generateBtn_Click);
			// 
			// performance
			// 
			this->performance->Location = System::Drawing::Point(130, 86);
			this->performance->Name = L"performance";
			this->performance->Size = System::Drawing::Size(247, 18);
			this->performance->TabIndex = 95;
			// 
			// helpTxt7Lbl
			// 
			this->helpTxt7Lbl->AutoSize = true;
			this->helpTxt7Lbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt7Lbl->Location = System::Drawing::Point(17, 35);
			this->helpTxt7Lbl->Name = L"helpTxt7Lbl";
			this->helpTxt7Lbl->Size = System::Drawing::Size(88, 23);
			this->helpTxt7Lbl->TabIndex = 93;
			this->helpTxt7Lbl->Text = L"Skill Area:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 23);
			this->label1->TabIndex = 94;
			this->label1->Text = L"Performance:";
			// 
			// skills
			// 
			this->skills->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->skills->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->skills->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->skills->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->skills->FormattingEnabled = true;
			this->skills->Location = System::Drawing::Point(111, 32);
			this->skills->Name = L"skills";
			this->skills->Size = System::Drawing::Size(155, 31);
			this->skills->TabIndex = 37;
			this->skills->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageJobApplications::skills_SelectedIndexChanged);
			// 
			// performanceDetails
			// 
			this->performanceDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->performanceDetails->Controls->Add(this->accuracyLbl);
			this->performanceDetails->Controls->Add(this->accuracy);
			this->performanceDetails->Controls->Add(this->agilityLbl);
			this->performanceDetails->Controls->Add(this->agility);
			this->performanceDetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->performanceDetails->Location = System::Drawing::Point(264, 12);
			this->performanceDetails->Name = L"performanceDetails";
			this->performanceDetails->Size = System::Drawing::Size(391, 119);
			this->performanceDetails->TabIndex = 89;
			this->performanceDetails->TabStop = false;
			this->performanceDetails->Text = L"Performance Analysis";
			// 
			// accuracyLbl
			// 
			this->accuracyLbl->AutoSize = true;
			this->accuracyLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->accuracyLbl->Location = System::Drawing::Point(16, 70);
			this->accuracyLbl->Name = L"accuracyLbl";
			this->accuracyLbl->Size = System::Drawing::Size(89, 23);
			this->accuracyLbl->TabIndex = 92;
			this->accuracyLbl->Text = L"Accuracy:";
			// 
			// accuracy
			// 
			this->accuracy->Location = System::Drawing::Point(111, 75);
			this->accuracy->Name = L"accuracy";
			this->accuracy->Size = System::Drawing::Size(247, 18);
			this->accuracy->TabIndex = 91;
			// 
			// agilityLbl
			// 
			this->agilityLbl->AutoSize = true;
			this->agilityLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->agilityLbl->Location = System::Drawing::Point(40, 34);
			this->agilityLbl->Name = L"agilityLbl";
			this->agilityLbl->Size = System::Drawing::Size(65, 23);
			this->agilityLbl->TabIndex = 90;
			this->agilityLbl->Text = L"Agility:";
			// 
			// agility
			// 
			this->agility->Location = System::Drawing::Point(111, 39);
			this->agility->Name = L"agility";
			this->agility->Size = System::Drawing::Size(247, 18);
			this->agility->TabIndex = 0;
			// 
			// timelimit
			// 
			this->timelimit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->timelimit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timelimit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->timelimit->Location = System::Drawing::Point(131, 216);
			this->timelimit->Name = L"timelimit";
			this->timelimit->ReadOnly = true;
			this->timelimit->Size = System::Drawing::Size(77, 31);
			this->timelimit->TabIndex = 88;
			// 
			// timetaken
			// 
			this->timetaken->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->timetaken->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timetaken->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->timetaken->Location = System::Drawing::Point(131, 170);
			this->timetaken->Name = L"timetaken";
			this->timetaken->ReadOnly = true;
			this->timetaken->Size = System::Drawing::Size(77, 31);
			this->timetaken->TabIndex = 87;
			// 
			// totalscore
			// 
			this->totalscore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->totalscore->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->totalscore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->totalscore->Location = System::Drawing::Point(131, 121);
			this->totalscore->Name = L"totalscore";
			this->totalscore->ReadOnly = true;
			this->totalscore->Size = System::Drawing::Size(77, 31);
			this->totalscore->TabIndex = 86;
			// 
			// score
			// 
			this->score->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->score->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->score->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->score->Location = System::Drawing::Point(131, 74);
			this->score->Name = L"score";
			this->score->ReadOnly = true;
			this->score->Size = System::Drawing::Size(77, 31);
			this->score->TabIndex = 85;
			// 
			// resultID
			// 
			this->resultID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->resultID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resultID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resultID->Location = System::Drawing::Point(131, 31);
			this->resultID->Name = L"resultID";
			this->resultID->ReadOnly = true;
			this->resultID->Size = System::Drawing::Size(77, 31);
			this->resultID->TabIndex = 84;
			// 
			// timelimitLbl
			// 
			this->timelimitLbl->AutoSize = true;
			this->timelimitLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timelimitLbl->Location = System::Drawing::Point(23, 218);
			this->timelimitLbl->Name = L"timelimitLbl";
			this->timelimitLbl->Size = System::Drawing::Size(102, 23);
			this->timelimitLbl->TabIndex = 25;
			this->timelimitLbl->Text = L"Time Limit:";
			// 
			// timetakenLbl
			// 
			this->timetakenLbl->AutoSize = true;
			this->timetakenLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timetakenLbl->Location = System::Drawing::Point(17, 172);
			this->timetakenLbl->Name = L"timetakenLbl";
			this->timetakenLbl->Size = System::Drawing::Size(108, 23);
			this->timetakenLbl->TabIndex = 24;
			this->timetakenLbl->Text = L"Time Taken:";
			// 
			// resultidLbl
			// 
			this->resultidLbl->AutoSize = true;
			this->resultidLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resultidLbl->Location = System::Drawing::Point(38, 33);
			this->resultidLbl->Name = L"resultidLbl";
			this->resultidLbl->Size = System::Drawing::Size(87, 23);
			this->resultidLbl->TabIndex = 23;
			this->resultidLbl->Text = L"Result ID:";
			// 
			// totalscoreLbl
			// 
			this->totalscoreLbl->AutoSize = true;
			this->totalscoreLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->totalscoreLbl->Location = System::Drawing::Point(19, 123);
			this->totalscoreLbl->Name = L"totalscoreLbl";
			this->totalscoreLbl->Size = System::Drawing::Size(106, 23);
			this->totalscoreLbl->TabIndex = 22;
			this->totalscoreLbl->Text = L"Total Score:";
			// 
			// scoreLbl
			// 
			this->scoreLbl->AutoSize = true;
			this->scoreLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->scoreLbl->Location = System::Drawing::Point(64, 76);
			this->scoreLbl->Name = L"scoreLbl";
			this->scoreLbl->Size = System::Drawing::Size(61, 23);
			this->scoreLbl->TabIndex = 21;
			this->scoreLbl->Text = L"Score:";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage4->Controls->Add(this->helpTxt6);
			this->tabPage4->Controls->Add(this->comparisonResult);
			this->tabPage4->Controls->Add(this->parameters);
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(672, 374);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Candidate Comparison";
			// 
			// helpTxt6
			// 
			this->helpTxt6->AutoSize = true;
			this->helpTxt6->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt6->Location = System::Drawing::Point(394, 38);
			this->helpTxt6->Name = L"helpTxt6";
			this->helpTxt6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt6->Size = System::Drawing::Size(278, 19);
			this->helpTxt6->TabIndex = 68;
			this->helpTxt6->Text = L"Preferred Candidates (by CandidateID):";
			this->helpTxt6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comparisonResult
			// 
			this->comparisonResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->comparisonResult->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->comparisonResult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->comparisonResult->FormattingEnabled = true;
			this->comparisonResult->ItemHeight = 23;
			this->comparisonResult->Location = System::Drawing::Point(407, 60);
			this->comparisonResult->Name = L"comparisonResult";
			this->comparisonResult->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comparisonResult->Size = System::Drawing::Size(252, 301);
			this->comparisonResult->TabIndex = 37;
			// 
			// parameters
			// 
			this->parameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->parameters->Controls->Add(this->HARIBar);
			this->parameters->Controls->Add(this->candidatecmpBtn);
			this->parameters->Controls->Add(this->helpTxt5Lbl);
			this->parameters->Controls->Add(this->accuracyBar);
			this->parameters->Controls->Add(this->helpTxt4Lbl);
			this->parameters->Controls->Add(this->agilityBar);
			this->parameters->Controls->Add(this->helpTxt3Lbl);
			this->parameters->Controls->Add(this->factortime);
			this->parameters->Controls->Add(this->factoraccuracy);
			this->parameters->Controls->Add(this->useHARI);
			this->parameters->Controls->Add(this->HARIBtn);
			this->parameters->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->parameters->Location = System::Drawing::Point(19, 12);
			this->parameters->Name = L"parameters";
			this->parameters->Size = System::Drawing::Size(369, 351);
			this->parameters->TabIndex = 70;
			this->parameters->TabStop = false;
			this->parameters->Text = L"Comparison Parameters";
			// 
			// HARIBar
			// 
			this->HARIBar->Enabled = false;
			this->HARIBar->Location = System::Drawing::Point(256, 228);
			this->HARIBar->Minimum = 1;
			this->HARIBar->Name = L"HARIBar";
			this->HARIBar->Size = System::Drawing::Size(104, 45);
			this->HARIBar->TabIndex = 79;
			this->HARIBar->Value = 1;
			// 
			// candidatecmpBtn
			// 
			this->candidatecmpBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->candidatecmpBtn->Enabled = false;
			this->candidatecmpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->candidatecmpBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(111)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->candidatecmpBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"candidatecmpBtn.Image")));
			this->candidatecmpBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->candidatecmpBtn->Location = System::Drawing::Point(27, 282);
			this->candidatecmpBtn->Name = L"candidatecmpBtn";
			this->candidatecmpBtn->Size = System::Drawing::Size(311, 41);
			this->candidatecmpBtn->TabIndex = 69;
			this->candidatecmpBtn->Text = L"Perform Candidate Comparison";
			this->candidatecmpBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->candidatecmpBtn->UseVisualStyleBackColor = false;
			this->candidatecmpBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::candidatecmpBtn_Click);
			// 
			// helpTxt5Lbl
			// 
			this->helpTxt5Lbl->AutoSize = true;
			this->helpTxt5Lbl->Location = System::Drawing::Point(6, 228);
			this->helpTxt5Lbl->Name = L"helpTxt5Lbl";
			this->helpTxt5Lbl->Size = System::Drawing::Size(244, 23);
			this->helpTxt5Lbl->TabIndex = 78;
			this->helpTxt5Lbl->Text = L"How important are patterns\?";
			// 
			// accuracyBar
			// 
			this->accuracyBar->Enabled = false;
			this->accuracyBar->Location = System::Drawing::Point(259, 147);
			this->accuracyBar->Minimum = 1;
			this->accuracyBar->Name = L"accuracyBar";
			this->accuracyBar->Size = System::Drawing::Size(104, 45);
			this->accuracyBar->TabIndex = 77;
			this->accuracyBar->Value = 1;
			// 
			// helpTxt4Lbl
			// 
			this->helpTxt4Lbl->AutoSize = true;
			this->helpTxt4Lbl->Location = System::Drawing::Point(6, 148);
			this->helpTxt4Lbl->Name = L"helpTxt4Lbl";
			this->helpTxt4Lbl->Size = System::Drawing::Size(232, 23);
			this->helpTxt4Lbl->TabIndex = 76;
			this->helpTxt4Lbl->Text = L"How important is accuracy\?";
			// 
			// agilityBar
			// 
			this->agilityBar->Enabled = false;
			this->agilityBar->Location = System::Drawing::Point(256, 70);
			this->agilityBar->Minimum = 1;
			this->agilityBar->Name = L"agilityBar";
			this->agilityBar->Size = System::Drawing::Size(104, 45);
			this->agilityBar->TabIndex = 68;
			this->agilityBar->Value = 1;
			// 
			// helpTxt3Lbl
			// 
			this->helpTxt3Lbl->AutoSize = true;
			this->helpTxt3Lbl->Location = System::Drawing::Point(6, 70);
			this->helpTxt3Lbl->Name = L"helpTxt3Lbl";
			this->helpTxt3Lbl->Size = System::Drawing::Size(208, 23);
			this->helpTxt3Lbl->TabIndex = 75;
			this->helpTxt3Lbl->Text = L"How important is agility\?";
			// 
			// factortime
			// 
			this->factortime->AutoSize = true;
			this->factortime->Location = System::Drawing::Point(58, 40);
			this->factortime->Name = L"factortime";
			this->factortime->Size = System::Drawing::Size(150, 27);
			this->factortime->TabIndex = 74;
			this->factortime->Text = L"Factor in agility";
			this->factortime->UseVisualStyleBackColor = true;
			this->factortime->CheckedChanged += gcnew System::EventHandler(this, &ManageJobApplications::factortime_CheckedChanged);
			// 
			// factoraccuracy
			// 
			this->factoraccuracy->AutoSize = true;
			this->factoraccuracy->Location = System::Drawing::Point(58, 118);
			this->factoraccuracy->Name = L"factoraccuracy";
			this->factoraccuracy->Size = System::Drawing::Size(174, 27);
			this->factoraccuracy->TabIndex = 73;
			this->factoraccuracy->Text = L"Factor in accuracy";
			this->factoraccuracy->UseVisualStyleBackColor = true;
			this->factoraccuracy->CheckedChanged += gcnew System::EventHandler(this, &ManageJobApplications::factoraccuracy_CheckedChanged);
			// 
			// useHARI
			// 
			this->useHARI->AutoSize = true;
			this->useHARI->Location = System::Drawing::Point(52, 198);
			this->useHARI->Name = L"useHARI";
			this->useHARI->Size = System::Drawing::Size(219, 27);
			this->useHARI->TabIndex = 72;
			this->useHARI->Text = L"Use the H.A.R.I Method";
			this->useHARI->UseVisualStyleBackColor = true;
			this->useHARI->CheckedChanged += gcnew System::EventHandler(this, &ManageJobApplications::useHARI_CheckedChanged);
			// 
			// HARIBtn
			// 
			this->HARIBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->HARIBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HARIBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->HARIBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"HARIBtn.Image")));
			this->HARIBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->HARIBtn->Location = System::Drawing::Point(10, 184);
			this->HARIBtn->Name = L"HARIBtn";
			this->HARIBtn->Size = System::Drawing::Size(36, 41);
			this->HARIBtn->TabIndex = 71;
			this->HARIBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->HARIBtn->UseVisualStyleBackColor = false;
			this->HARIBtn->Click += gcnew System::EventHandler(this, &ManageJobApplications::HARIBtn_Click);
			// 
			// helpTxt2
			// 
			this->helpTxt2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt2.Image")));
			this->helpTxt2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt2->Location = System::Drawing::Point(441, 139);
			this->helpTxt2->Name = L"helpTxt2";
			this->helpTxt2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt2->Size = System::Drawing::Size(560, 49);
			this->helpTxt2->TabIndex = 37;
			this->helpTxt2->Text = L"The selected job application\'s details can be viewed in the panel below";
			this->helpTxt2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ManageJobApplications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1140, 640);
			this->Controls->Add(this->helpTxt2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->jobApplications);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->mainLbl);
			this->Controls->Add(this->backBtn);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"ManageJobApplications";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Manage Job Applications";
			this->Load += gcnew System::EventHandler(this, &ManageJobApplications::ManageJobApplications_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->jobApplications->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->performanceBySkill->ResumeLayout(false);
			this->performanceBySkill->PerformLayout();
			this->performanceDetails->ResumeLayout(false);
			this->performanceDetails->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->parameters->ResumeLayout(false);
			this->parameters->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->HARIBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->accuracyBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->agilityBar))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ClearForm() {
				 appID->Text = "";
				 dateSubmitted->Text = "";
				 applyingFor->Text = "";
				 assessmentTaken->Text = "";
				 status->Text = "";
				 candidateID->Text = "";
				 firstname->Text = "";
				 lastname->Text = "";
				 email->Text = "";
				 dob->Text = "";
				 gender->Text = "";
				 resultID->Text = "";
				 score->Text = "";
				 totalscore->Text = "";
				 timelimit->Text = "";
				 timetaken->Text = "";
				 agility->Value = 0;
				 accuracy->Value = 0;
				 performance->Value = 0;
				 Candidates.Clear();
				 acceptedCandidates.Clear();
				 AccuracyPts.Clear();
				 AgilityPts.Clear();
				 candidatecmpBtn->Enabled = false;
				 CandidateResponses.Clear();
				 AcceptedCandidateResponses.Clear();
				 Questions.Clear();
				 skills->Items->Clear();
				 generateBtn->Enabled = false;
				 approveBtn->Enabled = false;
				 rejectBtn->Enabled = false;
			 }
	private: System::Void ManageJobApplications_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Initialize progress bars
				 agility->Minimum = 0;
				 agility->Maximum = 100;
				 accuracy->Minimum = 0;
				 accuracy->Maximum = 100;
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
						 openings->Items->Add(myReader->GetString(1));
						 if (openinglist.ContainsKey(myReader->GetString(1))){
						 }else{
							openinglist.Add(myReader->GetString(1), myReader->GetString(0));
						 }
						 if (assessmentIDlist.ContainsKey(myReader->GetString(1))){
						 }else{
							assessmentIDlist.Add(myReader->GetString(1), myReader->GetString(9));
						 }
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
private: System::Void openings_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 ClearForm();
				 current_openingID = openinglist[openings->GetItemText(openings->SelectedItem)];
				 current_assessmentID = assessmentIDlist[openings->GetItemText(openings->SelectedItem)];
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where opening_id='"+current_openingID+"';", conDataBase);
				 MySqlCommand^cmdDataBase2;
				 MySqlDataReader^ myReader;
				 try{
					 // Clear job openings listview
					 applicationlist->Items->Clear();
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 applicationlist->Items->Add(myReader->GetString(0));
						 Candidates.Add(myReader->GetString(2));
						 candidatecmpBtn->Enabled = true;
					 }
					 myReader->Close();
					 // Collect all the questions of this assessment
					 // Key: Skill Tag, Value: Question ID
					 cmdDataBase2=gcnew MySqlCommand("select * from hiregauge.questions where assessment_id='"+current_assessmentID+"';", conDataBase);
					 myReader = cmdDataBase2->ExecuteReader();
					 while(myReader->Read())
					 {
						 if (Questions.ContainsKey(myReader->GetString(8))){
						 }else{
							 Questions.Add(myReader->GetString(8), myReader->GetString(0));
						 }
					 }
					 myReader->Close();
					 for each (KeyValuePair<String^, String^> Question in Questions){
						 skills->Items->Add(Question.Key);
					 }
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 candidatecmpBtn->Enabled = false;
				 }
		 }
private: System::Void jobApplications_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void applicationlist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (applicationlist->SelectedIndex != -1){
				 current_applicationID = applicationlist->GetItemText(applicationlist->SelectedItem);
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where id='"+current_applicationID+"';", conDataBase);
				 MySqlCommand^cmdDataBase2;
				 MySqlCommand^cmdDataBase3;
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 current_applicantID = myReader->GetString(2);
						 appID->Text = myReader->GetString(0);
						 applyingFor->Text = openings->GetItemText(openings->SelectedItem);
						 dateSubmitted->Text = myReader->GetString(3);
						 status->Text = myReader->GetString(4);
						 assessmentTaken->Text = myReader->GetString(5);
					 }
					 myReader->Close();
					 cmdDataBase2=gcnew MySqlCommand("select * from hiregauge.candidates where id='"+current_applicantID+"';", conDataBase);
					 myReader = cmdDataBase2->ExecuteReader();
					 while(myReader->Read())
					 {
						 candidateID->Text = current_applicantID;
						 firstname->Text = myReader->GetString(1);
						 lastname->Text = myReader->GetString(2);
						 email->Text = myReader->GetString(4);
						 dob->Text = myReader->GetString(6);
						 gender->Text = myReader->GetString(7);
					 }
					 myReader->Close();
					 // If the current candidate has taken the assessment, display the assessment's details
					 if (assessmentTaken->Text == "yes"){
						 cmdDataBase3=gcnew MySqlCommand("select * from hiregauge.results where assessment_id='"+current_assessmentID+"' and candidate_id='"+this->candidateID->Text+"';", conDataBase);
						 myReader = cmdDataBase3->ExecuteReader();
						 while(myReader->Read())
						 {
							 resultID->Text = myReader->GetString(0);
							 score->Text = myReader->GetString(5);
							 totalscore->Text = myReader->GetString(4);
							 timelimit->Text = myReader->GetString(6);
							 timetaken->Text = myReader->GetString(7);
						 }
						 // Set progress bars
						 agility->Value = 100-((Convert::ToDouble(timetaken->Text))/(Convert::ToDouble(timelimit->Text))*100);
						 accuracy->Value = (Convert::ToDouble(score->Text))/(Convert::ToDouble(totalscore->Text))*100;
						 myReader->Close();
						 generateBtn->Enabled = true;
						 if (status->Text == "Approved"){
							 approveBtn->Enabled = false;
							 rejectBtn->Enabled = true;
						 }else if (status->Text == "Rejected"){
							 approveBtn->Enabled = true;
							 rejectBtn->Enabled = false;
						 }else if (status->Text == "Pending"){
							 approveBtn->Enabled = true;
							 rejectBtn->Enabled = true;
						 }
					 }
				     conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 ClearForm();
					 MessageBox::Show(ex->Message);
				 }
			 }
		 }
private: System::Void getAcceptedCandidates() {
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where status='Approved';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						acceptedCandidates.Add(myReader->GetString(2));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void getAcceptedCandidateResponses(String^ ID) {
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.answers where candidate_id='"+ID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						if (AcceptedCandidateResponses.ContainsKey(myReader->GetString(2))){
						}else{
							// Key: Question ID, Value: Status
							AcceptedCandidateResponses.Add(myReader->GetString(2), myReader->GetString(6));
						}
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void getCandidateResponses(String^ ID) {
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.answers where candidate_id='"+ID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						if (CandidateResponses.ContainsKey(myReader->GetString(2))){
						}else{
							// Key: Question ID, Value: Status
							CandidateResponses.Add(myReader->GetString(2), myReader->GetString(6));
						}
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void getAgilityPts() {
			 	 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.results where assessment_id='"+current_assessmentID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						if (AgilityPts.ContainsKey(myReader->GetString(3))){
						}else{
							AgilityPts.Add(myReader->GetString(3), Convert::ToString(1-((Convert::ToDouble(myReader->GetString(7)))/(Convert::ToDouble(myReader->GetString(6))))));
						}
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void getAccuracyPts() {
			 	 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.results where assessment_id='"+current_assessmentID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						if (AccuracyPts.ContainsKey(myReader->GetString(3))){
						}else{
							AccuracyPts.Add(myReader->GetString(3), Convert::ToString((Convert::ToDouble(myReader->GetString(5)))/(Convert::ToDouble(myReader->GetString(4)))));
						}
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void candidatecmpBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (factortime->Checked || factoraccuracy->Checked || useHARI->Checked){
				 double HARI_points = 0;
				 double agility_points = 0;
				 double accuracy_points = 0;
				 double total_points = 0;
				 double highest_points = 0;
				 // Declare Scale Factors
				 double HARI_sf = 1;
				 double accuracy_sf = 1;
				 double agility_sf = 1;
				 OrderedCandidates.Clear();
				 DuplicateCandidates.Clear();
				 //String^ bestCandidate;
				 // Populate the AcceptedCandidate Dictionary to store all the Candidate IDs of the Accepted Candidates
				 getAcceptedCandidates();
				 if (factortime->Checked){
					 agility_sf = Convert::ToDouble(agilityBar->Value);
					 getAgilityPts();
				 }
				 if (factoraccuracy->Checked){
					 accuracy_sf = Convert::ToDouble(accuracyBar->Value);
					 getAccuracyPts();
				 }
				 if (useHARI->Checked){
					 HARI_sf = Convert::ToDouble(HARIBar->Value);
					 for each(String^ AcceptedCandidate in acceptedCandidates){
						 // For each AcceptedCandidate, get their responses
						 getAcceptedCandidateResponses(AcceptedCandidate);
					 }
				 }
				 comparisonResult->Items->Clear();
				 for each(String^ Candidate in Candidates){
					 // For each candidate that has applied to this job opening
					 total_points = 0;
					 accuracy_points = 0;
					 agility_points = 0;
					 HARI_points = 0;
					 if (factortime->Checked && AgilityPts.ContainsKey(Candidate)){
						 agility_points = Convert::ToDouble(AgilityPts[Candidate]);
					 }
					 if (factoraccuracy->Checked && AccuracyPts.ContainsKey(Candidate)){
						 accuracy_points = Convert::ToDouble(AccuracyPts[Candidate]);
					 }
					 if (useHARI->Checked && acceptedCandidates.Count>0){
						 CandidateResponses.Clear();
						 getCandidateResponses(Candidate);
						 for each (KeyValuePair<String^, String^> Response in CandidateResponses){
							 if (AcceptedCandidateResponses.ContainsKey(Response.Key) && CandidateResponses.ContainsKey(Response.Key)){
								if (AcceptedCandidateResponses[Response.Key] == CandidateResponses[Response.Key]){
									HARI_points++;
								}
							 }
						 }
						 HARI_points = HARI_points/CandidateResponses.Count;
					 }
					 total_points = (agility_points*agility_sf)+(accuracy_points*accuracy_sf)+(HARI_points*HARI_sf);
					 total_points = Math::Round(total_points, 2);
					 // For the following, Key = Total_Points, Value = Candidate_ID
					 if (OrderedCandidates.ContainsKey(total_points)){
						// A candidate with the same score exists, so add it to the duplicate records dictionary
						DuplicateCandidates.Add(Candidate, total_points);
					 }else{
						OrderedCandidates.Add(total_points, Candidate);
					 }
				 }
				 for each (KeyValuePair<double, String^> Result in OrderedCandidates){
					 comparisonResult->Items->Insert(0, OrderedCandidates[Result.Key]+" [Points: " + Result.Key + "]");
					 for each (KeyValuePair<String^, double> Duplicate in DuplicateCandidates){
						 if (Result.Key == Duplicate.Value){
							 comparisonResult->Items->Insert(0, Duplicate.Key+" [Points: " + Duplicate.Value + "]");
						 }
					 }
				 }
				 MessageBox::Show("A list of preferred candidates has been generated in the panel on the right. The most suitable candidate is at the top of the list, and the list is arranged in descending order.");
		 }else{
			 MessageBox::Show("You must tick at least one Comparison Parameter to perform a Candidate Comparison!");
			 }
		 }
private: System::Void HARIBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("The History Always Repeats Itself (H.A.R.I) Method uses the data from the performance of previously accepted candidates to form patterns. These patterns are then applied to incoming candidates to determine their hirability.");
		 }
private: System::Void factortime_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (factortime->Checked){
				 agilityBar->Enabled = true;
			 }else{
				 agilityBar->Enabled = false;
			 }
		 }
private: System::Void factoraccuracy_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (factoraccuracy->Checked){
				 accuracyBar->Enabled = true;
			 }else{
				 accuracyBar->Enabled = false;
			 }
		 }
private: System::Void useHARI_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (useHARI->Checked){
				 HARIBar->Enabled = true;
			 }else{
				 HARIBar->Enabled = false;
			 }
		 }
private: System::Void skills_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void generateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (skills->SelectedIndex != -1){
				 double total = 0;
				 double total_correct = 0;
				 String^ SelectedSkill = skills->GetItemText(skills->SelectedItem);
				 msclr::interop::marshal_context context;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.answers where candidate_id='"+candidateID->Text+"' and assessment_id='"+current_assessmentID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 for each (KeyValuePair<String^, String^> Question in Questions){
							 if (myReader->GetString(2) == Question.Value && Question.Key == SelectedSkill){
								 total++;
								 if (myReader->GetString(6) == "correct"){
									 total_correct++;
								 }
							 }
						 }
					 }
					 performance->Value = (total_correct/total)*100;
					 skillAA->Text = Convert::ToString((total_correct/total)*100);
					 skillAA->Text = skillAA->Text + "%";
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 candidatecmpBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void approveBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to APPROVE this job application?","Job Application Acceptance Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			 {
				 //Don't save changes
			 }else{
				 msclr::interop::marshal_context context;
				 String^ Query;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 Query = "update hiregauge.jobapplications set status='Approved' where id='"+current_applicationID+"';";
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
				 MySqlCommand^cmdDataBase2;
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 myReader->Close();
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 status->Text = "Approved";
					 MessageBox::Show("This job application has been successfully approved!");
					 String^ salutation = "Dear " + firstname->Text + ",\n";
					 String^ subject = "Your Job Application to " + context.marshal_as<String^>(obj->getcompanyname());
					 String^ message = salutation + " Congratulations! Your job application with ID " + current_applicationID + " for the job opening with ID " + current_openingID + " has been approved!";
					 Query = "insert into hiregauge.messages (receiver, sender, subject, body, date) values('"+this->email->Text+"', '"+context.marshal_as<String^>(obj->getemail())+"', '"+subject+"', '"+message+"', '"+today+"');";
					 cmdDataBase2=gcnew MySqlCommand(Query, conDataBase);
					 myReader = cmdDataBase2->ExecuteReader();
					 myReader->Close();
					 MessageBox::Show("The candidate has been notified of their acceptance. Please follow up with them on their email address.");
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 candidatecmpBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void rejectBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to REJECT this job application?","Job Application Rejection Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			 {
				 //Don't save changes
			 }else{
				 msclr::interop::marshal_context context;
				 String^ Query;
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 Query = "update hiregauge.jobapplications set status='Rejected' where id='"+current_applicationID+"';";
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
				 MySqlCommand^cmdDataBase2;
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 myReader->Close();
					 status->Text = "Rejected";
					 MessageBox::Show("This job application has been rejected.");
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 String^ salutation = "Dear " + firstname->Text + ",\n";
					 String^ subject = "Your Job Application to " + context.marshal_as<String^>(obj->getcompanyname());
					 String^ message = salutation + " We regret to inform you that your job application with ID " + current_applicationID + " for the job opening with ID " + current_openingID + " has been rejected.";
					 Query = "insert into hiregauge.messages (receiver, sender, subject, body, date) values('"+this->email->Text+"', '"+context.marshal_as<String^>(obj->getemail())+"', '"+subject+"', '"+message+"', '"+today+"');";
					 cmdDataBase2=gcnew MySqlCommand(Query, conDataBase);
					 myReader = cmdDataBase2->ExecuteReader();
					 myReader->Close();
					 MessageBox::Show("The candidate has been notified of their rejection.");
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 candidatecmpBtn->Enabled = false;
				 }
			 }
		 }
};
}
