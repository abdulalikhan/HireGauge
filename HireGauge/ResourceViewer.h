#pragma once

namespace HireGauge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResourceViewer
	/// </summary>
	public ref class ResourceViewer : public System::Windows::Forms::Form
	{
	public:
		ResourceViewer(String^ Topic, String^ URL)
		{
			InitializeComponent();
			topicLbl->Text = Topic;
			browsercontainer->Text = URL;
			webBrowser1->Navigate(URL);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResourceViewer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  backBtn;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::Windows::Forms::Label^  helpTxt1;
	private: System::Windows::Forms::Label^  topicLbl;
	private: System::Windows::Forms::GroupBox^  browsercontainer;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResourceViewer::typeid));
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->helpTxt1 = (gcnew System::Windows::Forms::Label());
			this->topicLbl = (gcnew System::Windows::Forms::Label());
			this->browsercontainer = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->browsercontainer->SuspendLayout();
			this->SuspendLayout();
			// 
			// backBtn
			// 
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"backBtn.Image")));
			this->backBtn->Location = System::Drawing::Point(2, 2);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(77, 75);
			this->backBtn->TabIndex = 62;
			this->backBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->backBtn->UseVisualStyleBackColor = true;
			this->backBtn->Click += gcnew System::EventHandler(this, &ResourceViewer::backBtn_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(196, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 74);
			this->pictureBox4->TabIndex = 61;
			this->pictureBox4->TabStop = false;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(6, 30);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(801, 375);
			this->webBrowser1->TabIndex = 63;
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &ResourceViewer::webBrowser1_DocumentCompleted);
			// 
			// helpTxt1
			// 
			this->helpTxt1->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpTxt1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->helpTxt1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"helpTxt1.Image")));
			this->helpTxt1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->helpTxt1->Location = System::Drawing::Point(213, 80);
			this->helpTxt1->Name = L"helpTxt1";
			this->helpTxt1->Size = System::Drawing::Size(197, 49);
			this->helpTxt1->TabIndex = 64;
			this->helpTxt1->Text = L"You\'re Viewing: ";
			this->helpTxt1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// topicLbl
			// 
			this->topicLbl->AutoSize = true;
			this->topicLbl->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->topicLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(134)), 
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->topicLbl->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->topicLbl->Location = System::Drawing::Point(405, 91);
			this->topicLbl->Name = L"topicLbl";
			this->topicLbl->Size = System::Drawing::Size(80, 26);
			this->topicLbl->TabIndex = 65;
			this->topicLbl->Text = L"<topic>";
			this->topicLbl->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// browsercontainer
			// 
			this->browsercontainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(43)), 
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->browsercontainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->browsercontainer->Controls->Add(this->webBrowser1);
			this->browsercontainer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->browsercontainer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(187)), 
				static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->browsercontainer->Location = System::Drawing::Point(12, 132);
			this->browsercontainer->Name = L"browsercontainer";
			this->browsercontainer->Size = System::Drawing::Size(813, 411);
			this->browsercontainer->TabIndex = 66;
			this->browsercontainer->TabStop = false;
			this->browsercontainer->Text = L"<url>";
			// 
			// ResourceViewer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(33)), 
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(837, 555);
			this->Controls->Add(this->browsercontainer);
			this->Controls->Add(this->topicLbl);
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
			this->MaximizeBox = false;
			this->Name = L"ResourceViewer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HireGauge | View a Practice Resource";
			this->Load += gcnew System::EventHandler(this, &ResourceViewer::ResourceViewer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->browsercontainer->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ResourceViewer_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void webBrowser1_DocumentCompleted(System::Object^  sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^  e) {
		 }
};
}
