#pragma once
#include "Person.h"
#include "Employer.h"
#include "Employer_Profile.h"
#include "ManageJobOpenings.h"
#include "MyMailbox.h"
#include "ManageJobApplications.h"
#include <msclr\marshal_cppstd.h>
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployerDashboard
	/// </summary>
	public ref class EmployerDashboard : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		EmployerDashboard(Person * ob)
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
		~EmployerDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helpTxt1;
	protected: 
	private: System::Windows::Forms::Button^  logout;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  employerprofile;
	private: System::Windows::Forms::Button^  manageopenings;
	private: System::Windows::Forms::Button^  manageapps;
	private: System::Windows::Forms::Button^  mailbox;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployerDashboard::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->employerprofile = (gcnew System::Windows::Forms::Button());
			this->manageopenings = (gcnew System::Windows::Forms::Button());
			this->manageapps = (gcnew System::Windows::Forms::Button());
			this->mailbox = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->helpTxt1->Location = System::Drawing::Point(183, 95);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(350, 23);
			this->helpTxt1->TabIndex = 20;
			this->helpTxt1->Text = L"Welcome to your dashboard, <firstname>!";
			// 
			// logout
			// 
			this->logout->FlatAppearance->BorderSize = 0;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->ForeColor = System::Drawing::Color::White;
			this->logout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logout.Image")));
			this->logout->Location = System::Drawing::Point(643, 3);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(112, 99);
			this->logout->TabIndex = 19;
			this->logout->Text = L"Logout";
			this->logout->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &EmployerDashboard::logout_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(157, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 18;
			this->pictureBox4->TabStop = false;
			// 
			// employerprofile
			// 
			this->employerprofile->FlatAppearance->BorderSize = 0;
			this->employerprofile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employerprofile->ForeColor = System::Drawing::Color::White;
			this->employerprofile->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"employerprofile.Image")));
			this->employerprofile->Location = System::Drawing::Point(83, 155);
			this->employerprofile->Name = L"employerprofile";
			this->employerprofile->Size = System::Drawing::Size(153, 107);
			this->employerprofile->TabIndex = 21;
			this->employerprofile->Text = L"Employer Profile";
			this->employerprofile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->employerprofile->UseVisualStyleBackColor = true;
			this->employerprofile->Click += gcnew System::EventHandler(this, &EmployerDashboard::employerprofile_Click);
			// 
			// manageopenings
			// 
			this->manageopenings->FlatAppearance->BorderSize = 0;
			this->manageopenings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->manageopenings->ForeColor = System::Drawing::Color::White;
			this->manageopenings->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"manageopenings.Image")));
			this->manageopenings->Location = System::Drawing::Point(242, 137);
			this->manageopenings->Name = L"manageopenings";
			this->manageopenings->Size = System::Drawing::Size(149, 142);
			this->manageopenings->TabIndex = 22;
			this->manageopenings->Text = L"Manage Job Openings";
			this->manageopenings->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->manageopenings->UseVisualStyleBackColor = true;
			this->manageopenings->Click += gcnew System::EventHandler(this, &EmployerDashboard::manageopenings_Click);
			// 
			// manageapps
			// 
			this->manageapps->FlatAppearance->BorderSize = 0;
			this->manageapps->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->manageapps->ForeColor = System::Drawing::Color::White;
			this->manageapps->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"manageapps.Image")));
			this->manageapps->Location = System::Drawing::Point(397, 137);
			this->manageapps->Name = L"manageapps";
			this->manageapps->Size = System::Drawing::Size(149, 142);
			this->manageapps->TabIndex = 23;
			this->manageapps->Text = L"Manage Job Applications";
			this->manageapps->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->manageapps->UseVisualStyleBackColor = true;
			this->manageapps->Click += gcnew System::EventHandler(this, &EmployerDashboard::manageapps_Click);
			// 
			// mailbox
			// 
			this->mailbox->FlatAppearance->BorderSize = 0;
			this->mailbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mailbox->ForeColor = System::Drawing::Color::White;
			this->mailbox->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mailbox.Image")));
			this->mailbox->Location = System::Drawing::Point(552, 155);
			this->mailbox->Name = L"mailbox";
			this->mailbox->Size = System::Drawing::Size(113, 107);
			this->mailbox->TabIndex = 24;
			this->mailbox->Text = L"Mailbox";
			this->mailbox->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->mailbox->UseVisualStyleBackColor = true;
			this->mailbox->Click += gcnew System::EventHandler(this, &EmployerDashboard::mailbox_Click);
			// 
			// EmployerDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(768, 346);
			this->Controls->Add(this->mailbox);
			this->Controls->Add(this->manageapps);
			this->Controls->Add(this->manageopenings);
			this->Controls->Add(this->employerprofile);
			this->Controls->Add(this->helpTxt1);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"EmployerDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Employer Dashboard";
			this->Load += gcnew System::EventHandler(this, &EmployerDashboard::EmployerDashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void logout_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (MessageBox::Show("Are you sure you would like to logout?","Logout Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				 {
					 this->Close();
				 }
			 }
private: System::Void EmployerDashboard_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void employerprofile_Click(System::Object^  sender, System::EventArgs^  e) {
			 Employer_Profile^ f2 = gcnew Employer_Profile(obj);
			 f2->ShowDialog();
		 }
private: System::Void manageopenings_Click(System::Object^  sender, System::EventArgs^  e) {
			 ManageJobOpenings^ f3 = gcnew ManageJobOpenings(obj);
			 f3->ShowDialog();
		 }
private: System::Void mailbox_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyMailbox^ f4 = gcnew MyMailbox(obj);
			 f4->ShowDialog();
		 }
private: System::Void manageapps_Click(System::Object^  sender, System::EventArgs^  e) {
			 ManageJobApplications^ f5 = gcnew ManageJobApplications(obj);
			 f5->ShowDialog();
		 }
};
}
