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

	/// <summary>
	/// Summary for Employer_Profile
	/// </summary>
	public ref class Employer_Profile : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		Employer_Profile(Person * ob)
		{
			InitializeComponent();
			obj = ob;
			String^ firstnameVal;
			String^ lastnameVal;
			String^ emailVal;
			String^ dobVal;
			String^ genderVal;
			String^ jobtitleVal;
			String^ companynameVal;
			String^ phonenumberVal;
			String^ employeesVal;
			msclr::interop::marshal_context context;
			firstnameVal = context.marshal_as<String^>(obj->getfirstname());
			lastnameVal = context.marshal_as<String^>(obj->getlastname());
			emailVal = context.marshal_as<String^>(obj->getemail());
			dobVal = context.marshal_as<String^>(obj->getdob());
			genderVal = context.marshal_as<String^>(obj->getgender());
			jobtitleVal = context.marshal_as<String^>(obj->getjobtitle());
			companynameVal = context.marshal_as<String^>(obj->getcompanyname());
			phonenumberVal = context.marshal_as<String^>(obj->getphonenum());
			employeesVal = context.marshal_as<String^>(obj->getemployees());
			id->Text = System::Convert::ToString(obj->getid());
			firstname->Text = firstnameVal;
			lastname->Text = lastnameVal;
			email->Text = emailVal;
			dob->Text = dobVal;
			gender->Text = genderVal;
			jobtitle->Text = jobtitleVal;
			companyname->Text = companynameVal;
			phonenumber->Text = phonenumberVal;
			employees->Text = employeesVal;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Employer_Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backBtn;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Button^  updateBtn;
	private: System::Windows::Forms::ComboBox^  gender;
	private: System::Windows::Forms::Label^  genderLbl;
	private: System::Windows::Forms::DateTimePicker^  dob;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  passwordLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::TextBox^  jobtitle;
	private: System::Windows::Forms::Label^  jobtitleLbl;
	private: System::Windows::Forms::GroupBox^  additionalFields;
	private: System::Windows::Forms::ComboBox^  employees;
	private: System::Windows::Forms::Label^  employeesLbl;
	private: System::Windows::Forms::TextBox^  phonenumber;
	private: System::Windows::Forms::Label^  phonenumberLbl;
	private: System::Windows::Forms::TextBox^  companyname;
	private: System::Windows::Forms::Label^  companynameLbl;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Employer_Profile::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->genderLbl = (gcnew System::Windows::Forms::Label());
			this->dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->dobLbl = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->jobtitle = (gcnew System::Windows::Forms::TextBox());
			this->jobtitleLbl = (gcnew System::Windows::Forms::Label());
			this->additionalFields = (gcnew System::Windows::Forms::GroupBox());
			this->employees = (gcnew System::Windows::Forms::ComboBox());
			this->employeesLbl = (gcnew System::Windows::Forms::Label());
			this->phonenumber = (gcnew System::Windows::Forms::TextBox());
			this->phonenumberLbl = (gcnew System::Windows::Forms::Label());
			this->companyname = (gcnew System::Windows::Forms::TextBox());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->additionalFields->SuspendLayout();
			this->SuspendLayout();
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
			this->backBtn->TabIndex = 58;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &Employer_Profile::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(242, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 57;
			this->pictureBox4->TabStop = false;
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(237, 89);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(366, 62);
			this->helpTxt1->TabIndex = 59;
			this->helpTxt1->Text = L"Click \"Update\" to Save Changes";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->id->Location = System::Drawing::Point(261, 174);
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Size = System::Drawing::Size(86, 31);
			this->id->TabIndex = 74;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(138, 176);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(115, 23);
			this->idLbl->TabIndex = 73;
			this->idLbl->Text = L"Employer ID:";
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->updateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->updateBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updateBtn.Image")));
			this->updateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->updateBtn->Location = System::Drawing::Point(382, 556);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(117, 45);
			this->updateBtn->TabIndex = 72;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &Employer_Profile::updateBtn_Click);
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
			this->gender->Location = System::Drawing::Point(258, 448);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(121, 31);
			this->gender->TabIndex = 71;
			this->gender->Tag = L"";
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(178, 451);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 70;
			this->genderLbl->Text = L"Gender:";
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
			this->dob->Location = System::Drawing::Point(258, 395);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(126, 31);
			this->dob->TabIndex = 69;
			this->dob->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(133, 401);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 68;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(258, 352);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 67;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passwordLbl->Location = System::Drawing::Point(158, 360);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(94, 23);
			this->passwordLbl->TabIndex = 66;
			this->passwordLbl->Text = L"Password:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(258, 308);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 65;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(192, 311);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 64;
			this->emailLbl->Text = L"Email:";
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(259, 260);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 63;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(155, 262);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 62;
			this->lnameLbl->Text = L"Last name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(259, 218);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 61;
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(155, 221);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 60;
			this->fnameLbl->Text = L"First name:";
			// 
			// jobtitle
			// 
			this->jobtitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->jobtitle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->jobtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobtitle->Location = System::Drawing::Point(258, 496);
			this->jobtitle->Name = L"jobtitle";
			this->jobtitle->Size = System::Drawing::Size(151, 31);
			this->jobtitle->TabIndex = 76;
			// 
			// jobtitleLbl
			// 
			this->jobtitleLbl->AutoSize = true;
			this->jobtitleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtitleLbl->Location = System::Drawing::Point(166, 498);
			this->jobtitleLbl->Name = L"jobtitleLbl";
			this->jobtitleLbl->Size = System::Drawing::Size(86, 23);
			this->jobtitleLbl->TabIndex = 75;
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
			this->additionalFields->Location = System::Drawing::Point(488, 161);
			this->additionalFields->Name = L"additionalFields";
			this->additionalFields->Size = System::Drawing::Size(346, 222);
			this->additionalFields->TabIndex = 77;
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
			// Employer_Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(878, 626);
			this->Controls->Add(this->additionalFields);
			this->Controls->Add(this->jobtitle);
			this->Controls->Add(this->jobtitleLbl);
			this->Controls->Add(this->id);
			this->Controls->Add(this->idLbl);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->gender);
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
			this->Name = L"Employer_Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Employer Profile";
			this->Load += gcnew System::EventHandler(this, &Employer_Profile::Employer_Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->additionalFields->ResumeLayout(false);
			this->additionalFields->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (firstname->Text == "" || lastname->Text == "" || email->Text == "" || gender->Text == "" || jobtitle->Text == "" || companyname->Text == "" || phonenumber->Text == "" || employees->Text == ""){
				 MessageBox::Show("Error: You cannot leave any fields blank (except the password field if you don't want to change it).");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to save your changes?","Profile Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't save changes
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 msclr::interop::marshal_context context;
					 if (password->Text == "")
					 {
						 std::string firstnameval = context.marshal_as<std::string>(firstname->Text);
						 std::string lastnameval = context.marshal_as<std::string>(lastname->Text);
						 std::string emailval = context.marshal_as<std::string>(email->Text);
						 std::string dobval = context.marshal_as<std::string>(dob->Text);
						 std::string genderval = context.marshal_as<std::string>(gender->Text);
						 std::string jobtitleval = context.marshal_as<std::string>(jobtitle->Text);
						 std::string companynameval = context.marshal_as<std::string>(companyname->Text);
						 std::string phonenumberval = context.marshal_as<std::string>(phonenumber->Text);
						 std::string employeesval = context.marshal_as<std::string>(employees->Text);
						 obj->setfirstname(firstnameval);
						 obj->setlastname(lastnameval);
						 obj->setemail(emailval);
						 obj->setdob(dobval);
						 obj->setgender(genderval);
						 obj->setjobtitle(jobtitleval);
						 obj->setcompanyname(companynameval);
						 obj->setphonenum(phonenumberval);
						 obj->setemployees(employeesval);
						 Query = "update hiregauge.employers set firstname='"+this->firstname->Text+"', lastname='"+this->lastname->Text+"', email='"+this->email->Text+"', dob='"+this->dob->Value.ToShortDateString()+"', gender='"+this->gender->GetItemText(gender->SelectedItem)+"', jobtitle='"+this->jobtitle->Text+"', companyname='"+this->companyname->Text+"', phonenum='"+this->phonenumber->Text+"', employees='"+this->employees->GetItemText(employees->SelectedItem)+"' where id='"+this->id->Text+"';";
					 }else{
						 std::string firstnameval = context.marshal_as<std::string>(firstname->Text);
						 std::string lastnameval = context.marshal_as<std::string>(lastname->Text);
						 std::string emailval = context.marshal_as<std::string>(email->Text);
						 std::string passwordval = context.marshal_as<std::string>(password->Text);
						 std::string dobval = context.marshal_as<std::string>(dob->Text);
						 std::string genderval = context.marshal_as<std::string>(gender->Text);
						 std::string jobtitleval = context.marshal_as<std::string>(jobtitle->Text);
						 std::string companynameval = context.marshal_as<std::string>(companyname->Text);
						 std::string phonenumberval = context.marshal_as<std::string>(phonenumber->Text);
						 std::string employeesval = context.marshal_as<std::string>(employees->Text);
						 obj->setfirstname(firstnameval);
						 obj->setlastname(lastnameval);
						 obj->setemail(emailval);
						 obj->setpassword(passwordval);
						 obj->setdob(dobval);
						 obj->setgender(genderval);
						 obj->setjobtitle(jobtitleval);
						 obj->setcompanyname(companynameval);
						 obj->setphonenum(phonenumberval);
						 obj->setemployees(employeesval);
						 Query = "update hiregauge.employers set firstname='"+this->firstname->Text+"', lastname='"+this->lastname->Text+"', email='"+this->email->Text+"', password='"+this->password->Text+"', dob='"+this->dob->Value.ToShortDateString()+"', gender='"+this->gender->GetItemText(gender->SelectedItem)+"', jobtitle='"+this->jobtitle->Text+"', companyname='"+this->companyname->Text+"', phonenum='"+this->phonenumber->Text+"', employees='"+this->employees->GetItemText(employees->SelectedItem)+"' where id='"+this->id->Text+"';";
					 }
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your information has been updated.");
						 // Display updated information
						 String^ firstnameVal;
						 String^ lastnameVal;
						 String^ emailVal;
						 String^ dobVal;
						 String^ genderVal;
						 String^ jobtitleVal;
						 String^ companynameVal;
						 String^ phonenumberVal;
						 String^ employeesVal;
						 msclr::interop::marshal_context context;
						 firstnameVal = context.marshal_as<String^>(obj->getfirstname());
						 lastnameVal = context.marshal_as<String^>(obj->getlastname());
						 emailVal = context.marshal_as<String^>(obj->getemail());
						 dobVal = context.marshal_as<String^>(obj->getdob());
						 genderVal = context.marshal_as<String^>(obj->getgender());
						 jobtitleVal = context.marshal_as<String^>(obj->getjobtitle());
						 companynameVal = context.marshal_as<String^>(obj->getcompanyname());
						 phonenumberVal = context.marshal_as<String^>(obj->getphonenum());
						 employeesVal = context.marshal_as<String^>(obj->getemployees());
						 firstname->Text = firstnameVal;
						 lastname->Text = lastnameVal;
						 email->Text = emailVal;
						 dob->Text = dobVal;
						 gender->Text = genderVal;
						 jobtitle->Text = jobtitleVal;
						 companyname->Text = companynameVal;
						 phonenumber->Text = phonenumberVal;
						 employees->Text = employeesVal;
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
private: System::Void Employer_Profile_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
