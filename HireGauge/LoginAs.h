#pragma once
#include "stdafx.h"
#include "CandidateLogin.h"
#include "EmployerLogin.h"
#include "AdminLogin.h"
#include "Signup.h"
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginAs
	/// </summary>
	public ref class LoginAs : public System::Windows::Forms::Form
	{
	public:
		LoginAs(void)
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
		~LoginAs()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Button^  candidateBtn;
	private: System::Windows::Forms::Button^  employerBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  adminBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::LinkLabel^  signupLink;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginAs::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->candidateBtn = (gcnew System::Windows::Forms::Button());
			this->employerBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->adminBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->signupLink = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->helpTxt1->Location = System::Drawing::Point(273, 105);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(90, 26);
			this->helpTxt1->TabIndex = 1;
			this->helpTxt1->Text = L"Login As";
			// 
			// candidateBtn
			// 
			this->candidateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->candidateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->candidateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->candidateBtn->Location = System::Drawing::Point(288, 172);
			this->candidateBtn->Name = L"candidateBtn";
			this->candidateBtn->Size = System::Drawing::Size(130, 51);
			this->candidateBtn->TabIndex = 2;
			this->candidateBtn->Text = L"Candidate";
			this->candidateBtn->UseVisualStyleBackColor = false;
			this->candidateBtn->Click += gcnew System::EventHandler(this, &LoginAs::candidateBtn_Click);
			// 
			// employerBtn
			// 
			this->employerBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->employerBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employerBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->employerBtn->Location = System::Drawing::Point(288, 268);
			this->employerBtn->Name = L"employerBtn";
			this->employerBtn->Size = System::Drawing::Size(130, 51);
			this->employerBtn->TabIndex = 3;
			this->employerBtn->Text = L"Employer";
			this->employerBtn->UseVisualStyleBackColor = false;
			this->employerBtn->Click += gcnew System::EventHandler(this, &LoginAs::employerBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(199, 162);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 70);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(199, 256);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 79);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// adminBtn
			// 
			this->adminBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->adminBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->adminBtn->Location = System::Drawing::Point(288, 366);
			this->adminBtn->Name = L"adminBtn";
			this->adminBtn->Size = System::Drawing::Size(130, 51);
			this->adminBtn->TabIndex = 6;
			this->adminBtn->Text = L"Admin";
			this->adminBtn->UseVisualStyleBackColor = false;
			this->adminBtn->Click += gcnew System::EventHandler(this, &LoginAs::adminBtn_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(199, 352);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 79);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// signupLink
			// 
			this->signupLink->ActiveLinkColor = System::Drawing::Color::Black;
			this->signupLink->AutoSize = true;
			this->signupLink->Font = (gcnew System::Drawing::Font(L"Candara", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signupLink->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->signupLink->LinkColor = System::Drawing::Color::Lime;
			this->signupLink->Location = System::Drawing::Point(92, 462);
			this->signupLink->Name = L"signupLink";
			this->signupLink->Size = System::Drawing::Size(450, 29);
			this->signupLink->TabIndex = 8;
			this->signupLink->TabStop = true;
			this->signupLink->Text = L"Don\'t have an account\? Click here to Signup";
			this->signupLink->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginAs::signupLink_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(136, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// LoginAs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(666, 538);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->signupLink);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->adminBtn);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->employerBtn);
			this->Controls->Add(this->candidateBtn);
			this->Controls->Add(this->helpTxt1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"LoginAs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge";
			this->Load += gcnew System::EventHandler(this, &LoginAs::LoginAs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void candidateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				CandidateLogin^ f2 = gcnew CandidateLogin();
				f2->ShowDialog();
			 }
private: System::Void employerBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 EmployerLogin^ f3 = gcnew EmployerLogin();
				f3->ShowDialog();
		 }
private: System::Void adminBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 AdminLogin^ f4 = gcnew AdminLogin();
				f4->ShowDialog();
		 }
private: System::Void signupLink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			Signup^ f5 = gcnew Signup();
				f5->ShowDialog();
		 }
private: System::Void LoginAs_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

