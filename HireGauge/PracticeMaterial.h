#pragma once
#include <msclr\marshal_cppstd.h>
#include "ResourceViewer.h"
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
	/// Summary for PracticeMaterial
	/// </summary>
	public ref class PracticeMaterial : public System::Windows::Forms::Form
	{
	public:
		static Dictionary<String^, String^> urls = gcnew Dictionary<String^, String^>();
		String^ URL;
		PracticeMaterial(void)
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
		~PracticeMaterial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backBtn;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ComboBox^  skillarea;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Label^  skillareaLbl;
	private: System::Windows::Forms::GroupBox^  resourcescontainer;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  resourcelist;
	private: System::Windows::Forms::Button^  viewBtn;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PracticeMaterial::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->skillarea = (gcnew System::Windows::Forms::ComboBox());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->skillareaLbl = (gcnew System::Windows::Forms::Label());
			this->resourcescontainer = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->resourcelist = (gcnew System::Windows::Forms::ListBox());
			this->viewBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->resourcescontainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(4, 2);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 60;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &PracticeMaterial::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(198, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 59;
			this->pictureBox4->TabStop = false;
			// 
			// skillarea
			// 
			this->skillarea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->skillarea->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->skillarea->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->skillarea->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->skillarea->FormattingEnabled = true;
			this->skillarea->Location = System::Drawing::Point(281, 162);
			this->skillarea->Name = L"skillarea";
			this->skillarea->Size = System::Drawing::Size(244, 31);
			this->skillarea->TabIndex = 61;
			this->skillarea->Tag = L"";
			this->skillarea->SelectedIndexChanged += gcnew System::EventHandler(this, &PracticeMaterial::skillarea_SelectedIndexChanged);
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(248, 80);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(263, 63);
			this->helpTxt1->TabIndex = 62;
			this->helpTxt1->Text = L"Practice Material";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// skillareaLbl
			// 
			this->skillareaLbl->AutoSize = true;
			this->skillareaLbl->Location = System::Drawing::Point(187, 165);
			this->skillareaLbl->Name = L"skillareaLbl";
			this->skillareaLbl->Size = System::Drawing::Size(88, 23);
			this->skillareaLbl->TabIndex = 63;
			this->skillareaLbl->Text = L"Skill Area:";
			// 
			// resourcescontainer
			// 
			this->resourcescontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), 
				static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resourcescontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->resourcescontainer->Controls->Add(this->label1);
			this->resourcescontainer->Controls->Add(this->resourcelist);
			this->resourcescontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resourcescontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resourcescontainer->Location = System::Drawing::Point(135, 208);
			this->resourcescontainer->Name = L"resourcescontainer";
			this->resourcescontainer->Size = System::Drawing::Size(507, 307);
			this->resourcescontainer->TabIndex = 64;
			this->resourcescontainer->TabStop = false;
			this->resourcescontainer->Text = L"Resources";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(48, 41);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(391, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Select a resource and then click \"View Resource\"";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// resourcelist
			// 
			this->resourcelist->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->resourcelist->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->resourcelist->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->resourcelist->FormattingEnabled = true;
			this->resourcelist->ItemHeight = 23;
			this->resourcelist->Location = System::Drawing::Point(16, 63);
			this->resourcelist->Name = L"resourcelist";
			this->resourcelist->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resourcelist->Size = System::Drawing::Size(472, 232);
			this->resourcelist->TabIndex = 12;
			this->resourcelist->SelectedIndexChanged += gcnew System::EventHandler(this, &PracticeMaterial::resourcelist_SelectedIndexChanged);
			// 
			// viewBtn
			// 
			this->viewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->viewBtn->Enabled = false;
			this->viewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->viewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->viewBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->viewBtn->Location = System::Drawing::Point(320, 535);
			this->viewBtn->Name = L"viewBtn";
			this->viewBtn->Size = System::Drawing::Size(151, 41);
			this->viewBtn->TabIndex = 65;
			this->viewBtn->Text = L"View Resource";
			this->viewBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->viewBtn->UseVisualStyleBackColor = false;
			this->viewBtn->Click += gcnew System::EventHandler(this, &PracticeMaterial::viewBtn_Click);
			// 
			// PracticeMaterial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(800, 605);
			this->Controls->Add(this->viewBtn);
			this->Controls->Add(this->resourcescontainer);
			this->Controls->Add(this->skillareaLbl);
			this->Controls->Add(this->helpTxt1);
			this->Controls->Add(this->skillarea);
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
			this->Name = L"PracticeMaterial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | View Practice Material";
			this->Load += gcnew System::EventHandler(this, &PracticeMaterial::PracticeMaterial_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->resourcescontainer->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void PracticeMaterial_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.practicematerial;", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 while(myReader->Read())
				  	 {
						 skillarea->Items->Add(myReader->GetString(1));
					 }
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
				 }
			 }
private: System::Void skillarea_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 msclr::interop::marshal_context context;
				 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select * from hiregauge.practicematerial where skillarea='"+skillarea->GetItemText(skillarea->SelectedItem)+"';", conDataBase);
				 MySqlDataReader^ myReader;
				 try{
					 conDataBase->Open();
					 myReader = cmdDataBase->ExecuteReader();
					 resourcelist->Items->Clear();
					 while(myReader->Read())
				  	 {
						 resourcelist->Items->Add(myReader->GetString(2));
						 String^ URL =  myReader->GetString(3);
						 if (urls.ContainsKey(myReader->GetString(2))){
							 urls[myReader->GetString(2)] = URL;
						 }else{
							 urls.Add(myReader->GetString(2), URL);
						 }
					 }
					 viewBtn->Enabled = true;
					 myReader->Close();
					 conDataBase->Close();
				 }
				 catch(MySqlException^ ex){
					MessageBox::Show(ex->Message);
					viewBtn->Enabled = false;
				 }
		 }
private: System::Void viewBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (resourcelist->SelectedIndex != -1){
				 ResourceViewer^ f1 = gcnew ResourceViewer(resourcelist->GetItemText(resourcelist->SelectedItem), urls[resourcelist->GetItemText(resourcelist->SelectedItem)]);
				 f1->ShowDialog();
			 }else{
				 MessageBox::Show("Please first select a resource from the list above!");
			 }
		 }
private: System::Void resourcelist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
