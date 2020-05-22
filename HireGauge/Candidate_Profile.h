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
	/// Summary for Candidate_Profile
	/// </summary>
	public ref class Candidate_Profile : public System::Windows::Forms::Form
	{
	public:
		Person * obj;
		Candidate_Profile(Person * ob)
		{
			InitializeComponent();
			obj = ob;
			String^ firstnameVal;
			String^ lastnameVal;
			String^ emailVal;
			String^ dobVal;
			String^ genderVal;
			msclr::interop::marshal_context context;
			firstnameVal = context.marshal_as<String^>(ob->getfirstname());
			lastnameVal = context.marshal_as<String^>(ob->getlastname());
			emailVal = context.marshal_as<String^>(ob->getemail());
			dobVal = context.marshal_as<String^>(ob->getdob());
			genderVal = context.marshal_as<String^>(ob->getgender());
			id->Text = System::Convert::ToString(ob->getid());
			firstname->Text = firstnameVal;
			lastname->Text = lastnameVal;
			email->Text = emailVal;
			dob->Text = dobVal;
			gender->Text = genderVal;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Candidate_Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ComboBox^  gender;
	private: System::Windows::Forms::Label^  genderLbl;
	private: System::Windows::Forms::DateTimePicker^  dob;
	private: System::Windows::Forms::Label^  dobLbl;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  passwordLbl;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  emailLbl;
	private: System::Windows::Forms::TextBox^  lastname;
	private: System::Windows::Forms::Label^  lnameLbl;
	private: System::Windows::Forms::TextBox^  firstname;
	private: System::Windows::Forms::Label^  fnameLbl;
	private: System::Windows::Forms::Button^  updateBtn;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Button^  backBtn;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Candidate_Profile::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->gender = (gcnew System::Windows::Forms::ComboBox());
			this->genderLbl = (gcnew System::Windows::Forms::Label());
			this->dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->dobLbl = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->passwordLbl = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(118, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// gender
			// 
			this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->gender->FormattingEnabled = true;
			this->gender->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Other"});
			this->gender->Location = System::Drawing::Point(280, 446);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(121, 31);
			this->gender->TabIndex = 51;
			this->gender->Tag = L"";
			// 
			// genderLbl
			// 
			this->genderLbl->AutoSize = true;
			this->genderLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->genderLbl->Location = System::Drawing::Point(200, 449);
			this->genderLbl->Name = L"genderLbl";
			this->genderLbl->Size = System::Drawing::Size(74, 23);
			this->genderLbl->TabIndex = 48;
			this->genderLbl->Text = L"Gender:";
			// 
			// dob
			// 
			this->dob->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(137)), 
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dob->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->CalendarTrailingForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), 
				static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->dob->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dob->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dob->Location = System::Drawing::Point(280, 393);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(126, 31);
			this->dob->TabIndex = 47;
			this->dob->Value = System::DateTime(2020, 3, 31, 10, 15, 43, 0);
			// 
			// dobLbl
			// 
			this->dobLbl->AutoSize = true;
			this->dobLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dobLbl->Location = System::Drawing::Point(155, 399);
			this->dobLbl->Name = L"dobLbl";
			this->dobLbl->Size = System::Drawing::Size(119, 23);
			this->dobLbl->TabIndex = 46;
			this->dobLbl->Text = L"Date of Birth:";
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->password->Location = System::Drawing::Point(280, 350);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(179, 31);
			this->password->TabIndex = 45;
			// 
			// passwordLbl
			// 
			this->passwordLbl->AutoSize = true;
			this->passwordLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passwordLbl->Location = System::Drawing::Point(180, 358);
			this->passwordLbl->Name = L"passwordLbl";
			this->passwordLbl->Size = System::Drawing::Size(94, 23);
			this->passwordLbl->TabIndex = 44;
			this->passwordLbl->Text = L"Password:";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->email->Location = System::Drawing::Point(280, 306);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(179, 31);
			this->email->TabIndex = 43;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(214, 309);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 23);
			this->emailLbl->TabIndex = 42;
			this->emailLbl->Text = L"Email:";
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->lastname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->lastname->Location = System::Drawing::Point(281, 258);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(139, 31);
			this->lastname->TabIndex = 41;
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(177, 260);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(97, 23);
			this->lnameLbl->TabIndex = 40;
			this->lnameLbl->Text = L"Last name:";
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->firstname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->firstname->Location = System::Drawing::Point(281, 216);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(164, 31);
			this->firstname->TabIndex = 39;
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(177, 219);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(100, 23);
			this->fnameLbl->TabIndex = 38;
			this->fnameLbl->Text = L"First name:";
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
			this->updateBtn->Location = System::Drawing::Point(271, 494);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(117, 45);
			this->updateBtn->TabIndex = 52;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &Candidate_Profile::updateBtn_Click);
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(58, 89);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(494, 62);
			this->helpTxt1->TabIndex = 53;
			this->helpTxt1->Text = L"Click \"Update\" to Save Changes to Your Profile";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(160, 174);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(117, 23);
			this->idLbl->TabIndex = 54;
			this->idLbl->Text = L"Candidate ID:";
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->id->Location = System::Drawing::Point(283, 172);
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Size = System::Drawing::Size(86, 31);
			this->id->TabIndex = 55;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(12, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 56;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &Candidate_Profile::backBtn_Click);
			// 
			// Candidate_Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(625, 581);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->id);
			this->Controls->Add(this->idLbl);
			this->Controls->Add(this->helpTxt1);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->genderLbl);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->dobLbl);
			this->Controls->Add(this->password);
			this->Controls->Add(this->passwordLbl);
			this->Controls->Add(this->email);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->lastname);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->firstname);
			this->Controls->Add(this->fnameLbl);
			this->Controls->Add(this->pictureBox4);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"Candidate_Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | My Profile";
			this->Load += gcnew System::EventHandler(this, &Candidate_Profile::Candidate_Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Candidate_Profile_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (firstname->Text == "" || lastname->Text == "" || email->Text == "" || gender->Text == ""){
				 MessageBox::Show("Error: You cannot leave any fields blank (except the password field if you don't want to change it).");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to save your changes?","Profile Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't save changes
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 msclr::interop::marshal_context context;
					 if (password->Text == "")
					 {
						 std::string firstnameval = context.marshal_as<std::string>(firstname->Text);
						 std::string lastnameval = context.marshal_as<std::string>(lastname->Text);
						 std::string emailval = context.marshal_as<std::string>(email->Text);
						 std::string dobval = context.marshal_as<std::string>(dob->Text);
						 std::string genderval = context.marshal_as<std::string>(gender->Text);
						 obj->setfirstname(firstnameval);
						 obj->setlastname(lastnameval);
						 obj->setemail(emailval);
						 obj->setdob(dobval);
						 obj->setgender(genderval);
						 Query = "update hiregauge.candidates set firstname='"+this->firstname->Text+"', lastname='"+this->lastname->Text+"', email='"+this->email->Text+"', dob='"+this->dob->Value.ToShortDateString()+"', gender='"+this->gender->GetItemText(gender->SelectedItem)+"' where id='"+this->id->Text+"';";
					 }else{
						 std::string firstnameval = context.marshal_as<std::string>(firstname->Text);
						 std::string lastnameval = context.marshal_as<std::string>(lastname->Text);
						 std::string emailval = context.marshal_as<std::string>(email->Text);
						 std::string passwordval = context.marshal_as<std::string>(password->Text);
						 std::string dobval = context.marshal_as<std::string>(dob->Text);
						 std::string genderval = context.marshal_as<std::string>(gender->Text);
						 obj->setfirstname(firstnameval);
						 obj->setlastname(lastnameval);
						 obj->setemail(emailval);
						 obj->setpassword(passwordval);
						 obj->setdob(dobval);
						 obj->setgender(genderval);
						 Query = "update hiregauge.candidates set firstname='"+this->firstname->Text+"', lastname='"+this->lastname->Text+"', email='"+this->email->Text+"', password='"+this->password->Text+"', dob='"+this->dob->Value.ToShortDateString()+"', gender='"+this->gender->GetItemText(gender->SelectedItem)+"' where id='"+this->id->Text+"';";
					 }
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("Your information has been updated.");
						 // Display updated information
						 String^ firstnameVal;
						 String^ lastnameVal;
						 String^ emailVal;
						 String^ dobVal;
						 String^ genderVal;
						 msclr::interop::marshal_context context;
						 firstnameVal = context.marshal_as<String^>(obj->getfirstname());
						 lastnameVal = context.marshal_as<String^>(obj->getlastname());
						 emailVal = context.marshal_as<String^>(obj->getemail());
						 dobVal = context.marshal_as<String^>(obj->getdob());
						 genderVal = context.marshal_as<String^>(obj->getgender());
						 firstname->Text = firstnameVal;
						 lastname->Text = lastnameVal;
						 email->Text = emailVal;
						 dob->Text = dobVal;
						 gender->Text = genderVal;
						 while(myReader->Read())
						 {
						 }
						 myReader->Close();
						 conDataBase->Close();
					 }
					 catch(MySqlException^ ex){
						 MessageBox::Show(ex->Message);
					 }
				 }
			 }
		 }
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
