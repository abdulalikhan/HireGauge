#pragma once
#include "CandidateLogin.h"
#include "EmployerLogin.h"
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helpTxt1;
	protected: 

	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::TextBox^  password;

	private: System::Windows::Forms::Label^  passwordLbl;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::DateTimePicker^  dob;
	private: System::Windows::Forms::Label^  genderLbl;



	private: System::Windows::Forms::Label^  membertypeLbl;
	private: System::Windows::Forms::ComboBox^  membertype;

	private: System::Windows::Forms::Button^  signupBtn;
	private: System::Windows::Forms::ComboBox^  gender;
	private: System::Windows::Forms::GroupBox^  additionalFields;
	private: System::Windows::Forms::ComboBox^  employees;
	private: System::Windows::Forms::Label^  employeesLbl;
	private: System::Windows::Forms::TextBox^  phonenumber;
	private: System::Windows::Forms::Label^  phonenumberLbl;
	private: System::Windows::Forms::TextBox^  companyname;
	private: System::Windows::Forms::Label^  companynameLbl;
	private: System::Windows::Forms::Label^  jobtitleLbl;
	private: System::Windows::Forms::TextBox^  jobtitle;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  backBtn;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->dobLbl = (gcnew System::Windows::Forms::Label());
			this->dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->genderLbl = (gcnew System::Windows::Forms::Label());
			this->membertypeLbl = (gcnew System::Windows::Forms::Label());
			this->membertype = (gcnew System::Windows::Forms::ComboBox());
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->additionalFields = (gcnew System::Windows::Forms::GroupBox());
			this->employees = (gcnew System::Windows::Forms::ComboBox());
			this->employeesLbl = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::TextBox());
			this->phonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->companyname = (gcnew System::Windows::Forms::TextBox());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->jobtitleLbl = (gcnew System::Windows::Forms::Label());
			this->jobtitle = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->additionalFields->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Location = System::Drawing::Point(362, 97);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(75, 26);
			this->helpTxt1->TabIndex = 3;
			this->helpTxt1->Text = L"Signup";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(89, 157);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 19;
			this->fnameLbl->Text = L"First name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(193, 154);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 21;
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(193, 196);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 23;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(89, 198);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 22;
			this->lnameLbl->Text = L"Last name:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(192, 286);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 25;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(126, 289);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 24;
			this->emailLbl->Text = L"Email:";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(192, 330);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 27;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passwordLbl->Location = System::Drawing::Point(92, 338);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(94, 23);
			this->passwordLbl->TabIndex = 26;
			this->passwordLbl->Text = L"Password:";
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(67, 379);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 28;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// dob
			// 
			this->dob->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(137)), 
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dob->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dob->Location = System::Drawing::Point(192, 373);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(126, 31);
			this->dob->TabIndex = 29;
			this->dob->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(112, 429);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 30;
			this->genderLbl->Text = L"Gender:";
			// 
			// membertypeLbl
			// 
			this->membertypeLbl->AutoSize = true;
			this->membertypeLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->membertypeLbl->Location = System::Drawing::Point(24, 241);
			this->membertypeLbl->Name = L"membertypeLbl";
			this->membertypeLbl->Size = System::Drawing::Size(162, 23);
			this->membertypeLbl->TabIndex = 34;
			this->membertypeLbl->Text = L"Membership Type:";
			// 
			// membertype
			// 
			this->membertype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->membertype->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->membertype->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->membertype->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->membertype->FormattingEnabled = true;
			this->membertype->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Candidate", L"Employer"});
			this->membertype->Location = System::Drawing::Point(192, 238);
			this->membertype->Name = L"membertype";
			this->membertype->Size = System::Drawing::Size(129, 31);
			this->membertype->TabIndex = 35;
			this->membertype->SelectedIndexChanged += gcnew System::EventHandler(this, &Signup::membertype_SelectedIndexChanged);
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->signupBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->signupBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"signupBtn.Image")));
			this->signupBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->signupBtn->Location = System::Drawing::Point(367, 537);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(138, 50);
			this->signupBtn->TabIndex = 36;
			this->signupBtn->Text = L"Sign Up";
			this->signupBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->signupBtn->UseVisualStyleBackColor = false;
			this->signupBtn->Click += gcnew System::EventHandler(this, &Signup::signupBtn_Click);
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Other"});
			this->gender->Location = System::Drawing::Point(192, 426);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(121, 31);
			this->gender->TabIndex = 37;
			this->gender->Tag = L"";
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
			this->additionalFields->Enabled = false;
			this->additionalFields->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->additionalFields->Location = System::Drawing::Point(414, 139);
			this->additionalFields->Name = L"additionalFields";
			this->additionalFields->Size = System::Drawing::Size(346, 222);
			this->additionalFields->TabIndex = 38;
			this->additionalFields->TabStop = false;
			this->additionalFields->Text = L"Company Details";
			// 
			// employees
			// 
			this->employees->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->employees->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->employees->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employees->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employees->FormattingEnabled = true;
			this->employees->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"1-50", L"50-300", L"300+"});
			this->employees->Location = System::Drawing::Point(165, 144);
			this->employees->Name = L"employees";
			this->employees->Size = System::Drawing::Size(129, 31);
			this->employees->TabIndex = 40;
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
			// jobtitleLbl
			// 
			this->jobtitleLbl->AutoSize = true;
			this->jobtitleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtitleLbl->Location = System::Drawing::Point(100, 477);
			this->jobtitleLbl->Name = L"jobtitleLbl";
			this->jobtitleLbl->Size = System::Drawing::Size(86, 23);
			this->jobtitleLbl->TabIndex = 25;
			this->jobtitleLbl->Text = L"Job Title:";
			// 
			// jobtitle
			// 
			this->jobtitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->jobtitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->jobtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobtitle->Location = System::Drawing::Point(192, 475);
			this->jobtitle->Name = L"jobtitle";
			this->jobtitle->Size = System::Drawing::Size(151, 31);
			this->jobtitle->TabIndex = 39;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(227, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(366, 71);
			this->pictureBox1->TabIndex = 40;
			this->pictureBox1->TabStop = false;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(12, 8);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 61;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &Signup::backBtn_Click);
			// 
			// Signup
			// 
			this->AcceptButton = this->signupBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(830, 600);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->jobtitle);
			this->Controls->Add(this->jobtitleLbl);
			this->Controls->Add(this->additionalFields);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->signupBtn);
			this->Controls->Add(this->membertype);
			this->Controls->Add(this->membertypeLbl);
			this->Controls->Add(this->genderLbl);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->dobLbl);
			this->Controls->Add(this->password);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->email);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->fnameLbl);
			this->Controls->Add(this->helpTxt1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->additionalFields->ResumeLayout(false);
			this->additionalFields->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {
			membertype->Text = "Candidate";
			gender->Text = "Male";
			 }
private: System::Void male_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: bool userExists() {
			 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlDataReader^ myReader;
			 int flag=0;
			 if (membertype->GetItemText(membertype->SelectedItem) == "Candidate"){
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.candidates where email='"+this->email->Text+"';",conDataBase);
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 flag++;
						 break;
					 }
					 myReader->Close();
					 conDataBase->Close();
					 if(flag == 0){
						 return false;
					 }else{
						 return true;
					 }
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }else if (membertype->GetItemText(membertype->SelectedItem) == "Employer"){
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.employers where email='"+this->email->Text+"';",conDataBase);
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 flag++;
						 break;
					 }
					 myReader->Close();
					 conDataBase->Close();
					 if(flag == 0){
						 return false;
					 }else{
						 return true;
					 }
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
			 return false;
		 }
