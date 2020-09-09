#pragma once
#include <vector>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    protected:
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Panel^ panel6;








































































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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel1.BackgroundImage")));
            this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            this->tableLayoutPanel1->ColumnCount = 26;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                66.66666F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                19)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                19)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                24)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                19)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                21)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                21)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                19)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                18)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                24)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                19)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                21)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->Controls->Add(this->panel1, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->panel7, 3, 2);
            this->tableLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->tableLayoutPanel1->Location = System::Drawing::Point(304, 17);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 13;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 36.11111F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 63.88889F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(590, 282);
            this->tableLayoutPanel1->TabIndex = 3;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button6->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button6->Location = System::Drawing::Point(31, 89);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(18, 13);
            this->button6->TabIndex = 5;
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button5->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button5->Location = System::Drawing::Point(31, 68);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(18, 13);
            this->button5->TabIndex = 4;
            this->button5->UseVisualStyleBackColor = false;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button3->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button3->Location = System::Drawing::Point(31, 47);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(18, 13);
            this->button3->TabIndex = 1;
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button4->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button4->Location = System::Drawing::Point(31, 26);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(18, 13);
            this->button4->TabIndex = 0;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button1->Location = System::Drawing::Point(31, 5);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(18, 13);
            this->button1->TabIndex = 2;
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button2->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button2->Location = System::Drawing::Point(31, 193);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(18, 18);
            this->button2->TabIndex = 3;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button7->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button7->Location = System::Drawing::Point(5, 172);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(18, 13);
            this->button7->TabIndex = 6;
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button8->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button8->Location = System::Drawing::Point(5, 154);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(18, 10);
            this->button8->TabIndex = 7;
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button9->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button9->Location = System::Drawing::Point(5, 131);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(18, 13);
            this->button9->TabIndex = 8;
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button10->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button10->Location = System::Drawing::Point(5, 110);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(18, 13);
            this->button10->TabIndex = 9;
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button11->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button11->Location = System::Drawing::Point(5, 89);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(18, 13);
            this->button11->TabIndex = 10;
            this->button11->UseVisualStyleBackColor = false;
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button12->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button12->Location = System::Drawing::Point(5, 68);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(18, 13);
            this->button12->TabIndex = 11;
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button14->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
            this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button14->Font = (gcnew System::Drawing::Font(L"Sylfaen", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button14->Location = System::Drawing::Point(5, 26);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(18, 13);
            this->button14->TabIndex = 13;
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button15->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
            this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button15->Font = (gcnew System::Drawing::Font(L"Sylfaen", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button15->Location = System::Drawing::Point(5, 5);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(18, 13);
            this->button15->TabIndex = 14;
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button16->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button16->Location = System::Drawing::Point(31, 110);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(18, 13);
            this->button16->TabIndex = 15;
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // button17
            // 
            this->button17->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button17->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button17->Location = System::Drawing::Point(31, 131);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(18, 13);
            this->button17->TabIndex = 16;
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button18->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button18->Location = System::Drawing::Point(31, 154);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(18, 10);
            this->button18->TabIndex = 17;
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button19->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button19->Location = System::Drawing::Point(31, 172);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(18, 13);
            this->button19->TabIndex = 18;
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button20->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button20->Location = System::Drawing::Point(57, 193);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(18, 18);
            this->button20->TabIndex = 19;
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->tableLayoutPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel2.BackgroundImage")));
            this->tableLayoutPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->tableLayoutPanel2->CausesValidation = false;
            this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
            this->tableLayoutPanel2->ColumnCount = 10;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                10)));
            this->tableLayoutPanel2->Controls->Add(this->button21, 0, 9);
            this->tableLayoutPanel2->Controls->Add(this->button20, 1, 9);
            this->tableLayoutPanel2->Controls->Add(this->button19, 1, 8);
            this->tableLayoutPanel2->Controls->Add(this->button18, 1, 7);
            this->tableLayoutPanel2->Controls->Add(this->button17, 1, 6);
            this->tableLayoutPanel2->Controls->Add(this->button16, 1, 5);
            this->tableLayoutPanel2->Controls->Add(this->button15, 0, 0);
            this->tableLayoutPanel2->Controls->Add(this->button14, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->button13, 0, 2);
            this->tableLayoutPanel2->Controls->Add(this->button12, 0, 3);
            this->tableLayoutPanel2->Controls->Add(this->button11, 0, 4);
            this->tableLayoutPanel2->Controls->Add(this->button10, 0, 5);
            this->tableLayoutPanel2->Controls->Add(this->button9, 0, 6);
            this->tableLayoutPanel2->Controls->Add(this->button8, 0, 7);
            this->tableLayoutPanel2->Controls->Add(this->button7, 0, 8);
            this->tableLayoutPanel2->Controls->Add(this->button2, 0, 9);
            this->tableLayoutPanel2->Controls->Add(this->button1, 1, 0);
            this->tableLayoutPanel2->Controls->Add(this->button4, 1, 1);
            this->tableLayoutPanel2->Controls->Add(this->button3, 1, 2);
            this->tableLayoutPanel2->Controls->Add(this->button5, 1, 3);
            this->tableLayoutPanel2->Controls->Add(this->button6, 1, 4);
            this->tableLayoutPanel2->Location = System::Drawing::Point(1, 12);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 10;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.16279F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.372093F)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(262, 217);
            this->tableLayoutPanel2->TabIndex = 2;
            this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel2_Paint);
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button13->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
            this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ActiveCaption;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button13->Font = (gcnew System::Drawing::Font(L"Sylfaen", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button13->Location = System::Drawing::Point(5, 47);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(18, 13);
            this->button13->TabIndex = 12;
            this->button13->UseVisualStyleBackColor = false;
            // 
            // panel1
            // 
            this->panel1->Location = System::Drawing::Point(43, 41);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(13, 13);
            this->panel1->TabIndex = 4;
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::CornflowerBlue;
            this->button21->Font = (gcnew System::Drawing::Font(L"Wingdings 2", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(2)));
            this->button21->Location = System::Drawing::Point(5, 193);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(18, 13);
            this->button21->TabIndex = 20;
            this->button21->UseVisualStyleBackColor = false;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->panel3);
            this->panel2->Location = System::Drawing::Point(466, 187);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(13, 13);
            this->panel2->TabIndex = 5;
            // 
            // panel3
            // 
            this->panel3->Controls->Add(this->panel4);
            this->panel3->Location = System::Drawing::Point(0, 0);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(13, 13);
            this->panel3->TabIndex = 5;
            // 
            // panel4
            // 
            this->panel4->Controls->Add(this->panel5);
            this->panel4->Location = System::Drawing::Point(0, 0);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(13, 13);
            this->panel4->TabIndex = 5;
            // 
            // panel5
            // 
            this->panel5->Controls->Add(this->panel6);
            this->panel5->Location = System::Drawing::Point(0, 0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(13, 13);
            this->panel5->TabIndex = 5;
            // 
            // panel6
            // 
            this->panel6->Location = System::Drawing::Point(0, 0);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(13, 13);
            this->panel6->TabIndex = 5;
            // 
            // panel7
            // 
            this->panel7->Location = System::Drawing::Point(69, 38);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(13, 13);
            this->panel7->TabIndex = 5;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(945, 386);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Name = L"MyForm";
            this->Text = L"SeaBattle";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	//this->pictureBox2->ImageLocation = L"D:\\WorkSpaceForBohdan\\Project2\\images\\left.png";
}



private: System::Void tableLayoutPanel1_Paint_2(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
