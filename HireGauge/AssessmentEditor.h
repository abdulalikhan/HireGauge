#pragma once
#include "Assessment.h"
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
	/// Summary for AssessmentEditor
	/// </summary>
	public ref class AssessmentEditor : public System::Windows::Forms::Form
	{
	public:
		Assessment * obj;
		MySqlDataAdapter ^ sda;
	private: System::Windows::Forms::Button^  updatedetailsBtn;
	private: System::Windows::Forms::Button^  deleteBtn;


	public: 
		DataTable^ dbdataset;
		AssessmentEditor(Assessment * ob)
		{
			InitializeComponent();
			obj = ob;
			sda = gcnew MySqlDataAdapter();
			dbdataset = gcnew DataTable();
			String^ titleVal;
			msclr::interop::marshal_context context;
			titleVal = context.marshal_as<String^>(ob->gettitle());
			id->Text = System::Convert::ToString(obj->getid());
			opening_id->Text = System::Convert::ToString(ob->getopening_id());
			time_limit->Text = System::Convert::ToString(ob->gettime_limit());
			no_of_questions->Text = System::Convert::ToString(ob->getno_of_questions());
			title->Text = titleVal;
			updatedetailsBtn->Enabled = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AssessmentEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	protected: 
	private: System::Windows::Forms::Label^  mainLbl;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::TextBox^  id;
	private: System::Windows::Forms::Label^  idLbl;
	private: System::Windows::Forms::TextBox^  title;
	private: System::Windows::Forms::Label^  assessmenttitleLbl;


	private: System::Windows::Forms::TextBox^  time_limit;
	private: System::Windows::Forms::Label^  time_limitLbl;


	private: System::Windows::Forms::TextBox^  no_of_questions;
	private: System::Windows::Forms::Label^  no_of_questionsLbl;
	private: System::Windows::Forms::TextBox^  opening_id;

	private: System::Windows::Forms::Label^  opening_idLbl;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  updateBtn;
	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AssessmentEditor::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLbl = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->idLbl = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->assessmenttitleLbl = (gcnew System::Windows::Forms::Label());
			this->time_limit = (gcnew System::Windows::Forms::TextBox());
			this->time_limitLbl = (gcnew System::Windows::Forms::Label());
			this->no_of_questions = (gcnew System::Windows::Forms::TextBox());
			this->no_of_questionsLbl = (gcnew System::Windows::Forms::Label());
			this->opening_id = (gcnew System::Windows::Forms::TextBox());
			this->opening_idLbl = (gcnew System::Windows::Forms::Label());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->updatedetailsBtn = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(397, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 63;
			this->pictureBox4->TabStop = false;
			// 
			// mainLbl
			// 
			this->mainLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mainLbl->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"mainLbl.Image")));
			this->mainLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->mainLbl->Location = System::Drawing::Point(449, 88);
			this->mainLbl->Name = L"mainLbl";
			this->mainLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->mainLbl->Size = System::Drawing::Size(303, 39);
			this->mainLbl->TabIndex = 64;
			this->mainLbl->Text = L"Update Assessment";
			this->mainLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(6, 11);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 65;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &AssessmentEditor::backBtn_Click);
			// 
			// id
			// 
			this->id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->id->Location = System::Drawing::Point(547, 88);
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Size = System::Drawing::Size(86, 31);
			this->id->TabIndex = 67;
			// 
			// idLbl
			// 
			this->idLbl->AutoSize = true;
			this->idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->idLbl->Location = System::Drawing::Point(408, 90);
			this->idLbl->Name = L"idLbl";
			this->idLbl->Size = System::Drawing::Size(133, 23);
			this->idLbl->TabIndex = 66;
			this->idLbl->Text = L"Assessment ID:";
			// 
			// title
			// 
			this->title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->title->Location = System::Drawing::Point(547, 125);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(245, 31);
			this->title->TabIndex = 69;
			// 
			// assessmenttitleLbl
			// 
			this->assessmenttitleLbl->AutoSize = true;
			this->assessmenttitleLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->assessmenttitleLbl->Location = System::Drawing::Point(388, 127);
			this->assessmenttitleLbl->Name = L"assessmenttitleLbl";
			this->assessmenttitleLbl->Size = System::Drawing::Size(153, 23);
			this->assessmenttitleLbl->TabIndex = 68;
			this->assessmenttitleLbl->Text = L"Assessment Title:";
			// 
			// time_limit
			// 
			this->time_limit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->time_limit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->time_limit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->time_limit->Location = System::Drawing::Point(547, 162);
			this->time_limit->Name = L"time_limit";
			this->time_limit->Size = System::Drawing::Size(101, 31);
			this->time_limit->TabIndex = 71;
			// 
			// time_limitLbl
			// 
			this->time_limitLbl->AutoSize = true;
			this->time_limitLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->time_limitLbl->Location = System::Drawing::Point(337, 164);
			this->time_limitLbl->Name = L"time_limitLbl";
			this->time_limitLbl->Size = System::Drawing::Size(204, 23);
			this->time_limitLbl->TabIndex = 70;
			this->time_limitLbl->Text = L"Time Limit (in seconds):";
			// 
			// no_of_questions
			// 
			this->no_of_questions->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->no_of_questions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->no_of_questions->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->no_of_questions->Location = System::Drawing::Point(547, 199);
			this->no_of_questions->Name = L"no_of_questions";
			this->no_of_questions->Size = System::Drawing::Size(101, 31);
			this->no_of_questions->TabIndex = 73;
			// 
			// no_of_questionsLbl
			// 
			this->no_of_questionsLbl->AutoSize = true;
			this->no_of_questionsLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->no_of_questionsLbl->Location = System::Drawing::Point(349, 201);
			this->no_of_questionsLbl->Name = L"no_of_questionsLbl";
			this->no_of_questionsLbl->Size = System::Drawing::Size(190, 23);
			this->no_of_questionsLbl->TabIndex = 72;
			this->no_of_questionsLbl->Text = L"Number of Questions:";
			// 
			// opening_id
			// 
			this->opening_id->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->opening_id->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->opening_id->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->opening_id->Location = System::Drawing::Point(547, 51);
			this->opening_id->Name = L"opening_id";
			this->opening_id->ReadOnly = true;
			this->opening_id->Size = System::Drawing::Size(86, 31);
			this->opening_id->TabIndex = 75;
			// 
			// opening_idLbl
			// 
			this->opening_idLbl->AutoSize = true;
			this->opening_idLbl->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->opening_idLbl->Location = System::Drawing::Point(434, 53);
			this->opening_idLbl->Name = L"opening_idLbl";
			this->opening_idLbl->Size = System::Drawing::Size(105, 23);
			this->opening_idLbl->TabIndex = 74;
			this->opening_idLbl->Text = L"Opening ID:";
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(434, 18);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->helpTxt1->Size = System::Drawing::Size(228, 19);
			this->helpTxt1->TabIndex = 8;
			this->helpTxt1->Text = L"Edit Assessment Details";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 140);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1157, 383);
			this->tabControl1->TabIndex = 77;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage1->Controls->Add(this->updatedetailsBtn);
			this->tabPage1->Controls->Add(this->helpTxt1);
			this->tabPage1->Controls->Add(this->opening_id);
			this->tabPage1->Controls->Add(this->time_limitLbl);
			this->tabPage1->Controls->Add(this->opening_idLbl);
			this->tabPage1->Controls->Add(this->title);
			this->tabPage1->Controls->Add(this->idLbl);
			this->tabPage1->Controls->Add(this->time_limit);
			this->tabPage1->Controls->Add(this->no_of_questions);
			this->tabPage1->Controls->Add(this->assessmenttitleLbl);
			this->tabPage1->Controls->Add(this->id);
			this->tabPage1->Controls->Add(this->no_of_questionsLbl);
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1149, 347);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Assessment Details";
			this->tabPage1->Click += gcnew System::EventHandler(this, &AssessmentEditor::tabPage1_Click);
			// 
			// updatedetailsBtn
			// 
			this->updatedetailsBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->updatedetailsBtn->Enabled = false;
			this->updatedetailsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updatedetailsBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->updatedetailsBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updatedetailsBtn.Image")));
			this->updatedetailsBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->updatedetailsBtn->Location = System::Drawing::Point(467, 255);
			this->updatedetailsBtn->Name = L"updatedetailsBtn";
			this->updatedetailsBtn->Size = System::Drawing::Size(181, 41);
			this->updatedetailsBtn->TabIndex = 76;
			this->updatedetailsBtn->Text = L"Update Details";
			this->updatedetailsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updatedetailsBtn->UseVisualStyleBackColor = false;
			this->updatedetailsBtn->Click += gcnew System::EventHandler(this, &AssessmentEditor::updatedetailsBtn_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tabPage2->Controls->Add(this->deleteBtn);
			this->tabPage2->Controls->Add(this->updateBtn);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1149, 347);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Question Editor";
			this->tabPage2->Click += gcnew System::EventHandler(this, &AssessmentEditor::tabPage2_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->deleteBtn->Enabled = false;
			this->deleteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(67)), 
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->deleteBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"deleteBtn.Image")));
			this->deleteBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deleteBtn->Location = System::Drawing::Point(141, 6);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(270, 41);
			this->deleteBtn->TabIndex = 84;
			this->deleteBtn->Text = L"Delete Selected Question";
			this->deleteBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &AssessmentEditor::deleteBtn_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->updateBtn->Enabled = false;
			this->updateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)), 
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->updateBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"updateBtn.Image")));
			this->updateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->updateBtn->Location = System::Drawing::Point(15, 6);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(120, 41);
			this->updateBtn->TabIndex = 8;
			this->updateBtn->Text = L"Update";
			this->updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &AssessmentEditor::updateBtn_Click);
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->dataGridView1->Location = System::Drawing::Point(15, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)), 
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), 
				static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(62)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->Size = System::Drawing::Size(1116, 290);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AssessmentEditor::dataGridView1_CellContentClick);
			this->dataGridView1->DefaultValuesNeeded += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &AssessmentEditor::dataGridView1_DefaultValuesNeeded);
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &AssessmentEditor::dataGridView1_RowsAdded);
			// 
			// AssessmentEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(1194, 535);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->mainLbl);
			this->Controls->Add(this->backBtn);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"AssessmentEditor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | Update Assessment";
			this->Load += gcnew System::EventHandler(this, &AssessmentEditor::AssessmentEditor_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AssessmentEditor_Load(System::Object^  sender, System::EventArgs^  e) {
				 	 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand("select id,assessment_id,question_text,option1,option2,option3,option4,correct_option,skilltag from hiregauge.questions where assessment_id='"+this->id->Text+"';", conDataBase);
					 //MySqlDataReader^ myReader;
					 try{
						 sda->SelectCommand = cmdDataBase;
						 sda->Fill(dbdataset);
						 BindingSource^ bSource = gcnew BindingSource();
						 
						 bSource->DataSource = dbdataset;
						 dataGridView1->DataSource = bSource;
						 sda->Update(dbdataset);
						 this->dataGridView1->Columns["id"]->Visible = false;
						 //this->dataGridView1->Columns["assessment_id"]->Visible = false;
						 this->dataGridView1->Columns["question_text"]->HeaderText = "Question Text";
						 this->dataGridView1->Columns["option1"]->HeaderText = "Option #1";
						 this->dataGridView1->Columns["option2"]->HeaderText = "Option #2";
						 this->dataGridView1->Columns["option3"]->HeaderText = "Option #3";
						 this->dataGridView1->Columns["option4"]->HeaderText = "Option #4";
						 this->dataGridView1->Columns["correct_option"]->HeaderText = "Correct Option";
						 this->dataGridView1->Columns["skilltag"]->HeaderText = "Skill Tag";
						 this->dataGridView1->Columns["assessment_id"]->Visible = false;
						 updateBtn->Enabled = true;
						 deleteBtn->Enabled = true;
					 }
					 catch(MySqlException^ ex){
						 updateBtn->Enabled = false;
						 deleteBtn->Enabled = false;
						 MessageBox::Show(ex->Message);
					 }
			 }
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void dataGridView1_DefaultValuesNeeded(System::Object^  sender, System::Windows::Forms::DataGridViewRowEventArgs^  e) {
			 e->Row->Cells["assessment_id"]->Value = id->Text;
		 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	 if (MessageBox::Show("Are you sure you would like to save your changes?","Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
     {
		 	// Count number of rows
			String^ newno_of_questions = ((dataGridView1->Rows->Count)-1).ToString();
			// Update total number of questions in assessment
			String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
			MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			String^ Query;
			msclr::interop::marshal_context context;
			int no_of_questionsval = std::stoi(context.marshal_as<std::string>(newno_of_questions));
			obj->setno_of_questions(no_of_questionsval);
			Query = "update hiregauge.assessments set no_of_questions='"+newno_of_questions+"' where id='"+this->id->Text+"';";
			MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
			MySqlDataReader^ myReader;
			try{
			 conDataBase->Open();
			 myReader = cmdDataBase->ExecuteReader();
			 // Display updated information
			 msclr::interop::marshal_context context;
			 no_of_questions->Text = System::Convert::ToString(obj->getno_of_questions());
			 while(myReader->Read())
			 {
		   	 }
			 myReader->Close();
			 conDataBase->Close();
		  }
		  catch(MySqlException^ ex){
			 MessageBox::Show(ex->Message);
		  }
		  MySqlCommandBuilder^ builder = gcnew MySqlCommandBuilder(sda);
		  // add rows to dataset
		  builder->GetInsertCommand();
		  // delete rows from dataset
		  builder->GetDeleteCommand();
		  // update rows in dataset
		  builder->GetUpdateCommand();
		  //Without the SqlCommandBuilder this line would fail
		  try{
			  sda->Update(dbdataset);
			  MessageBox::Show("The question set has been successfully updated.");
		  }
		  catch(System::Data::DBConcurrencyException^ ex){
			  MessageBox::Show("The changes made to the question set couldn't be registered. Please try again.");
		  }
          dataGridView1->Refresh();
		  conDataBase->Close();
     }
}
private: System::Void updatedetailsBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (opening_id->Text == "" || id->Text == "" || title->Text == "" || time_limit->Text == "" || no_of_questions->Text == ""){
				 MessageBox::Show("Error: You cannot leave any fields blank!");
			 }else if(Convert::ToInt64(time_limit->Text)<0 || Convert::ToInt64(no_of_questions->Text)<0){
				 MessageBox::Show("Error: Negative values are not allowed.");
			 }else{
				 if (MessageBox::Show("Are you sure you would like to save your changes?","Profile Update Confirmation",MessageBoxButtons::YesNo,MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes)
				 {
					 //Don't save changes
				 }else{
					 String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=";
					 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
					 String^ Query;
					 msclr::interop::marshal_context context;
					 std::string titleval = context.marshal_as<std::string>(title->Text);
					 int time_limitval = std::stoi(context.marshal_as<std::string>(time_limit->Text));
					 int no_of_questionsval = std::stoi(context.marshal_as<std::string>(no_of_questions->Text));
					 obj->settitle(titleval);
					 obj->settime_limit(time_limitval);
					 obj->setno_of_questions(no_of_questionsval);
					 Query = "update hiregauge.assessments set title='"+this->title->Text+"', time_limit='"+this->time_limit->Text+"', no_of_questions='"+this->no_of_questions->Text+"' where id='"+this->id->Text+"';";
					 MySqlCommand^cmdDataBase=gcnew MySqlCommand(Query, conDataBase);
					 MySqlDataReader^ myReader;
					 try{
						 conDataBase->Open();
						 myReader = cmdDataBase->ExecuteReader();
						 MessageBox::Show("The assessment details have been updated.");
						 // Display updated information
						 String^ titleVal;
						 msclr::interop::marshal_context context;
						 titleVal = context.marshal_as<String^>(obj->gettitle());
						 time_limit->Text = System::Convert::ToString(obj->gettime_limit());
						 no_of_questions->Text = System::Convert::ToString(obj->getno_of_questions());
						 title->Text = titleVal;
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
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void deleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 for each (DataGridViewRow^ row in dataGridView1->SelectedRows)
			 {
				 try{
					 dataGridView1->Rows->RemoveAt(row->Index);
				 }
				 catch(MySqlException^ ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
			 updateBtn->PerformClick();
		 }
private: System::Void dataGridView1_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		 }
};
}
