#pragma once
#include "Person.h"
#include "Candidate.h"
#include "Candidate_Profile.h"
#include "JobExplorer.h"
#include "MyApplications.h"
#include "MyResults.h"
#include "PracticeMaterial.h"
#include "MyMailbox.h"
#include <msclr\marshal_cppstd.h>
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CandidateDashboard
	/// </summary>
	public ref class CandidateDashboard : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		CandidateDashboard(Person * ob)
		{
			InitializeComponent();
			obj = ob;
			String^ firstname;
			msclr::interop::marshal_context context;
			firstname = context.marshal_as<String^>(ob->getfirstname());
			helpTxt1->Text = "Welcome to your dashboard, " + firstname + "!";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CandidateDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  explorejobs;
	private: System::Windows::Forms::Button^  myresultsBtn;



	private: System::Windows::Forms::Button^  practicematerial;
	private: System::Windows::Forms::Button^  myprofile;
	private: System::Windows::Forms::Button^  mymailbox;
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Button^  myapplications;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CandidateDashboard::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->explorejobs = (gcnew System::Windows::Forms::Button());
			this->myresultsBtn = (gcnew System::Windows::Forms::Button());
			this->practicematerial = (gcnew System::Windows::Forms::Button());
			this->myprofile = (gcnew System::Windows::Forms::Button());
			this->mymailbox = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->myapplications = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(191, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &CandidateDashboard::pictureBox4_Click);
			// 
			// explorejobs
			// 
			this->explorejobs->FlatAppearance->BorderSize = 0;
			this->explorejobs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->explorejobs->ForeColor = System::Drawing::Color::White;
			this->explorejobs->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"explorejobs.Image")));
			this->explorejobs->Location = System::Drawing::Point(131, 186);
			this->explorejobs->Name = L"explorejobs";
			this->explorejobs->Size = System::Drawing::Size(129, 78);
			this->explorejobs->TabIndex = 11;
			this->explorejobs->Text = L"Job Openings";
			this->explorejobs->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->explorejobs->UseVisualStyleBackColor = true;
			this->explorejobs->Click += gcnew System::EventHandler(this, &CandidateDashboard::explorejobs_Click);
			// 
			// myresultsBtn
			// 
			this->myresultsBtn->FlatAppearance->BorderSize = 0;
			this->myresultsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->myresultsBtn->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->myresultsBtn->ForeColor = System::Drawing::Color::White;
			this->myresultsBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"myresultsBtn.Image")));
			this->myresultsBtn->Location = System::Drawing::Point(505, 166);
			this->myresultsBtn->Name = L"myresultsBtn";
			this->myresultsBtn->Size = System::Drawing::Size(113, 98);
			this->myresultsBtn->TabIndex = 12;
			this->myresultsBtn->Text = L"My Results";
			this->myresultsBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->myresultsBtn->UseVisualStyleBackColor = true;
			this->myresultsBtn->Click += gcnew System::EventHandler(this, &CandidateDashboard::myresultsBtn_Click);
			// 
			// practicematerial
			// 
			this->practicematerial->FlatAppearance->BorderSize = 0;
			this->practicematerial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->practicematerial->ForeColor = System::Drawing::Color::White;
			this->practicematerial->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"practicematerial.Image")));
			this->practicematerial->Location = System::Drawing::Point(131, 346);
			this->practicematerial->Name = L"practicematerial";
			this->practicematerial->Size = System::Drawing::Size(159, 88);
			this->practicematerial->TabIndex = 13;
			this->practicematerial->Text = L"Practice Material";
			this->practicematerial->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->practicematerial->UseVisualStyleBackColor = true;
			this->practicematerial->Click += gcnew System::EventHandler(this, &CandidateDashboard::practicematerial_Click);
			// 
			// myprofile
			// 
			this->myprofile->FlatAppearance->BorderSize = 0;
			this->myprofile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->myprofile->ForeColor = System::Drawing::Color::White;
			this->myprofile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"myprofile.Image")));
			this->myprofile->Location = System::Drawing::Point(336, 327);
			this->myprofile->Name = L"myprofile";
			this->myprofile->Size = System::Drawing::Size(103, 107);
			this->myprofile->TabIndex = 14;
			this->myprofile->Text = L"My Profile";
			this->myprofile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->myprofile->UseVisualStyleBackColor = true;
			this->myprofile->Click += gcnew System::EventHandler(this, &CandidateDashboard::myprofile_Click);
			// 
			// mymailbox
			// 
			this->mymailbox->FlatAppearance->BorderSize = 0;
			this->mymailbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mymailbox->ForeColor = System::Drawing::Color::White;
			this->mymailbox->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mymailbox.Image")));
			this->mymailbox->Location = System::Drawing::Point(505, 327);
			this->mymailbox->Name = L"mymailbox";
			this->mymailbox->Size = System::Drawing::Size(113, 107);
			this->mymailbox->TabIndex = 15;
			this->mymailbox->Text = L"My Mailbox";
			this->mymailbox->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->mymailbox->UseVisualStyleBackColor = true;
			this->mymailbox->Click += gcnew System::EventHandler(this, &CandidateDashboard::mymailbox_Click);
			// 
			// logout
			// 
			this->logout->FlatAppearance->BorderSize = 0;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->ForeColor = System::Drawing::Color::White;
			this->logout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logout.Image")));
			this->logout->Location = System::Drawing::Point(677, 12);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(112, 99);
			this->logout->TabIndex = 16;
			this->logout->Text = L"Logout";
			this->logout->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &CandidateDashboard::logout_Click);
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->helpTxt1->Location = System::Drawing::Point(205, 104);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(350, 23);
			this->helpTxt1->TabIndex = 17;
			this->helpTxt1->Text = L"Welcome to your dashboard, <firstname>!";
			this->helpTxt1->Click += gcnew System::EventHandler(this, &CandidateDashboard::helpTxt1_Click);
			// 
			// myapplications
			// 
			this->myapplications->FlatAppearance->BorderSize = 0;
			this->myapplications->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->myapplications->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->myapplications->ForeColor = System::Drawing::Color::White;
			this->myapplications->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"myapplications.Image")));
			this->myapplications->Location = System::Drawing::Point(310, 166);
			this->myapplications->Name = L"myapplications";
			this->myapplications->Size = System::Drawing::Size(158, 98);
			this->myapplications->TabIndex = 18;
			this->myapplications->Text = L"My Applications";
			this->myapplications->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->myapplications->UseVisualStyleBackColor = true;
			this->myapplications->Click += gcnew System::EventHandler(this, &CandidateDashboard::myapplications_Click);
			// 
			// CandidateDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(801, 497);
			this->Controls->Add(this->myapplications);
			this->Controls->Add(this->explorejobs);
			this->Controls->Add(this->myresultsBtn);
			this->Controls->Add(this->practicematerial);
			this->Controls->Add(this->helpTxt1);
			this->Controls->Add(this->mymailbox);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->myprofile);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"CandidateDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Dashboard";
			this->Load += gcnew System::EventHandler(this, &CandidateDashboard::CandidateDashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void myresultsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyResults^ f5 = gcnew MyResults(obj);
				 f5->ShowDialog();
			 }
private: System::Void CandidateDashboard_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("Are you sure you would like to logout?","Logout Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			 {
				 this->Close();
			 }
		 }
private: System::Void myprofile_Click(System::Object^  sender, System::EventArgs^  e) {
			 Candidate_Profile^ f2 = gcnew Candidate_Profile(obj);
			 f2->ShowDialog();
		 }
private: System::Void explorejobs_Click(System::Object^  sender, System::EventArgs^  e) {
			 JobExplorer^ f3 = gcnew JobExplorer(obj);
			 f3->ShowDialog();
		 }
private: System::Void myapplications_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyApplications^ f4 = gcnew MyApplications(obj);
			 f4->ShowDialog();
		 }
private: System::Void practicematerial_Click(System::Object^  sender, System::EventArgs^  e) {
			 PracticeMaterial^ f5 = gcnew PracticeMaterial();
			 f5->ShowDialog();
		 }
private: System::Void mymailbox_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyMailbox^ f6 = gcnew MyMailbox(obj);
			 f6->ShowDialog();
		 }
private: System::Void helpTxt1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
