#pragma once
#include "Person.h"
#include "Candidate.h"
#include "Employer.h"
#include "Compose.h"
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
	/// Summary for MyMailbox
	/// </summary>
	public ref class MyMailbox : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		String^ receiver;
		String^ current_msgID;
		// Stores messageIDs
		List<String^> messages;
		MyMailbox(Person * ob): messages(gcnew List<String^>())
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyMailbox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backBtn;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::GroupBox^  maillistcontainer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  maillist;
	private: System::Windows::Forms::GroupBox^  jobdetails;
	private: System::Windows::Forms::Label^  id;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::TextBox^  message;
	private: System::Windows::Forms::Label^  from;
	private: System::Windows::Forms::Label^  subject;
	private: System::Windows::Forms::Label^  dateLbl;
	private: System::Windows::Forms::Label^  messageLbl;
	private: System::Windows::Forms::Label^  fromLbl;
	private: System::Windows::Forms::Label^  subjectLbl;
	private: System::Windows::Forms::Label^  msgdate;
	private: System::Windows::Forms::Button^  composeBtn;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  refreshTimer;
	private: System::Windows::Forms::Label^  helpTxt2Lbl;
	private: System::Windows::Forms::Label^  timeleft;
	private: System::Windows::Forms::Label^  helpTxt1Lbl;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMailbox::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->maillistcontainer = (gcnew System::Windows::Forms::GroupBox());
			this->helpTxt2Lbl = (gcnew System::Windows::Forms::Label());
			this->timeleft = (gcnew System::Windows::Forms::Label());
			this->helpTxt1Lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maillist = (gcnew System::Windows::Forms::ListBox());
			this->jobdetails = (gcnew System::Windows::Forms::GroupBox());
			this->msgdate = (gcnew System::Windows::Forms::Label());
			this->dateLbl = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->message = (gcnew System::Windows::Forms::TextBox());
			this->from = (gcnew System::Windows::Forms::Label());
			this->subject = (gcnew System::Windows::Forms::Label());
			this->messageLbl = (gcnew System::Windows::Forms::Label());
			this->fromLbl = (gcnew System::Windows::Forms::Label());
			this->subjectLbl = (gcnew System::Windows::Forms::Label());
			this->composeBtn = (gcnew System::Windows::Forms::Button());
			this->refreshTimer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->maillistcontainer->SuspendLayout();
			this->jobdetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(5, 2);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 62;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &MyMailbox::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(281, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 61;
			this->pictureBox4->TabStop = false;
			// 
			// maillistcontainer
			// 
			this->maillistcontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->maillistcontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->maillistcontainer->Controls->Add(this->helpTxt2Lbl);
			this->maillistcontainer->Controls->Add(this->timeleft);
			this->maillistcontainer->Controls->Add(this->helpTxt1Lbl);
			this->maillistcontainer->Controls->Add(this->label1);
			this->maillistcontainer->Controls->Add(this->maillist);
			this->maillistcontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->maillistcontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->maillistcontainer->Location = System::Drawing::Point(12, 113);
			this->maillistcontainer->Name = L"maillistcontainer";
			this->maillistcontainer->Size = System::Drawing::Size(461, 322);
			this->maillistcontainer->TabIndex = 65;
			this->maillistcontainer->TabStop = false;
			this->maillistcontainer->Text = L"Mailbox";
			this->maillistcontainer->Enter += gcnew System::EventHandler(this, &MyMailbox::maillistcontainer_Enter);
			// 
			// helpTxt2Lbl
			// 
			this->helpTxt2Lbl->AutoSize = true;
			this->helpTxt2Lbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt2Lbl->Location = System::Drawing::Point(248, 300);
			this->helpTxt2Lbl->Name = L"helpTxt2Lbl";
			this->helpTxt2Lbl->Size = System::Drawing::Size(21, 19);
			this->helpTxt2Lbl->TabIndex = 21;
			this->helpTxt2Lbl->Text = L"...";
			// 
			// timeleft
			// 
			this->timeleft->AutoSize = true;
			this->timeleft->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->timeleft->Location = System::Drawing::Point(236, 298);
			this->timeleft->Name = L"timeleft";
			this->timeleft->Size = System::Drawing::Size(17, 19);
			this->timeleft->TabIndex = 20;
			this->timeleft->Text = L"5";
			// 
			// helpTxt1Lbl
			// 
			this->helpTxt1Lbl->AutoSize = true;
			this->helpTxt1Lbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1Lbl->Location = System::Drawing::Point(83, 300);
			this->helpTxt1Lbl->Name = L"helpTxt1Lbl";
			this->helpTxt1Lbl->Size = System::Drawing::Size(159, 19);
			this->helpTxt1Lbl->TabIndex = 19;
			this->helpTxt1Lbl->Text = L"Refreshing Mailbox in ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(45, 41);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(369, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Select a message subject to view its contents";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// maillist
			// 
			this->maillist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->maillist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maillist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->maillist->FormattingEnabled = true;
			this->maillist->ItemHeight = 23;
			this->maillist->Location = System::Drawing::Point(16, 63);
			this->maillist->Name = L"maillist";
			this->maillist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maillist->Size = System::Drawing::Size(425, 232);
			this->maillist->TabIndex = 12;
			this->maillist->SelectedIndexChanged += gcnew System::EventHandler(this, &MyMailbox::maillist_SelectedIndexChanged);
			// 
			// jobdetails
			// 
			this->jobdetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->jobdetails->Controls->Add(this->msgdate);
			this->jobdetails->Controls->Add(this->dateLbl);
			this->jobdetails->Controls->Add(this->id);
			this->jobdetails->Controls->Add(this->idLbl);
			this->jobdetails->Controls->Add(this->message);
			this->jobdetails->Controls->Add(this->from);
			this->jobdetails->Controls->Add(this->subject);
			this->jobdetails->Controls->Add(this->messageLbl);
			this->jobdetails->Controls->Add(this->fromLbl);
			this->jobdetails->Controls->Add(this->subjectLbl);
			this->jobdetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->jobdetails->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->jobdetails->Location = System::Drawing::Point(495, 113);
			this->jobdetails->Name = L"jobdetails";
			this->jobdetails->Size = System::Drawing::Size(498, 415);
			this->jobdetails->TabIndex = 66;
			this->jobdetails->TabStop = false;
			this->jobdetails->Text = L"Mail Details";
			this->jobdetails->Enter += gcnew System::EventHandler(this, &MyMailbox::jobdetails_Enter);
			// 
			// msgdate
			// 
			this->msgdate->AutoSize = true;
			this->msgdate->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->msgdate->Location = System::Drawing::Point(87, 168);
			this->msgdate->Name = L"msgdate";
			this->msgdate->Size = System::Drawing::Size(0, 19);
			this->msgdate->TabIndex = 18;
			// 
			// dateLbl
			// 
			this->dateLbl->AutoSize = true;
			this->dateLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateLbl->Location = System::Drawing::Point(43, 168);
			this->dateLbl->Name = L"dateLbl";
			this->dateLbl->Size = System::Drawing::Size(45, 19);
			this->dateLbl->TabIndex = 17;
			this->dateLbl->Text = L"Date:";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(69, 50);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(0, 19);
			this->id->TabIndex = 16;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(43, 50);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(27, 19);
			this->idLbl->TabIndex = 15;
			this->idLbl->Text = L"ID:";
			// 
			// message
			// 
			this->message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->message->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->message->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->message->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->message->Location = System::Drawing::Point(47, 236);
			this->message->Multiline = true;
			this->message->Name = L"message";
			this->message->ReadOnly = true;
			this->message->Size = System::Drawing::Size(431, 162);
			this->message->TabIndex = 14;
			// 
			// from
			// 
			this->from->AutoSize = true;
			this->from->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->from->Location = System::Drawing::Point(94, 128);
			this->from->Name = L"from";
			this->from->Size = System::Drawing::Size(0, 19);
			this->from->TabIndex = 9;
			// 
			// subject
			// 
			this->subject->AutoSize = true;
			this->subject->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->subject->Location = System::Drawing::Point(103, 88);
			this->subject->Name = L"subject";
			this->subject->Size = System::Drawing::Size(0, 19);
			this->subject->TabIndex = 8;
			// 
			// messageLbl
			// 
			this->messageLbl->AutoSize = true;
			this->messageLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->messageLbl->Location = System::Drawing::Point(43, 205);
			this->messageLbl->Name = L"messageLbl";
			this->messageLbl->Size = System::Drawing::Size(74, 19);
			this->messageLbl->TabIndex = 3;
			this->messageLbl->Text = L"Message:";
			// 
			// fromLbl
			// 
			this->fromLbl->AutoSize = true;
			this->fromLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fromLbl->Location = System::Drawing::Point(43, 128);
			this->fromLbl->Name = L"fromLbl";
			this->fromLbl->Size = System::Drawing::Size(49, 19);
			this->fromLbl->TabIndex = 1;
			this->fromLbl->Text = L"From:";
			// 
			// subjectLbl
			// 
			this->subjectLbl->AutoSize = true;
			this->subjectLbl->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->subjectLbl->Location = System::Drawing::Point(43, 88);
			this->subjectLbl->Name = L"subjectLbl";
			this->subjectLbl->Size = System::Drawing::Size(63, 19);
			this->subjectLbl->TabIndex = 0;
			this->subjectLbl->Text = L"Subject:";
			// 
			// composeBtn
			// 
			this->composeBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->composeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->composeBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->composeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"composeBtn.Image")));
			this->composeBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->composeBtn->Location = System::Drawing::Point(136, 441);
			this->composeBtn->Name = L"composeBtn";
			this->composeBtn->Size = System::Drawing::Size(213, 41);
			this->composeBtn->TabIndex = 19;
			this->composeBtn->Text = L"Compose a Message";
			this->composeBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->composeBtn->UseVisualStyleBackColor = false;
			this->composeBtn->Click += gcnew System::EventHandler(this, &MyMailbox::composeBtn_Click);
			// 
			// refreshTimer
			// 
			this->refreshTimer->Enabled = true;
			this->refreshTimer->Interval = 1000;
			this->refreshTimer->Tick += gcnew System::EventHandler(this, &MyMailbox::refreshTimer_Tick);
			// 
			// MyMailbox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1008, 564);
			this->Controls->Add(this->composeBtn);
			this->Controls->Add(this->jobdetails);
			this->Controls->Add(this->maillistcontainer);
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
			this->Name = L"MyMailbox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Mailbox";
			this->Load += gcnew System::EventHandler(this, &MyMailbox::MyMailbox_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->maillistcontainer->ResumeLayout(false);
			this->maillistcontainer->PerformLayout();
			this->jobdetails->ResumeLayout(false);
			this->jobdetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void refreshMail() {
				 messages.Clear();
				 maillist->Items->Clear();
				 msclr::interop::marshal_context context;
				 receiver = context.marshal_as<String^>(obj->getemail());
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.messages where receiver='"+receiver+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 maillist->Items->Add(myReader->GetString(3));
						 messages.Add(myReader->GetString(0));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
				 timeleft->Text = "5";
			 }
	private: System::Void MyMailbox_Load(System::Object^  sender, System::EventArgs^  e) {
				 messages.Clear();
				 refreshMail();
				 refreshTimer->Start();
			 }
private: System::Void maillist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (maillist->SelectedIndex != -1){
			     msclr::interop::marshal_context context;
				 try{
					 current_msgID = messages[maillist->SelectedIndex];
				 }
				 catch(ArgumentOutOfRangeException^ ex){
					 MessageBox::Show("Click on a subject to view the corresponding message's details.");
				 }
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.messages where id='"+current_msgID+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 id->Text = myReader->GetString(0);
						 subject->Text = myReader->GetString(3);
						 from->Text = myReader->GetString(2);
						 message->Text = myReader->GetString(4);
						 msgdate->Text = myReader->GetString(5);
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
		 }
private: System::Void jobdetails_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void composeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 Compose^ f2 = gcnew Compose(obj);
			 f2->ShowDialog();
		 }
private: System::Void refreshTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (timeleft->Text == "0"){
				 refreshMail();
			 }else{
				 timeleft->Text = Convert::ToString(Convert::ToInt32(timeleft->Text)-1);
			 }
		 }
private: System::Void maillistcontainer_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
