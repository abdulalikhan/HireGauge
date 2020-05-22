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
	/// Summary for ManageCandidates
	/// </summary>
	public ref class ManageCandidates : public System::Windows::Forms::Form
	{
	public:
		ManageCandidates(void)
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
		~ManageCandidates()
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
	private: System::Windows::Forms::GroupBox^  candidates;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  candidatelist;

	private: System::Windows::Forms::TextBox^  gender;
	private: System::Windows::Forms::TextBox^  candidateID;
	private: System::Windows::Forms::Label^  candidateIDLbl;
	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::Label^  genderLbl;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  dob;
	private: System::Windows::Forms::Button^  banBtn;
	private: System::Windows::Forms::Button^  unbanBtn;
	private: System::Windows::Forms::TextBox^  status;
	private: System::Windows::Forms::Label^  statusLbl;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageCandidates::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->candidates = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->candidatelist = (gcnew System::Windows::Forms::ListBox());
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
			this->banBtn = (gcnew System::Windows::Forms::Button());
			this->unbanBtn = (gcnew System::Windows::Forms::Button());
			this->status = (gcnew System::Windows::Forms::TextBox());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->candidates->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(210, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 66;
			this->pictureBox4->TabStop = false;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(233, 89);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(381, 63);
			this->mainLbl->TabIndex = 67;
			this->mainLbl->Text = L"Manage Candidates";
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
			this->backBtn->TabIndex = 68;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ManageCandidates::backBtn_Click);
			// 
			// candidates
			// 
			this->candidates->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->candidates->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->candidates->Controls->Add(this->helpTxt1);
			this->candidates->Controls->Add(this->candidatelist);
			this->candidates->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->candidates->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->candidates->Location = System::Drawing::Point(12, 165);
			this->candidates->Name = L"candidates";
			this->candidates->Size = System::Drawing::Size(336, 389);
			this->candidates->TabIndex = 69;
			this->candidates->TabStop = false;
			this->candidates->Text = L"Candidates";
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
			this->helpTxt1->Text = L"Select a candidate to view their details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// candidatelist
			// 
			this->candidatelist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->candidatelist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->candidatelist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->candidatelist->FormattingEnabled = true;
			this->candidatelist->ItemHeight = 23;
			this->candidatelist->Location = System::Drawing::Point(16, 72);
			this->candidatelist->Name = L"candidatelist";
			this->candidatelist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->candidatelist->Size = System::Drawing::Size(304, 301);
			this->candidatelist->TabIndex = 12;
			this->candidatelist->SelectedIndexChanged += gcnew System::EventHandler(this, &ManageCandidates::candidateslist_SelectedIndexChanged);
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gender->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gender->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gender->Location = System::Drawing::Point(537, 412);
			this->gender->Name = L"gender";
			this->gender->ReadOnly = true;
			this->gender->Size = System::Drawing::Size(123, 31);
			this->gender->TabIndex = 96;
			// 
			// candidateID
			// 
			this->candidateID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->candidateID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->candidateID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->candidateID->Location = System::Drawing::Point(537, 176);
			this->candidateID->Name = L"candidateID";
			this->candidateID->ReadOnly = true;
			this->candidateID->Size = System::Drawing::Size(77, 31);
			this->candidateID->TabIndex = 95;
			// 
			// candidateIDLbl
			// 
			this->candidateIDLbl->AutoSize = true;
			this->candidateIDLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->candidateIDLbl->Location = System::Drawing::Point(414, 178);
			this->candidateIDLbl->Name = L"candidateIDLbl";
			this->candidateIDLbl->Size = System::Drawing::Size(117, 23);
			this->candidateIDLbl->TabIndex = 94;
			this->candidateIDLbl->Text = L"Candidate ID:";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(434, 219);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 85;
			this->fnameLbl->Text = L"First name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(538, 216);
			this->firstname->Name = L"firstname";
			this->firstname->ReadOnly = true;
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 86;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(434, 264);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 87;
			this->lnameLbl->Text = L"Last name:";
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(457, 414);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 93;
			this->genderLbl->Text = L"Gender:";
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(538, 262);
			this->lastname->Name = L"lastname";
			this->lastname->ReadOnly = true;
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 88;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(471, 312);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 89;
			this->emailLbl->Text = L"Email:";
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(412, 364);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 92;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(537, 310);
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 90;
			// 
			// dob
			// 
			this->dob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dob->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->dob->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dob->Location = System::Drawing::Point(537, 362);
			this->dob->Name = L"dob";
			this->dob->ReadOnly = true;
			this->dob->Size = System::Drawing::Size(165, 31);
			this->dob->TabIndex = 91;
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
			this->banBtn->Location = System::Drawing::Point(389, 513);
			this->banBtn->Name = L"banBtn";
			this->banBtn->Size = System::Drawing::Size(173, 41);
			this->banBtn->TabIndex = 97;
			this->banBtn->Text = L"Ban Candidate";
			this->banBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->banBtn->UseVisualStyleBackColor = false;
			this->banBtn->Click += gcnew System::EventHandler(this, &ManageCandidates::banBtn_Click);
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
			this->unbanBtn->Location = System::Drawing::Point(588, 513);
			this->unbanBtn->Name = L"unbanBtn";
			this->unbanBtn->Size = System::Drawing::Size(192, 41);
			this->unbanBtn->TabIndex = 98;
			this->unbanBtn->Text = L"Unban Candidate";
			this->unbanBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->unbanBtn->UseVisualStyleBackColor = false;
			this->unbanBtn->Click += gcnew System::EventHandler(this, &ManageCandidates::unbanBtn_Click);
			// 
			// status
			// 
			this->status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->status->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->status->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->status->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->status->Location = System::Drawing::Point(537, 460);
			this->status->Name = L"status";
			this->status->ReadOnly = true;
			this->status->Size = System::Drawing::Size(123, 31);
			this->status->TabIndex = 100;
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(465, 460);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(66, 23);
			this->statusLbl->TabIndex = 99;
			this->statusLbl->Text = L"Status:";
			// 
			// ManageCandidates
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(821, 580);
			this->Controls->Add(this->status);
			this->Controls->Add(this->statusLbl);
			this->Controls->Add(this->unbanBtn);
			this->Controls->Add(this->banBtn);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->candidateID);
			this->Controls->Add(this->candidateIDLbl);
			this->Controls->Add(this->fnameLbl);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->genderLbl);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->dobLbl);
			this->Controls->Add(this->email);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->candidates);
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
			this->Name = L"ManageCandidates";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Manage Candidates";
			this->Load += gcnew System::EventHandler(this, &ManageCandidates::ManageCandidates_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->candidates->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void candidateslist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (candidatelist->SelectedIndex != -1){
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.candidates where id='"+candidatelist->GetItemText(candidatelist->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 candidateID->Text = myReader->GetString(0);
						 firstname->Text = myReader->GetString(1);
						 lastname->Text = myReader->GetString(2);
						 email->Text = myReader->GetString(4);
						 dob->Text = myReader->GetString(6);
						 gender->Text = myReader->GetString(7);
						 status->Text = myReader->GetString(8);
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
private: System::Void ManageCandidates_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.candidates;", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 candidatelist->Items->Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void banBtn_Click(System::Object^  sender, System::EventArgs^  e) {
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "update hiregauge.candidates set status='banned' where id='"+this->candidateID->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("This candidate has been banned.");
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
					 Query = "update hiregauge.candidates set status='active' where id='"+this->candidateID->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("This candidate has been unbanned.");
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
