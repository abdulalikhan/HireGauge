#pragma once
#include "Person.h"
#include "Employer.h"
#include "EmployerDashboard.h"
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
	/// Summary for EmployerLogin
	/// </summary>
	public ref class EmployerLogin : public System::Windows::Forms::Form
	{
	public:
		EmployerLogin(void)
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
		~EmployerLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  emailLbl;

	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EmployerLogin::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(215, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 70);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
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
			this->loginBtn->Location = System::Drawing::Point(277, 291);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(121, 50);
			this->loginBtn->TabIndex = 22;
			this->loginBtn->Text = L"Login";
			this->loginBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &EmployerLogin::loginBtn_Click);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(277, 231);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 21;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(277, 180);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(177, 234);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 23);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Password:";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(211, 183);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 18;
			this->emailLbl->Text = L"Email:";
			// 
			// helpTxt1
			// 
			this->helpTxt1->AutoSize = true;
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Location = System::Drawing::Point(280, 114);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(154, 26);
			this->helpTxt1->TabIndex = 16;
			this->helpTxt1->Text = L"Employer Login";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(153, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(371, 72);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// EmployerLogin
			// 
			this->AcceptButton = this->loginBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(685, 379);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->helpTxt1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"EmployerLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Employer Login";
			this->Load += gcnew System::EventHandler(this, &EmployerLogin::EmployerLogin_Load);
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
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.employers where email='"+this->email->Text+"' and password='"+this->password->Text+"';",conDataBase);
					 MySqlDataReader^ myReader;
					 String^ status;
					 int count=0;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 while(myReader->Read())
						 {
							 count++;
							 status = myReader->GetString(12);
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
								 std::string jobtitleval = context.marshal_as<std::string>(myReader->GetString(8));
								 std::string companynameval = context.marshal_as<std::string>(myReader->GetString(9));
								 std::string phonenumval = context.marshal_as<std::string>(myReader->GetString(10));
								 std::string employeesval = context.marshal_as<std::string>(myReader->GetString(11));
								 ob = new Employer(myReader->GetInt32(0), firstnameval, lastnameval, membertypeval, emailval, passwordval, dobval, genderval, jobtitleval, companynameval, phonenumval, employeesval);
								 this->Hide();
								 EmployerDashboard^ f2 = gcnew EmployerDashboard(ob);
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
private: System::Void EmployerLogin_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
