#pragma once

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
	/// Summary for ManagePracticeMaterial
	/// </summary>
	public ref class ManagePracticeMaterial : public System::Windows::Forms::Form
	{
	public:
		List<String^> resourceIDs;
		ManagePracticeMaterial(void): resourceIDs(gcnew List<String^>())
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagePracticeMaterial()
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
	private: System::Windows::Forms::GroupBox^  resourceBox;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::ListBox^  resourcelist;
	private: System::Windows::Forms::GroupBox^  resourcedetails;
	private: System::Windows::Forms::Button^  deleteBtn;
	private: System::Windows::Forms::TextBox^  url;
	private: System::Windows::Forms::TextBox^  skillarea;
	private: System::Windows::Forms::TextBox^  topic;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::Button^  updateBtn;
	private: System::Windows::Forms::Label^  urlLbl;
	private: System::Windows::Forms::Label^  skillareaLbl;
	private: System::Windows::Forms::Label^  topicLbl;
	private: System::Windows::Forms::GroupBox^  newResourceDetails;
	private: System::Windows::Forms::Button^  addBtn;

	private: System::Windows::Forms::TextBox^  newurl;
	private: System::Windows::Forms::TextBox^  newskillarea;
	private: System::Windows::Forms::TextBox^  newtopic;


	private: System::Windows::Forms::Label^  newurlLbl;
	private: System::Windows::Forms::Label^  newskillareaLbl;
	private: System::Windows::Forms::Label^  newtopicLbl;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagePracticeMaterial::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->resourceBox = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->resourcelist = (gcnew System::Windows::Forms::ListBox());
			this->resourcedetails = (gcnew System::Windows::Forms::GroupBox());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->url = (gcnew System::Windows::Forms::TextBox());
			this->skillarea = (gcnew System::Windows::Forms::TextBox());
			this->topic = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->urlLbl = (gcnew System::Windows::Forms::Label());
			this->skillareaLbl = (gcnew System::Windows::Forms::Label());
			this->topicLbl = (gcnew System::Windows::Forms::Label());
			this->newResourceDetails = (gcnew System::Windows::Forms::GroupBox());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->newurl = (gcnew System::Windows::Forms::TextBox());
			this->newskillarea = (gcnew System::Windows::Forms::TextBox());
			this->newtopic = (gcnew System::Windows::Forms::TextBox());
			this->newurlLbl = (gcnew System::Windows::Forms::Label());
			this->newskillareaLbl = (gcnew System::Windows::Forms::Label());
			this->newtopicLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->resourceBox->SuspendLayout();
			this->resourcedetails->SuspendLayout();
			this->newResourceDetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(233, 11);
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
			this->mainLbl->Location = System::Drawing::Point(261, 88);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(381, 63);
			this->mainLbl->TabIndex = 67;
			this->mainLbl->Text = L"Manage Practice Material";
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
			this->backBtn->TabIndex = 68;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ManagePracticeMaterial::backBtn_Click);
			// 
			// resourceBox
			// 
			this->resourceBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resourceBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->resourceBox->Controls->Add(this->helpTxt1);
			this->resourceBox->Controls->Add(this->resourcelist);
			this->resourceBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resourceBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resourceBox->Location = System::Drawing::Point(8, 168);
			this->resourceBox->Name = L"resourceBox";
			this->resourceBox->Size = System::Drawing::Size(386, 464);
			this->resourceBox->TabIndex = 69;
			this->resourceBox->TabStop = false;
			this->resourceBox->Text = L"Resources";
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(41, 37);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(315, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Select a resource to view its details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// resourcelist
			// 
			this->resourcelist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resourcelist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resourcelist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resourcelist->FormattingEnabled = true;
			this->resourcelist->ItemHeight = 23;
			this->resourcelist->Location = System::Drawing::Point(16, 77);
			this->resourcelist->Name = L"resourcelist";
			this->resourcelist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resourcelist->Size = System::Drawing::Size(352, 370);
			this->resourcelist->TabIndex = 12;
			this->resourcelist->SelectedIndexChanged += gcnew System::EventHandler(this, &ManagePracticeMaterial::resourcelist_SelectedIndexChanged);
			// 
			// resourcedetails
			// 
			this->resourcedetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resourcedetails->Controls->Add(this->deleteBtn);
			this->resourcedetails->Controls->Add(this->url);
			this->resourcedetails->Controls->Add(this->skillarea);
			this->resourcedetails->Controls->Add(this->topic);
			this->resourcedetails->Controls->Add(this->id);
			this->resourcedetails->Controls->Add(this->idLbl);
			this->resourcedetails->Controls->Add(this->updateBtn);
			this->resourcedetails->Controls->Add(this->urlLbl);
			this->resourcedetails->Controls->Add(this->skillareaLbl);
			this->resourcedetails->Controls->Add(this->topicLbl);
			this->resourcedetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resourcedetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resourcedetails->Location = System::Drawing::Point(416, 168);
			this->resourcedetails->Name = L"resourcedetails";
			this->resourcedetails->Size = System::Drawing::Size(548, 236);
			this->resourcedetails->TabIndex = 70;
			this->resourcedetails->TabStop = false;
			this->resourcedetails->Text = L"Resource Details";
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
			this->deleteBtn->Location = System::Drawing::Point(122, 179);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(120, 41);
			this->deleteBtn->TabIndex = 83;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ManagePracticeMaterial::deleteBtn_Click);
			// 
			// url
			// 
			this->url->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->url->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->url->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->url->Location = System::Drawing::Point(122, 128);
			this->url->Name = L"url";
			this->url->Size = System::Drawing::Size(408, 31);
			this->url->TabIndex = 82;
			// 
			// skillarea
			// 
			this->skillarea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->skillarea->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->skillarea->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->skillarea->Location = System::Drawing::Point(122, 81);
			this->skillarea->Name = L"skillarea";
			this->skillarea->Size = System::Drawing::Size(133, 31);
			this->skillarea->TabIndex = 77;
			// 
			// topic
			// 
			this->topic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->topic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->topic->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->topic->Location = System::Drawing::Point(297, 32);
			this->topic->Name = L"topic";
			this->topic->Size = System::Drawing::Size(233, 31);
			this->topic->TabIndex = 76;
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->id->Location = System::Drawing::Point(124, 32);
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Size = System::Drawing::Size(102, 31);
			this->id->TabIndex = 75;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(24, 37);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(94, 19);
			this->idLbl->TabIndex = 15;
			this->idLbl->Text = L"Resource ID:";
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
			this->updateBtn->Location = System::Drawing::Point(284, 179);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(120, 41);
			this->updateBtn->TabIndex = 7;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &ManagePracticeMaterial::updateBtn_Click);
			// 
			// urlLbl
			// 
			this->urlLbl->AutoSize = true;
			this->urlLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->urlLbl->Location = System::Drawing::Point(69, 133);
			this->urlLbl->Name = L"urlLbl";
			this->urlLbl->Size = System::Drawing::Size(42, 19);
			this->urlLbl->TabIndex = 6;
			this->urlLbl->Text = L"URL:";
			// 
			// skillareaLbl
			// 
			this->skillareaLbl->AutoSize = true;
			this->skillareaLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->skillareaLbl->Location = System::Drawing::Point(43, 86);
			this->skillareaLbl->Name = L"skillareaLbl";
			this->skillareaLbl->Size = System::Drawing::Size(75, 19);
			this->skillareaLbl->TabIndex = 1;
			this->skillareaLbl->Text = L"Skill Area:";
			// 
			// topicLbl
			// 
			this->topicLbl->AutoSize = true;
			this->topicLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->topicLbl->Location = System::Drawing::Point(243, 37);
			this->topicLbl->Name = L"topicLbl";
			this->topicLbl->Size = System::Drawing::Size(48, 19);
			this->topicLbl->TabIndex = 0;
			this->topicLbl->Text = L"Topic:";
			// 
			// newResourceDetails
			// 
			this->newResourceDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->newResourceDetails->Controls->Add(this->addBtn);
			this->newResourceDetails->Controls->Add(this->newurl);
			this->newResourceDetails->Controls->Add(this->newskillarea);
			this->newResourceDetails->Controls->Add(this->newtopic);
			this->newResourceDetails->Controls->Add(this->newurlLbl);
			this->newResourceDetails->Controls->Add(this->newskillareaLbl);
			this->newResourceDetails->Controls->Add(this->newtopicLbl);
			this->newResourceDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newResourceDetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->newResourceDetails->Location = System::Drawing::Point(416, 444);
			this->newResourceDetails->Name = L"newResourceDetails";
			this->newResourceDetails->Size = System::Drawing::Size(597, 188);
			this->newResourceDetails->TabIndex = 84;
			this->newResourceDetails->TabStop = false;
			this->newResourceDetails->Text = L"Add a New Resource";
			// 
			// addBtn
			// 
			this->addBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->addBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(150)), 
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->addBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"addBtn.Image")));
			this->addBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addBtn->Location = System::Drawing::Point(235, 134);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(173, 41);
			this->addBtn->TabIndex = 83;
			this->addBtn->Text = L"Add Resource";
			this->addBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addBtn->UseVisualStyleBackColor = false;
			this->addBtn->Click += gcnew System::EventHandler(this, &ManagePracticeMaterial::addBtn_Click);
			// 
			// newurl
			// 
			this->newurl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->newurl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newurl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->newurl->Location = System::Drawing::Point(117, 87);
			this->newurl->Name = L"newurl";
			this->newurl->Size = System::Drawing::Size(469, 31);
			this->newurl->TabIndex = 82;
			// 
			// newskillarea
			// 
			this->newskillarea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->newskillarea->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newskillarea->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->newskillarea->Location = System::Drawing::Point(454, 37);
			this->newskillarea->Name = L"newskillarea";
			this->newskillarea->Size = System::Drawing::Size(133, 31);
			this->newskillarea->TabIndex = 77;
			// 
			// newtopic
			// 
			this->newtopic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->newtopic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->newtopic->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->newtopic->Location = System::Drawing::Point(117, 37);
			this->newtopic->Name = L"newtopic";
			this->newtopic->Size = System::Drawing::Size(233, 31);
			this->newtopic->TabIndex = 76;
			// 
			// newurlLbl
			// 
			this->newurlLbl->AutoSize = true;
			this->newurlLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newurlLbl->Location = System::Drawing::Point(63, 92);
			this->newurlLbl->Name = L"newurlLbl";
			this->newurlLbl->Size = System::Drawing::Size(42, 19);
			this->newurlLbl->TabIndex = 6;
			this->newurlLbl->Text = L"URL:";
			// 
			// newskillareaLbl
			// 
			this->newskillareaLbl->AutoSize = true;
			this->newskillareaLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newskillareaLbl->Location = System::Drawing::Point(375, 42);
			this->newskillareaLbl->Name = L"newskillareaLbl";
			this->newskillareaLbl->Size = System::Drawing::Size(75, 19);
			this->newskillareaLbl->TabIndex = 1;
			this->newskillareaLbl->Text = L"Skill Area:";
			// 
			// newtopicLbl
			// 
			this->newtopicLbl->AutoSize = true;
			this->newtopicLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newtopicLbl->Location = System::Drawing::Point(63, 42);
			this->newtopicLbl->Name = L"newtopicLbl";
			this->newtopicLbl->Size = System::Drawing::Size(48, 19);
			this->newtopicLbl->TabIndex = 0;
			this->newtopicLbl->Text = L"Topic:";
			// 
			// ManagePracticeMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1027, 645);
			this->Controls->Add(this->newResourceDetails);
			this->Controls->Add(this->resourcedetails);
			this->Controls->Add(this->resourceBox);
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
			this->Name = L"ManagePracticeMaterial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Manage Practice Material";
			this->Load += gcnew System::EventHandler(this, &ManagePracticeMaterial::ManagePracticeMaterial_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->resourceBox->ResumeLayout(false);
			this->resourcedetails->ResumeLayout(false);
			this->resourcedetails->PerformLayout();
			this->newResourceDetails->ResumeLayout(false);
			this->newResourceDetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void UpdateForm() {
			 resourceIDs.Clear();
			 resourcelist->Items->Clear();
			 deleteBtn->Enabled = false;
			 updateBtn->Enabled = false;
			 id->Text = "";
			 topic->Text = "";
			 skillarea->Text = "";
			 url->Text = "";
			 newtopic->Text = "";
			 newskillarea->Text = "";
			 newurl->Text = "";
			 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.practicematerial;", conDataBase);
			 MySqlDataReader^ myReader;
			 try{
				 conDataBase->Open();
				 myReader = cmdDataBase->ExecuteReader();
				 while(myReader->Read())
				 {
					 resourcelist->Items->Add(myReader->GetString(2));
					 resourceIDs.Add(myReader->GetString(0));
				 }
				 myReader->Close();
				 conDataBase->Close();
			 }
			 catch(MySqlException^ ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void ManagePracticeMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.practicematerial;", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 resourcelist->Items->Add(myReader->GetString(2));
						 resourceIDs.Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
		 }
private: System::Void resourcelist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (resourcelist->SelectedIndex != -1){
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.practicematerial where id='"+resourceIDs[resourcelist->SelectedIndex]+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 id->Text = myReader->GetString(0);
						 topic->Text = myReader->GetString(2);
						 skillarea->Text = myReader->GetString(1);
						 url->Text = myReader->GetString(3);
					 }
					 myReader->Close();
					 conDataBase->Close();
					 updateBtn->Enabled = true;
					 deleteBtn->Enabled = true;
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
					 updateBtn->Enabled = false;
					 deleteBtn->Enabled = false;
				 }
			 }
		 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (topic->Text == "" || skillarea->Text == "" || url->Text == ""){
				 MessageBox::Show("Error: You cannot leave any fields empty!");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to save your changes?","Resource Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't save changes
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "update hiregauge.practicematerial set skillarea='"+this->skillarea->Text+"', topic='"+this->topic->Text+"', url='"+this->url->Text+"' where id='"+this->id->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 while(myReader->Read())
						 {
						 }
						 MessageBox::Show("The resource has been updated.");
						 myReader->Close();
						 conDataBase->Close();
						 UpdateForm();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
		 }
private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to DELETE the selected resource?","Delete Resource Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
			 {
				 //Don't delete the resource
			 }else{
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 String^ Query;
				 Query = "delete from hiregauge.practicematerial where id='"+this->id->Text+"';";
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 MessageBox::Show("The selected resource has been successfully deleted.");
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
private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (newtopic->Text == "" || newskillarea->Text == "" || newurl->Text == ""){
				 MessageBox::Show("Error: You cannot leave any fields empty!");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to add this resource?","New Resource Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't add the resource
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 Query = "insert into hiregauge.practicematerial (skillarea, topic, url) values ('"+this->newskillarea->Text+"', '"+this->newtopic->Text+"', '"+this->newurl->Text+"');";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 while(myReader->Read())
						 {
						 }
						 MessageBox::Show("The resource has been added.");
						 myReader->Close();
						 conDataBase->Close();
						 UpdateForm();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
		 }
};
}
