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
	/// Summary for Compose
	/// </summary>
	public ref class Compose : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		String^ sender;
		Compose(Person * ob)
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Compose()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backBtn;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  toLbl;
	private: System::Windows::Forms::Label^  subjectLbl;

	private: System::Windows::Forms::TextBox^  to;
	private: System::Windows::Forms::TextBox^  subject;
	private: System::Windows::Forms::TextBox^  message;
	private: System::Windows::Forms::GroupBox^  messagecontainer;
	private: System::Windows::Forms::Button^  sendBtn;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Compose::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->toLbl = (gcnew System::Windows::Forms::Label());
			this->subjectLbl = (gcnew System::Windows::Forms::Label());
			this->to = (gcnew System::Windows::Forms::TextBox());
			this->subject = (gcnew System::Windows::Forms::TextBox());
			this->message = (gcnew System::Windows::Forms::TextBox());
			this->messagecontainer = (gcnew System::Windows::Forms::GroupBox());
			this->sendBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->messagecontainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(5, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 64;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &Compose::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(125, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 63;
			this->pictureBox4->TabStop = false;
			// 
			// toLbl
			// 
			this->toLbl->AutoSize = true;
			this->toLbl->Location = System::Drawing::Point(168, 127);
			this->toLbl->Name = L"toLbl";
			this->toLbl->Size = System::Drawing::Size(35, 23);
			this->toLbl->TabIndex = 65;
			this->toLbl->Text = L"To:";
			// 
			// subjectLbl
			// 
			this->subjectLbl->AutoSize = true;
			this->subjectLbl->Location = System::Drawing::Point(127, 178);
			this->subjectLbl->Name = L"subjectLbl";
			this->subjectLbl->Size = System::Drawing::Size(76, 23);
			this->subjectLbl->TabIndex = 66;
			this->subjectLbl->Text = L"Subject:";
			// 
			// to
			// 
			this->to->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->to->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->to->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->to->Location = System::Drawing::Point(209, 125);
			this->to->Name = L"to";
			this->to->Size = System::Drawing::Size(239, 31);
			this->to->TabIndex = 68;
			// 
			// subject
			// 
			this->subject->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->subject->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->subject->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->subject->Location = System::Drawing::Point(209, 176);
			this->subject->Name = L"subject";
			this->subject->Size = System::Drawing::Size(283, 31);
			this->subject->TabIndex = 69;
			// 
			// message
			// 
			this->message->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->message->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->message->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->message->Location = System::Drawing::Point(17, 30);
			this->message->Multiline = true;
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(395, 165);
			this->message->TabIndex = 70;
			// 
			// messagecontainer
			// 
			this->messagecontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->messagecontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->messagecontainer->Controls->Add(this->message);
			this->messagecontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->messagecontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->messagecontainer->Location = System::Drawing::Point(93, 221);
			this->messagecontainer->Name = L"messagecontainer";
			this->messagecontainer->Size = System::Drawing::Size(424, 212);
			this->messagecontainer->TabIndex = 71;
			this->messagecontainer->TabStop = false;
			this->messagecontainer->Text = L"Message";
			// 
			// sendBtn
			// 
			this->sendBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->sendBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sendBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->sendBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sendBtn.Image")));
			this->sendBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sendBtn->Location = System::Drawing::Point(253, 454);
			this->sendBtn->Name = L"sendBtn";
			this->sendBtn->Size = System::Drawing::Size(106, 41);
			this->sendBtn->TabIndex = 72;
			this->sendBtn->Text = L"Send";
			this->sendBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->sendBtn->UseVisualStyleBackColor = false;
			this->sendBtn->Click += gcnew System::EventHandler(this, &Compose::sendBtn_Click);
			// 
			// Compose
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(618, 512);
			this->Controls->Add(this->sendBtn);
			this->Controls->Add(this->messagecontainer);
			this->Controls->Add(this->subject);
			this->Controls->Add(this->to);
			this->Controls->Add(this->subjectLbl);
			this->Controls->Add(this->toLbl);
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
			this->Name = L"Compose";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Compose a Message";
			this->Load += gcnew System::EventHandler(this, &Compose::Compose_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->messagecontainer->ResumeLayout(false);
			this->messagecontainer->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void sendBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (to->Text == "" || subject->Text == "" || message->Text == ""){
					 MessageBox::Show("Error: You cannot leave any fields blank.");
				 }else{
					 String^ today = Convert::ToString(DateTime::Now.ToShortDateString());
					 msclr::interop::marshal_context context;
					 sender = context.marshal_as<String^>(obj->getemail()); 
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("insert into hiregauge.messages (receiver, sender, subject, body, date) values('"+this->to->Text+"', '"+sender+"', '"+this->subject->Text+"', '"+this->message->Text+"', '"+today+"');",conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your message has been successfully sent!");
						 while(myReader->Read())
						 {
						 }
						 to->Text = "";
						 subject->Text = "";
						 message->Text = "";
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
private: System::Void Compose_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
