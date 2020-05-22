#pragma once
#include "CandidateDashboard.h"
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
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for CandidateLogin
	/// </summary>
	public ref class CandidateLogin : public System::Windows::Forms::Form
	{
	public:
		CandidateLogin(void)
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
		~CandidateLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  helpTxt1;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CandidateLogin::typeid));
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Location = System::Drawing::Point(276, 104);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(160, 26);
			this->helpTxt1->TabIndex = 0;
			this->helpTxt1->Text = L"Candidate Login";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Location = System::Drawing::Point(207, 173);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 2;
			this->emailLbl->Text = L"Email:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(173, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(273, 170);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 4;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(273, 221);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 5;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(175)), 
				static_cast<System::Int32>(static_cast<System::Byte>(80)));
			this->loginBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"loginBtn.Image")));
			this->loginBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->loginBtn->Location = System::Drawing::Point(273, 277);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(121, 50);
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Text = L"Login";
			this->loginBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &CandidateLogin::loginBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(211, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 70);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(159, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(373, 74);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// CandidateLogin
			// 
			this->AcceptButton = this->loginBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(680, 361);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->helpTxt1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"CandidateLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Candidate Login";
			this->Load += gcnew System::EventHandler(this, &CandidateLogin::CandidateLogin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (email->Text == "" || password->Text == ""){
					 MessageBox::Show("Error: You cannot leave the email and/or password field(s) blank!");
				 }else{
					 Person * ob;
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.candidates where email='"+this->email->Text+"' and password='"+this->password->Text+"';",conDataBase);
					 MySqlDataReader^ myReader;
					 String^ status;
					 int count=0;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 while(myReader->Read())
						 {
							 count++;
							 status = myReader->GetString(8);
						 }
						 if(status == "banned"){
							 MessageBox::Show("This account has been banned from the system. Please contact the administrator if you believe that this was done by mistake.");
						 }else{
							 if(count == 1){
								MessageBox::Show("Login successful!");
								// Converting all System::Strings to std::strings to allow them to be passed to the constructor
								msclr::interop::marshal_context context;
								std::string firstnameval = context.marshal_as<std::string>(myReader->GetString(1));
								std::string lastnameval = context.marshal_as<std::string>(myReader->GetString(2));
								std::string membertypeval = context.marshal_as<std::string>(myReader->GetString(3));
								std::string emailval = context.marshal_as<std::string>(myReader->GetString(4));
								std::string passwordval = context.marshal_as<std::string>(myReader->GetString(5));
								std::string dobval = context.marshal_as<std::string>(myReader->GetString(6));
								std::string genderval = context.marshal_as<std::string>(myReader->GetString(7));
								ob = new Candidate(myReader->GetInt32(0), firstnameval, lastnameval, membertypeval, emailval, passwordval, dobval, genderval);
								this->Hide();
								CandidateDashboard^ f2 = gcnew CandidateDashboard(ob);
								f2->ShowDialog();
								this->Close();
							}
							else{
								MessageBox::Show("Error: Incorrect email and/or password");
							}
						 }
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
	}
private: System::Void CandidateLogin_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
