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
	/// Summary for CreateJobOpening
	/// </summary>
	public ref class CreateJobOpening : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		CreateJobOpening(Person * ob)
		{
			InitializeComponent();
			obj = ob;
			msclr::interop::marshal_context context;
			companyname->Text = context.marshal_as<String^>(obj->getcompanyname());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateJobOpening()
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
	private: System::Windows::Forms::TextBox^  location;
	private: System::Windows::Forms::TextBox^  jobtype;
	private: System::Windows::Forms::TextBox^  salary;
	private: System::Windows::Forms::DateTimePicker^  closedate;
	private: System::Windows::Forms::DateTimePicker^  opendate;
	private: System::Windows::Forms::TextBox^  companyname;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  closedateLbl;
	private: System::Windows::Forms::TextBox^  description;
	private: System::Windows::Forms::Label^  locationLbl;
	private: System::Windows::Forms::Label^  jobtypeLbl;
	private: System::Windows::Forms::Label^  salaryLbl;
	private: System::Windows::Forms::Label^  descriptionLbl;
	private: System::Windows::Forms::Label^  opendateLbl;
	private: System::Windows::Forms::Label^  companynameLbl;
	private: System::Windows::Forms::Label^  titleLbl;
	private: System::Windows::Forms::Button^  createBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateJobOpening::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->location = (gcnew System::Windows::Forms::TextBox());
			this->jobtype = (gcnew System::Windows::Forms::TextBox());
			this->salary = (gcnew System::Windows::Forms::TextBox());
			this->closedate = (gcnew System::Windows::Forms::DateTimePicker());
			this->opendate = (gcnew System::Windows::Forms::DateTimePicker());
			this->companyname = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->closedateLbl = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->locationLbl = (gcnew System::Windows::Forms::Label());
			this->jobtypeLbl = (gcnew System::Windows::Forms::Label());
			this->salaryLbl = (gcnew System::Windows::Forms::Label());
			this->descriptionLbl = (gcnew System::Windows::Forms::Label());
			this->opendateLbl = (gcnew System::Windows::Forms::Label());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->createBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(221, 12);
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
			this->mainLbl->Location = System::Drawing::Point(242, 100);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(379, 63);
			this->mainLbl->TabIndex = 64;
			this->mainLbl->Text = L"Create a Job Opening";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(9, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 65;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &CreateJobOpening::backBtn_Click);
			// 
			// location
			// 
			this->location->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->location->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->location->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->location->Location = System::Drawing::Point(525, 300);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(151, 31);
			this->location->TabIndex = 98;
			// 
			// jobtype
			// 
			this->jobtype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->jobtype->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->jobtype->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobtype->Location = System::Drawing::Point(525, 257);
			this->jobtype->Name = L"jobtype";
			this->jobtype->Size = System::Drawing::Size(151, 31);
			this->jobtype->TabIndex = 97;
			// 
			// salary
			// 
			this->salary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->salary->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->salary->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->salary->Location = System::Drawing::Point(525, 216);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(151, 31);
			this->salary->TabIndex = 96;
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
			this->closedate->Location = System::Drawing::Point(221, 299);
			this->closedate->Name = L"closedate";
			this->closedate->Size = System::Drawing::Size(126, 31);
			this->closedate->TabIndex = 95;
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
			this->opendate->Location = System::Drawing::Point(221, 255);
			this->opendate->Name = L"opendate";
			this->opendate->Size = System::Drawing::Size(126, 31);
			this->opendate->TabIndex = 94;
			this->opendate->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// companyname
			// 
			this->companyname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->companyname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->companyname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->companyname->Location = System::Drawing::Point(221, 216);
			this->companyname->Name = L"companyname";
			this->companyname->ReadOnly = true;
			this->companyname->Size = System::Drawing::Size(162, 31);
			this->companyname->TabIndex = 93;
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->title->Location = System::Drawing::Point(221, 179);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(190, 31);
			this->title->TabIndex = 92;
			// 
			// closedateLbl
			// 
			this->closedateLbl->AutoSize = true;
			this->closedateLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->closedateLbl->Location = System::Drawing::Point(130, 308);
			this->closedateLbl->Name = L"closedateLbl";
			this->closedateLbl->Size = System::Drawing::Size(85, 19);
			this->closedateLbl->TabIndex = 91;
			this->closedateLbl->Text = L"Close Date:";
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
			this->description->Location = System::Drawing::Point(134, 369);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(542, 98);
			this->description->TabIndex = 90;
			// 
			// locationLbl
			// 
			this->locationLbl->AutoSize = true;
			this->locationLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->locationLbl->Location = System::Drawing::Point(451, 300);
			this->locationLbl->Name = L"locationLbl";
			this->locationLbl->Size = System::Drawing::Size(72, 19);
			this->locationLbl->TabIndex = 89;
			this->locationLbl->Text = L"Location:";
			// 
			// jobtypeLbl
			// 
			this->jobtypeLbl->AutoSize = true;
			this->jobtypeLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtypeLbl->Location = System::Drawing::Point(451, 262);
			this->jobtypeLbl->Name = L"jobtypeLbl";
			this->jobtypeLbl->Size = System::Drawing::Size(72, 19);
			this->jobtypeLbl->TabIndex = 88;
			this->jobtypeLbl->Text = L"Job Type:";
			// 
			// salaryLbl
			// 
			this->salaryLbl->AutoSize = true;
			this->salaryLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->salaryLbl->Location = System::Drawing::Point(455, 221);
			this->salaryLbl->Name = L"salaryLbl";
			this->salaryLbl->Size = System::Drawing::Size(64, 19);
			this->salaryLbl->TabIndex = 87;
			this->salaryLbl->Text = L"Salary: $";
			// 
			// descriptionLbl
			// 
			this->descriptionLbl->AutoSize = true;
			this->descriptionLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->descriptionLbl->Location = System::Drawing::Point(349, 347);
			this->descriptionLbl->Name = L"descriptionLbl";
			this->descriptionLbl->Size = System::Drawing::Size(90, 19);
			this->descriptionLbl->TabIndex = 86;
			this->descriptionLbl->Text = L"Description:";
			// 
			// opendateLbl
			// 
			this->opendateLbl->AutoSize = true;
			this->opendateLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->opendateLbl->Location = System::Drawing::Point(130, 264);
			this->opendateLbl->Name = L"opendateLbl";
			this->opendateLbl->Size = System::Drawing::Size(85, 19);
			this->opendateLbl->TabIndex = 85;
			this->opendateLbl->Text = L"Open Date:";
			// 
			// companynameLbl
			// 
			this->companynameLbl->AutoSize = true;
			this->companynameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->companynameLbl->Location = System::Drawing::Point(95, 221);
			this->companynameLbl->Name = L"companynameLbl";
			this->companynameLbl->Size = System::Drawing::Size(120, 19);
			this->companynameLbl->TabIndex = 84;
			this->companynameLbl->Text = L"Company Name:";
			// 
			// titleLbl
			// 
			this->titleLbl->AutoSize = true;
			this->titleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->titleLbl->Location = System::Drawing::Point(173, 188);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(42, 19);
			this->titleLbl->TabIndex = 83;
			this->titleLbl->Text = L"Title:";
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
			this->createBtn->Location = System::Drawing::Point(292, 483);
			this->createBtn->Name = L"createBtn";
			this->createBtn->Size = System::Drawing::Size(217, 41);
			this->createBtn->TabIndex = 99;
			this->createBtn->Text = L"Create Job Opening";
			this->createBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->createBtn->UseVisualStyleBackColor = false;
			this->createBtn->Click += gcnew System::EventHandler(this, &CreateJobOpening::createBtn_Click);
			// 
			// CreateJobOpening
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(812, 540);
			this->Controls->Add(this->createBtn);
			this->Controls->Add(this->location);
			this->Controls->Add(this->jobtype);
			this->Controls->Add(this->salary);
			this->Controls->Add(this->closedate);
			this->Controls->Add(this->opendate);
			this->Controls->Add(this->companyname);
			this->Controls->Add(this->title);
			this->Controls->Add(this->closedateLbl);
			this->Controls->Add(this->description);
			this->Controls->Add(this->locationLbl);
			this->Controls->Add(this->jobtypeLbl);
			this->Controls->Add(this->salaryLbl);
			this->Controls->Add(this->descriptionLbl);
			this->Controls->Add(this->opendateLbl);
			this->Controls->Add(this->companynameLbl);
			this->Controls->Add(this->titleLbl);
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
			this->Name = L"CreateJobOpening";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | New Job Opening";
			this->Load += gcnew System::EventHandler(this, &CreateJobOpening::CreateJobOpening_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void ClearForm() {
			 title->Text = "";
			 opendate->Text = "";
			 closedate->Text = "";
			 description->Text = "";
			 salary->Text = "";
			 jobtype->Text = "";
			 location->Text = "";
		 }
private: System::Void createBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (DateTime::Parse(opendate->Text)>DateTime::Parse(closedate->Text)){
					 MessageBox::Show("Error: The close date cannot come before the open date.", "Unable to Save Changes");
			 }else if(title->Text == "" || description->Text == "" || companyname->Text == "" || salary->Text == "" || jobtype->Text == "" || location->Text == ""){
					 MessageBox::Show("Error: You cannot leave any fields blank.");
			 }else if(Convert::ToDouble(salary->Text)<0){
					 MessageBox::Show("Error: Salary cannot be negative!");
			 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 String^ Query2;
					 String^ Query3;
					 String^ assessmentTitle;
					 long opening_id;
					 long assessment_id;
					 Query = "insert into hiregauge.jobopenings (title, opendate, closedate, companyname, description, salary, jobtype, location) values('"+this->title->Text+"', '"+this->opendate->Value.ToShortDateString()+"', '"+this->closedate->Value.ToShortDateString()+"', '"+this->companyname->Text+"', '"+this->description->Text+"', '"+this->salary->Text+"', '"+this->jobtype->Text+"', '"+this->location->Text+"');";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlCommand^cmdDataBase2;
					 MySqlCommand^cmdDataBase3;
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("The job opening has been successfully created.");
						 while(myReader->Read())
						 {
						 }
						 myReader->Close();
						 ClearForm();
						 // Get the newly created job opening's ID from the database
						 opening_id = cmdDataBase->LastInsertedId;
						 assessmentTitle = title->Text + "Skills Assessment"; 
						 Query2 = "insert into hiregauge.assessments (opening_id, title) values('"+Convert::ToString(opening_id)+"', '"+assessmentTitle+"');";
						 cmdDataBase2 = gcnew MySqlCommand(Query2, conDataBase);
						 myReader = cmdDataBase2->ExecuteReader();
						 myReader->Close();
						 // Get the newly created assessment's ID from the database
						 assessment_id = cmdDataBase2->LastInsertedId;
						 // Update Assessment ID in newly create Job Opening's record
						 Query3 = "update hiregauge.jobopenings set assessment_id='"+Convert::ToString(assessment_id)+"' where id='"+Convert::ToString(opening_id)+"';";
						 cmdDataBase3 = gcnew MySqlCommand(Query3, conDataBase);
						 myReader = cmdDataBase3->ExecuteReader();
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						  MessageBox::Show(ex->Message);
					 }
			 }
		 }
private: System::Void CreateJobOpening_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
