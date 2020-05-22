#pragma once
#include "Person.h"
#include "Admin.h"
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
	/// Summary for UpdateCredentials
	/// </summary>
	public ref class UpdateCredentials : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		String^ id;
		UpdateCredentials(Person * ob)
		{
			InitializeComponent();
			obj = ob;
			String^ emailVal;
			msclr::interop::marshal_context context;
			emailVal = context.marshal_as<String^>(obj->getemail());
			id = context.marshal_as<String^>(to_string(static_cast<long long>(obj->getid())));
			email->Text = emailVal;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateCredentials()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helpTxt1;
	protected: 
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  passwordLbl;
	private: System::Windows::Forms::TextBox^  password2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  updateBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateCredentials::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->password2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(135, 89);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(366, 62);
			this->helpTxt1->TabIndex = 62;
			this->helpTxt1->Text = L"Click \"Update\" to Save Changes";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(5, 12);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 61;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &UpdateCredentials::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(125, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 60;
			this->pictureBox4->TabStop = false;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(249, 187);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 67;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(183, 190);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 66;
			this->emailLbl->Text = L"Email:";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(249, 243);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 69;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passwordLbl->Location = System::Drawing::Point(107, 245);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(136, 23);
			this->passwordLbl->TabIndex = 68;
			this->passwordLbl->Text = L"New Password:";
			// 
			// password2
			// 
			this->password2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password2->Location = System::Drawing::Point(249, 301);
			this->password2->Name = L"password2";
			this->password2->PasswordChar = '*';
			this->password2->Size = System::Drawing::Size(179, 31);
			this->password2->TabIndex = 71;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 303);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 23);
			this->label1->TabIndex = 70;
			this->label1->Text = L"Confirm New Password:";
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->updateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->updateBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updateBtn.Image")));
			this->updateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->updateBtn->Location = System::Drawing::Point(249, 368);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(119, 43);
			this->updateBtn->TabIndex = 73;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &UpdateCredentials::updateBtn_Click);
			// 
			// UpdateCredentials
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(597, 462);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->password2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->email);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->helpTxt1);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"UpdateCredentials";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Update Credentials";
			this->Load += gcnew System::EventHandler(this, &UpdateCredentials::UpdateCredentials_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void UpdateCredentials_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (email->Text == ""){
				 MessageBox::Show("Error: You cannot leave the email field blank!");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to save your changes?","Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't save changes
				 }else{
					 if (password->Text == password2->Text){
						 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
						 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
						 String^ Query;
						 msclr::interop::marshal_context context;
						 if (password->Text == "")
						 {
							 std::string emailval = context.marshal_as<std::string>(email->Text);
							 obj->setemail(emailval);
							 Query = "update hiregauge.admins set email='"+this->email->Text+"' where id='"+id+"';";
						 }else{
							 std::string emailval = context.marshal_as<std::string>(email->Text);
							 std::string passwordval = context.marshal_as<std::string>(password->Text);
							 obj->setemail(emailval);
							 obj->setpassword(passwordval);
							 Query = "update hiregauge.admins set email='"+this->email->Text+"', password='"+this->password->Text+"' where id='"+id+"';";
						 }
						 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
						 MySqlDataReader^ myReader;
						 try{
							 conDataBase->Open();
							 myReader = cmdDataBase->ExecuteReader();
							 MessageBox::Show("Your credential(s) has/have been updated.");
							 // Display updated information
							 String^ emailVal;
							 msclr::interop::marshal_context context;
							 emailVal = context.marshal_as<String^>(obj->getemail());
							 email->Text = emailVal;
							 while(myReader->Read())
							 {
							 }
							 myReader->Close();
							 conDataBase->Close();
						 }
						 catch(MySqlException^ ex){
							 MessageBox::Show(ex->Message);
						 }
					 }else{
						 MessageBox::Show("The new password and the confirmed new password do not match! Please try again.");
					 }
				 }
			 }
		 }
};
}
