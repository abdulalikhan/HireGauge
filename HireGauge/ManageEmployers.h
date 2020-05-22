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
	/// <summary>
	/// Summary for ManageEmployers
	/// </summary>
	public ref class ManageEmployers : public System::Windows::Forms::Form
	{
	public:
		ManageEmployers(void)
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
		~ManageEmployers()
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
	private: System::Windows::Forms::GroupBox^  employers;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  employerlist;
	private: System::Windows::Forms::TextBox^  status;
	private: System::Windows::Forms::Label^  statusLbl;
	private: System::Windows::Forms::TextBox^  gender;
	private: System::Windows::Forms::TextBox^  employerID;
	private: System::Windows::Forms::Label^  employerIDLbl;
	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::Label^  genderLbl;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  dob;
	private: System::Windows::Forms::TextBox^  jobtitle;
	private: System::Windows::Forms::Label^  jobtitleLbl;
	private: System::Windows::Forms::GroupBox^  additionalFields;
	private: System::Windows::Forms::TextBox^  employees;
	private: System::Windows::Forms::Label^  employeesLbl;
	private: System::Windows::Forms::TextBox^  phonenumber;
	private: System::Windows::Forms::Label^  phonenumberLbl;
	private: System::Windows::Forms::TextBox^  companyname;
	private: System::Windows::Forms::Label^  companynameLbl;
	private: System::Windows::Forms::Button^  unbanBtn;
	private: System::Windows::Forms::Button^  banBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageEmployers::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->employers = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->employerlist = (gcnew System::Windows::Forms::ListBox());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::TextBox());
			this->employerID = (gcnew System::Windows::Forms::TextBox());
			this->employerIDLbl = (gcnew System::Windows::Forms::Label());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->genderLbl = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->dobLbl = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->dob = (gcnew System::Windows::Forms::TextBox());
			this->jobtitle = (gcnew System::Windows::Forms::TextBox());
			this->jobtitleLbl = (gcnew System::Windows::Forms::Label());
			this->additionalFields = (gcnew System::Windows::Forms::GroupBox());
			this->employees = (gcnew System::Windows::Forms::TextBox());
			this->employeesLbl = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::TextBox());
			this->phonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->companyname = (gcnew System::Windows::Forms::TextBox());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->unbanBtn = (gcnew System::Windows::Forms::Button());
			this->banBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->employers->SuspendLayout();
			this->additionalFields->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(211, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 69;
			this->pictureBox4->TabStop = false;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(234, 89);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(381, 63);
			this->mainLbl->TabIndex = 70;
			this->mainLbl->Text = L"Manage Employers";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(10, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 71;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ManageEmployers::backBtn_Click);
			// 
			// employers
			// 
			this->employers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->employers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->employers->Controls->Add(this->helpTxt1);
			this->employers->Controls->Add(this->employerlist);
			this->employers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employers->Location = System::Drawing::Point(12, 172);
			this->employers->Name = L"employers";
			this->employers->Size = System::Drawing::Size(336, 389);
			this->employers->TabIndex = 72;
			this->employers->TabStop = false;
			this->employers->Text = L"Employers";
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(12, 39);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(318, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select an employer to view their details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// employerlist
			// 
			this->employerlist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->employerlist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->employerlist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employerlist->FormattingEnabled = true;
			this->employerlist->ItemHeight = 23;
			this->employerlist->Location = System::Drawing::Point(16, 72);
			this->employerlist->Name = L"employerlist";
			this->employerlist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->employerlist->Size = System::Drawing::Size(304, 301);
			this->employerlist->TabIndex = 12;
			this->employerlist->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageEmployers::employerlist_SelectedIndexChanged);
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->status->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->status->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->status->Location = System::Drawing::Point(497, 465);
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			this->status->Size = System::Drawing::Size(123, 31);
			this->status->TabIndex = 114;
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(425, 465);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(66, 23);
			this->statusLbl->TabIndex = 113;
			this->statusLbl->Text = L"Status:";
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gender->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gender->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gender->Location = System::Drawing::Point(497, 417);
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Size = System::Drawing::Size(123, 31);
			this->gender->TabIndex = 112;
			// 
			// employerID
			// 
			this->employerID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->employerID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->employerID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employerID->Location = System::Drawing::Point(497, 181);
			this->employerID->Name = L"employerID";
			this->employerID->ReadOnly = true;
			this->employerID->Size = System::Drawing::Size(77, 31);
			this->employerID->TabIndex = 111;
			// 
			// employerIDLbl
			// 
			this->employerIDLbl->AutoSize = true;
			this->employerIDLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->employerIDLbl->Location = System::Drawing::Point(374, 183);
			this->employerIDLbl->Name = L"employerIDLbl";
			this->employerIDLbl->Size = System::Drawing::Size(115, 23);
			this->employerIDLbl->TabIndex = 110;
			this->employerIDLbl->Text = L"Employer ID:";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(394, 224);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 101;
			this->fnameLbl->Text = L"First name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(498, 221);
			this->firstname->Name = L"firstname";
			this->firstname->ReadOnly = true;
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 102;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(394, 269);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 103;
			this->lnameLbl->Text = L"Last name:";
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(417, 419);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 109;
			this->genderLbl->Text = L"Gender:";
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(498, 267);
			this->lastname->Name = L"lastname";
			this->lastname->ReadOnly = true;
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 104;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(431, 317);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 105;
			this->emailLbl->Text = L"Email:";
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(372, 369);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 108;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(497, 315);
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 106;
			// 
			// dob
			// 
			this->dob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dob->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->dob->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dob->Location = System::Drawing::Point(497, 367);
			this->dob->Name = L"dob";
			this->dob->ReadOnly = true;
			this->dob->Size = System::Drawing::Size(165, 31);
			this->dob->TabIndex = 107;
			// 
			// jobtitle
			// 
			this->jobtitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->jobtitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->jobtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobtitle->Location = System::Drawing::Point(498, 510);
			this->jobtitle->Name = L"jobtitle";
			this->jobtitle->ReadOnly = true;
			this->jobtitle->Size = System::Drawing::Size(151, 31);
			this->jobtitle->TabIndex = 116;
			// 
			// jobtitleLbl
			// 
			this->jobtitleLbl->AutoSize = true;
			this->jobtitleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtitleLbl->Location = System::Drawing::Point(403, 512);
			this->jobtitleLbl->Name = L"jobtitleLbl";
			this->jobtitleLbl->Size = System::Drawing::Size(86, 23);
			this->jobtitleLbl->TabIndex = 115;
			this->jobtitleLbl->Text = L"Job Title:";
			// 
			// additionalFields
			// 
			this->additionalFields->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->additionalFields->Controls->Add(this->employees);
			this->additionalFields->Controls->Add(this->employeesLbl);
			this->additionalFields->Controls->Add(this->phonenumber);
			this->additionalFields->Controls->Add(this->phonenumberLbl);
			this->additionalFields->Controls->Add(this->companyname);
			this->additionalFields->Controls->Add(this->companynameLbl);
			this->additionalFields->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->additionalFields->Location = System::Drawing::Point(701, 183);
			this->additionalFields->Name = L"additionalFields";
			this->additionalFields->Size = System::Drawing::Size(346, 222);
			this->additionalFields->TabIndex = 117;
			this->additionalFields->TabStop = false;
			this->additionalFields->Text = L"Company Details";
			// 
			// employees
			// 
			this->employees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->employees->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->employees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employees->Location = System::Drawing::Point(165, 145);
			this->employees->Name = L"employees";
			this->employees->ReadOnly = true;
			this->employees->Size = System::Drawing::Size(151, 31);
			this->employees->TabIndex = 45;
			// 
			// employeesLbl
			// 
			this->employeesLbl->AutoSize = true;
			this->employeesLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->employeesLbl->Location = System::Drawing::Point(48, 147);
			this->employeesLbl->Name = L"employeesLbl";
			this->employeesLbl->Size = System::Drawing::Size(105, 23);
			this->employeesLbl->TabIndex = 44;
			this->employeesLbl->Text = L"Employees:";
			// 
			// phonenumber
			// 
			this->phonenumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->phonenumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->phonenumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->phonenumber->Location = System::Drawing::Point(165, 94);
			this->phonenumber->Name = L"phonenumber";
			this->phonenumber->ReadOnly = true;
			this->phonenumber->Size = System::Drawing::Size(151, 31);
			this->phonenumber->TabIndex = 43;
			// 
			// phonenumberLbl
			// 
			this->phonenumberLbl->AutoSize = true;
			this->phonenumberLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->phonenumberLbl->Location = System::Drawing::Point(15, 99);
			this->phonenumberLbl->Name = L"phonenumberLbl";
			this->phonenumberLbl->Size = System::Drawing::Size(138, 23);
			this->phonenumberLbl->TabIndex = 42;
			this->phonenumberLbl->Text = L"Phone Number:";
			// 
			// companyname
			// 
			this->companyname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->companyname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->companyname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->companyname->Location = System::Drawing::Point(165, 42);
			this->companyname->Name = L"companyname";
			this->companyname->ReadOnly = true;
			this->companyname->Size = System::Drawing::Size(151, 31);
			this->companyname->TabIndex = 41;
			// 
			// companynameLbl
			// 
			this->companynameLbl->AutoSize = true;
			this->companynameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->companynameLbl->Location = System::Drawing::Point(15, 44);
			this->companynameLbl->Name = L"companynameLbl";
			this->companynameLbl->Size = System::Drawing::Size(144, 23);
			this->companynameLbl->TabIndex = 40;
			this->companynameLbl->Text = L"Company Name:";
			// 
			// unbanBtn
			// 
			this->unbanBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->unbanBtn->Enabled = false;
			this->unbanBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->unbanBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(198)), 
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->unbanBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"unbanBtn.Image")));
			this->unbanBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->unbanBtn->Location = System::Drawing::Point(753, 566);
			this->unbanBtn->Name = L"unbanBtn";
			this->unbanBtn->Size = System::Drawing::Size(192, 41);
			this->unbanBtn->TabIndex = 119;
			this->unbanBtn->Text = L"Unban Employer";
			this->unbanBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->unbanBtn->UseVisualStyleBackColor = false;
			this->unbanBtn->Click += gcnew System::EventHandler(this, &ManageEmployers::unbanBtn_Click);
			// 
			// banBtn
			// 
			this->banBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->banBtn->Enabled = false;
			this->banBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->banBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->banBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"banBtn.Image")));
			this->banBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->banBtn->Location = System::Drawing::Point(535, 566);
			this->banBtn->Name = L"banBtn";
			this->banBtn->Size = System::Drawing::Size(173, 41);
			this->banBtn->TabIndex = 118;
			this->banBtn->Text = L"Ban Employer";
			this->banBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->banBtn->UseVisualStyleBackColor = false;
			this->banBtn->Click += gcnew System::EventHandler(this, &ManageEmployers::banBtn_Click);
			// 
			// ManageEmployers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1081, 619);
			this->Controls->Add(this->unbanBtn);
			this->Controls->Add(this->banBtn);
			this->Controls->Add(this->additionalFields);
			this->Controls->Add(this->jobtitle);
			this->Controls->Add(this->jobtitleLbl);
			this->Controls->Add(this->status);
			this->Controls->Add(this->statusLbl);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->employerID);
			this->Controls->Add(this->employerIDLbl);
			this->Controls->Add(this->fnameLbl);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->genderLbl);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->dobLbl);
			this->Controls->Add(this->email);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->employers);
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
			this->Name = L"ManageEmployers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Manage Employers";
			this->Load += gcnew System::EventHandler(this, &ManageEmployers::ManageEmployers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->employers->ResumeLayout(false);
			this->additionalFields->ResumeLayout(false);
			this->additionalFields->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void ManageEmployers_Load(System::Object^  sender, System::EventArgs^  e) {
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.employers;", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 employerlist->Items->Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void employerlist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (employerlist->SelectedIndex != -1){
			 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.employers where id='"+employerlist->GetItemText(employerlist->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 employerID->Text = myReader->GetString(0);
						 firstname->Text = myReader->GetString(1);
						 lastname->Text = myReader->GetString(2);
						 email->Text = myReader->GetString(4);
						 dob->Text = myReader->GetString(6);
						 gender->Text = myReader->GetString(7);
						 jobtitle->Text = myReader->GetString(8);
						 companyname->Text = myReader->GetString(9);
						 phonenumber->Text = myReader->GetString(10);
						 employees->Text = myReader->GetString(11);
						 status->Text = myReader->GetString(12);
					 }
					 if (status->Text == "banned"){
						 unbanBtn->Enabled = true;
						 banBtn->Enabled = false;
					 }else if (status->Text == "active"){
						 unbanBtn->Enabled = false;
						 banBtn->Enabled = true;
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 unbanBtn->Enabled = false;
					 banBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void banBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 		 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "update hiregauge.employers set status='banned' where id='"+this->employerID->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("This employer has been banned.");
						 // Display updated information
						 status->Text = "banned";
						 unbanBtn->Enabled = true;
						 banBtn->Enabled = false;
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
		 }
private: System::Void unbanBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 		 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "update hiregauge.employers set status='active' where id='"+this->employerID->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("This employer has been unbanned.");
						 // Display updated information
						 status->Text = "active";
						 banBtn->Enabled = true;
						 unbanBtn->Enabled = false;
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
		 }
};
}
