#pragma once
#include "Person.h"
#include "Admin.h"
#include "UpdateCredentials.h"
#include "ManageCandidates.h"
#include "ManageEmployers.h"
#include "ManagePracticeMaterial.h"
namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		AdminDashboard(Person * ob)
		{
			InitializeComponent();
			obj = ob;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminDashboard()
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
	private: System::Windows::Forms::Button^  manageemployers;
	private: System::Windows::Forms::Button^  managecandidates;
	private: System::Windows::Forms::Button^  updatecredentials;
	private: System::Windows::Forms::Button^  managepracticematerial;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->manageemployers = (gcnew System::Windows::Forms::Button());
			this->managecandidates = (gcnew System::Windows::Forms::Button());
			this->updatecredentials = (gcnew System::Windows::Forms::Button());
			this->managepracticematerial = (gcnew System::Windows::Forms::Button());
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
			this->helpTxt1->Location = System::Drawing::Point(137, 109);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(361, 23);
			this->helpTxt1->TabIndex = 23;
			this->helpTxt1->Text = L"Welcome to the Administrator\'s Dashboard";
			// 
			// logout
			// 
			this->logout->FlatAppearance->BorderSize = 0;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->ForeColor = System::Drawing::Color::White;
			this->logout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logout.Image")));
			this->logout->Location = System::Drawing::Point(553, 12);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(112, 99);
			this->logout->TabIndex = 22;
			this->logout->Text = L"Logout";
			this->logout->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &AdminDashboard::logout_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(131, 22);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// manageemployers
			// 
			this->manageemployers->FlatAppearance->BorderSize = 0;
			this->manageemployers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->manageemployers->ForeColor = System::Drawing::Color::White;
			this->manageemployers->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"manageemployers.Image")));
			this->manageemployers->Location = System::Drawing::Point(186, 156);
			this->manageemployers->Name = L"manageemployers";
			this->manageemployers->Size = System::Drawing::Size(149, 151);
			this->manageemployers->TabIndex = 25;
			this->manageemployers->Text = L"Manage Employers";
			this->manageemployers->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->manageemployers->UseVisualStyleBackColor = true;
			this->manageemployers->Click += gcnew System::EventHandler(this, &AdminDashboard::manageemployers_Click);
			// 
			// managecandidates
			// 
			this->managecandidates->FlatAppearance->BorderSize = 0;
			this->managecandidates->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->managecandidates->ForeColor = System::Drawing::Color::White;
			this->managecandidates->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"managecandidates.Image")));
			this->managecandidates->Location = System::Drawing::Point(31, 156);
			this->managecandidates->Name = L"managecandidates";
			this->managecandidates->Size = System::Drawing::Size(149, 151);
			this->managecandidates->TabIndex = 24;
			this->managecandidates->Text = L"Manage Candidates";
			this->managecandidates->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->managecandidates->UseVisualStyleBackColor = true;
			this->managecandidates->Click += gcnew System::EventHandler(this, &AdminDashboard::managecandidates_Click);
			// 
			// updatecredentials
			// 
			this->updatecredentials->FlatAppearance->BorderSize = 0;
			this->updatecredentials->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updatecredentials->ForeColor = System::Drawing::Color::White;
			this->updatecredentials->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updatecredentials.Image")));
			this->updatecredentials->Location = System::Drawing::Point(341, 156);
			this->updatecredentials->Name = L"updatecredentials";
			this->updatecredentials->Size = System::Drawing::Size(149, 151);
			this->updatecredentials->TabIndex = 26;
			this->updatecredentials->Text = L"Update Credentials";
			this->updatecredentials->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->updatecredentials->UseVisualStyleBackColor = true;
			this->updatecredentials->Click += gcnew System::EventHandler(this, &AdminDashboard::updatecredentials_Click);
			// 
			// managepracticematerial
			// 
			this->managepracticematerial->FlatAppearance->BorderSize = 0;
			this->managepracticematerial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->managepracticematerial->ForeColor = System::Drawing::Color::White;
			this->managepracticematerial->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"managepracticematerial.Image")));
			this->managepracticematerial->Location = System::Drawing::Point(496, 156);
			this->managepracticematerial->Name = L"managepracticematerial";
			this->managepracticematerial->Size = System::Drawing::Size(159, 151);
			this->managepracticematerial->TabIndex = 27;
			this->managepracticematerial->Text = L"Manage Practice Material";
			this->managepracticematerial->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->managepracticematerial->UseVisualStyleBackColor = true;
			this->managepracticematerial->Click += gcnew System::EventHandler(this, &AdminDashboard::managepracticematerial_Click);
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(677, 392);
			this->Controls->Add(this->managepracticematerial);
			this->Controls->Add(this->updatecredentials);
			this->Controls->Add(this->manageemployers);
			this->Controls->Add(this->managecandidates);
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
			this->Name = L"AdminDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Administrator Dashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
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
private: System::Void updatecredentials_Click(System::Object^  sender, System::EventArgs^  e) {
			 UpdateCredentials^ f2 = gcnew UpdateCredentials(obj);
			 f2->ShowDialog();
		 }
private: System::Void managecandidates_Click(System::Object^  sender, System::EventArgs^  e) {
			 ManageCandidates^ f3 = gcnew ManageCandidates();
			 f3->ShowDialog();
		 }
private: System::Void manageemployers_Click(System::Object^  sender, System::EventArgs^  e) {
			 ManageEmployers^ f4 = gcnew ManageEmployers();
			 f4->ShowDialog();
		 }
private: System::Void managepracticematerial_Click(System::Object^  sender, System::EventArgs^  e) {
			 ManagePracticeMaterial^ f5 = gcnew ManagePracticeMaterial();
			 f5->ShowDialog();
		 }
private: System::Void AdminDashboard_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
