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
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for JobExplorer
	/// </summary>
	public ref class JobExplorer : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		JobExplorer(Person * ob)
		{
			obj = ob;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~JobExplorer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ListBox^  joblist;
	private: System::Windows::Forms::GroupBox^  jobdetails;
	private: System::Windows::Forms::Label^  opendateLbl;

	private: System::Windows::Forms::Label^  companynameLbl;

	private: System::Windows::Forms::Label^  titleLbl;
	private: System::Windows::Forms::Label^  locationLbl;


	private: System::Windows::Forms::Label^  jobtypeLbl;

	private: System::Windows::Forms::Label^  salaryLbl;

	private: System::Windows::Forms::Label^  descriptionLbl;
	private: System::Windows::Forms::Button^  applyBtn;
	private: System::Windows::Forms::GroupBox^  jobOpenings;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Label^  mainLbl;

	private: System::Windows::Forms::Label^  opendate;
	private: System::Windows::Forms::Label^  companyname;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  location;
	private: System::Windows::Forms::Label^  jobtype;
	private: System::Windows::Forms::Label^  salary;
	private: System::Windows::Forms::TextBox^  description;
	private: System::Windows::Forms::Label^  id;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::Label^  closedate;
	private: System::Windows::Forms::Label^  closedateLbl;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(JobExplorer::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->joblist = (gcnew System::Windows::Forms::ListBox());
			this->jobdetails = (gcnew System::Windows::Forms::GroupBox());
			this->closedate = (gcnew System::Windows::Forms::Label());
			this->closedateLbl = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->description = (gcnew System::Windows::Forms::TextBox());
			this->location = (gcnew System::Windows::Forms::Label());
			this->jobtype = (gcnew System::Windows::Forms::Label());
			this->salary = (gcnew System::Windows::Forms::Label());
			this->opendate = (gcnew System::Windows::Forms::Label());
			this->companyname = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->applyBtn = (gcnew System::Windows::Forms::Button());
			this->locationLbl = (gcnew System::Windows::Forms::Label());
			this->jobtypeLbl = (gcnew System::Windows::Forms::Label());
			this->salaryLbl = (gcnew System::Windows::Forms::Label());
			this->descriptionLbl = (gcnew System::Windows::Forms::Label());
			this->opendateLbl = (gcnew System::Windows::Forms::Label());
			this->companynameLbl = (gcnew System::Windows::Forms::Label());
			this->titleLbl = (gcnew System::Windows::Forms::Label());
			this->jobOpenings = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->jobdetails->SuspendLayout();
			this->jobOpenings->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(290, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
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
			this->joblist->SelectedIndexChanged += gcnew System::EventHandler(this, &JobExplorer::joblist_SelectedIndexChanged);
			// 
			// jobdetails
			// 
			this->jobdetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->jobdetails->Controls->Add(this->closedate);
			this->jobdetails->Controls->Add(this->closedateLbl);
			this->jobdetails->Controls->Add(this->id);
			this->jobdetails->Controls->Add(this->idLbl);
			this->jobdetails->Controls->Add(this->description);
			this->jobdetails->Controls->Add(this->location);
			this->jobdetails->Controls->Add(this->jobtype);
			this->jobdetails->Controls->Add(this->salary);
			this->jobdetails->Controls->Add(this->opendate);
			this->jobdetails->Controls->Add(this->companyname);
			this->jobdetails->Controls->Add(this->title);
			this->jobdetails->Controls->Add(this->applyBtn);
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
			this->jobdetails->Location = System::Drawing::Point(432, 168);
			this->jobdetails->Name = L"jobdetails";
			this->jobdetails->Size = System::Drawing::Size(547, 441);
			this->jobdetails->TabIndex = 13;
			this->jobdetails->TabStop = false;
			this->jobdetails->Text = L"Job Details";
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
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(80, 50);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(0, 19);
			this->id->TabIndex = 16;
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
			// description
			// 
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->description->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->description->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->description->Location = System::Drawing::Point(47, 292);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->ReadOnly = true;
			this->description->Size = System::Drawing::Size(446, 88);
			this->description->TabIndex = 14;
			// 
			// location
			// 
			this->location->AutoSize = true;
			this->location->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->location->Location = System::Drawing::Point(384, 249);
			this->location->Name = L"location";
			this->location->Size = System::Drawing::Size(0, 19);
			this->location->TabIndex = 13;
			// 
			// jobtype
			// 
			this->jobtype->AutoSize = true;
			this->jobtype->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jobtype->Location = System::Drawing::Point(384, 211);
			this->jobtype->Name = L"jobtype";
			this->jobtype->Size = System::Drawing::Size(0, 19);
			this->jobtype->TabIndex = 12;
			// 
			// salary
			// 
			this->salary->AutoSize = true;
			this->salary->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->salary->Location = System::Drawing::Point(372, 170);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(0, 19);
			this->salary->TabIndex = 11;
			// 
			// opendate
			// 
			this->opendate->AutoSize = true;
			this->opendate->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->opendate->Location = System::Drawing::Point(125, 170);
			this->opendate->Name = L"opendate";
			this->opendate->Size = System::Drawing::Size(0, 19);
			this->opendate->TabIndex = 10;
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
			// applyBtn
			// 
			this->applyBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->applyBtn->Enabled = false;
			this->applyBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->applyBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->applyBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"applyBtn.Image")));
			this->applyBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->applyBtn->Location = System::Drawing::Point(214, 386);
			this->applyBtn->Name = L"applyBtn";
			this->applyBtn->Size = System::Drawing::Size(94, 41);
			this->applyBtn->TabIndex = 7;
			this->applyBtn->Text = L"Apply";
			this->applyBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->applyBtn->UseVisualStyleBackColor = false;
			this->applyBtn->Click += gcnew System::EventHandler(this, &JobExplorer::applyBtn_Click);
			// 
			// locationLbl
			// 
			this->locationLbl->AutoSize = true;
			this->locationLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->locationLbl->Location = System::Drawing::Point(315, 249);
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
			this->jobtypeLbl->Location = System::Drawing::Point(315, 211);
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
			this->salaryLbl->Location = System::Drawing::Point(312, 170);
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
			this->descriptionLbl->Location = System::Drawing::Point(43, 261);
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
			this->titleLbl->Location = System::Drawing::Point(43, 85);
			this->titleLbl->Name = L"titleLbl";
			this->titleLbl->Size = System::Drawing::Size(42, 19);
			this->titleLbl->TabIndex = 0;
			this->titleLbl->Text = L"Title:";
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
			this->jobOpenings->Location = System::Drawing::Point(23, 168);
			this->jobOpenings->Name = L"jobOpenings";
			this->jobOpenings->Size = System::Drawing::Size(386, 317);
			this->jobOpenings->TabIndex = 14;
			this->jobOpenings->TabStop = false;
			this->jobOpenings->Text = L"Job Openings";
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(57, 36);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(268, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select an opening to view details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(340, 89);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(335, 63);
			this->mainLbl->TabIndex = 13;
			this->mainLbl->Text = L"Explore Job Openings";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(23, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 57;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &JobExplorer::backBtn_Click);
			// 
			// JobExplorer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1002, 618);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->mainLbl);
			this->Controls->Add(this->jobOpenings);
			this->Controls->Add(this->jobdetails);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"JobExplorer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Explore Job Openings";
			this->Load += gcnew System::EventHandler(this, &JobExplorer::JobExplorer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->jobdetails->ResumeLayout(false);
			this->jobdetails->PerformLayout();
			this->jobOpenings->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void JobExplorer_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobopenings;", conDataBase);
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
						 }
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 if (DateTime::Parse(closedate->Text)>DateTime::Parse(today)){
						 applyBtn->Enabled = true;
					 }else{
						 applyBtn->Enabled = false;
					 }
				 }
			 }
private: System::Boolean alreadyApplied() {
				 msclr::interop::marshal_context context;
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.jobapplications where opening_id='"+this->id->Text+"' and candidate_id='"+context.marshal_as<String^>(to_string(static_cast<long long>(obj->getid())))+"';",conDataBase);
				 MySqlDataReader^ myReader;
				 int count=0;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 count++;
					 }
					 if(count == 1){
						 // An application to this opening has already been submitted
						 return true;
					 }
					 else{
						 // An application to this opening has NOT been submitted
						 return false;
					 }
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 return false;
		 }
private: System::Void applyBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (alreadyApplied()){
				 MessageBox::Show("You have already applied to this job opening!");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to apply for this job?","Job Application Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 String^ candidate_id;
					 candidate_id = System::Convert::ToString(obj->getid());
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("insert into hiregauge.jobapplications (opening_id, candidate_id, date, status, assessment_taken) values('"+this->id->Text+"', '"+candidate_id+"', '"+today+"', 'Pending', 'no');",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your application for this job has been submitted.");
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
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