private: System::Void signupBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (membertype->GetItemText(membertype->SelectedItem) == "Candidate"){
				 if (firstname->Text == "" || lastname->Text == "" || membertype->Text == "" || email->Text == "" || password->Text == "" || gender->Text == ""){
					 MessageBox::Show("Error: You cannot leave any fields blank!");
				 }else if (userExists()){
					 MessageBox::Show("Error: This email address is already in use!");
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("insert into hiregauge.candidates (firstname, lastname, membertype, email, password, dob, gender, status) values('"+this->firstname->Text+"', '"+this->lastname->Text+"', '"+this->membertype->GetItemText(membertype->SelectedItem)+"', '"+this->email->Text+"', '"+this->password->Text+"', '"+this->dob->Value.ToShortDateString()+"', '"+this->gender->GetItemText(gender->SelectedItem)+"', 'active');",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your account has been created successfully! You can now login.");
						 while(myReader->Read())
						 {
						 }
						 myReader->Close();
						 conDataBase->Close();
						 this->Hide();
						 CandidateLogin^ f2 = gcnew CandidateLogin();
						 f2->ShowDialog();
						 this->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
			 else if(membertype->GetItemText(membertype->SelectedItem) == "Employer")
			 {
				 if (firstname->Text == "" || lastname->Text == "" || membertype->Text == "" || email->Text == "" || password->Text == "" || gender->Text == "" || jobtitle->Text == "" || companyname->Text == "" || employees->Text == "" || phonenumber->Text == ""){
					 MessageBox::Show("Error: You cannot leave any fields blank!");
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("insert into hiregauge.employers (firstname, lastname, membertype, email, password, dob, gender, jobtitle, companyname, phonenum, employees, status) values('"+this->firstname->Text+"', '"+this->lastname->Text+"', '"+this->membertype->GetItemText(membertype->SelectedItem)+"', '"+this->email->Text+"', '"+this->password->Text+"', '"+this->dob->Value.ToShortDateString()+"', '"+this->gender->GetItemText(gender->SelectedItem)+"', '"+this->jobtitle->Text+"', '"+this->companyname->Text+"', '"+this->phonenumber->Text+"', '"+this->employees->GetItemText(employees->SelectedItem)+"', 'active');",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your account has been created successfully! You can now login.");
						 while(myReader->Read())
						 {
						 }
						 myReader->Close();
						 conDataBase->Close();
						 this->Hide();
						 EmployerLogin^ f3 = gcnew EmployerLogin();
						 f3->ShowDialog();
						 this->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
			 else
			 {
				 MessageBox::Show("Error: Please select a valid Membership Type!");
			 }
		 }
private: System::Void membertype_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (membertype->GetItemText(membertype->SelectedItem) == "Employer"){
				 additionalFields->Enabled = true;
				 jobtitleLbl->Enabled = true;
				 jobtitle->Enabled = true;
			 }else{
				 additionalFields->Enabled = false;
				 jobtitle->Enabled = false;
				 jobtitle->Enabled = false;
			 }
		 }
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
