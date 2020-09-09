#pragma once
#include <array>
#include <string>
#include <functional>

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const size_t size_arr = 200;
	const size_t center_arr = size_arr / 2;
	const int begin_x = 27;
	const int begin_y = 66;
	const int step = 22;
	
	enum StatePicture { EMPTY = 0, GREEN, RED};

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	//std::pair< PictureBox^, StatePicture> m_pair;
	/*struct State
	{
		PictureBox^ m = gcnew PictureBox();
		StatePicture state = StatePicture::EMPTY;
	};*/

	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
		ref class MyArr
		{
		public:
			PictureBox^ picture;
			int m_step = 0;
			static int m_index = 0;
			static char* ch = "111";
			bool m_isShip = false;

			
			void init(int index_x, int index_y);
			void clickButton(System::Object^ sender, System::EventArgs^ e);
			void isShip();
		};

	public:
		static char* foo();
		static void box(int index);

		MyForm(void)
		{
			InitializeComponent();
			//IsOpen = true;
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
			//IsOpen = false;
			if (components)
			{
				delete components;
			}
		}

		void fillArray();

		void add();
		
		void endInit();

		void random();

		


	private: System::Windows::Forms::Panel^ panel1;
	
	private:
		  static array <MyArr^, 1>^ m_arr;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;




		  // MyArr ar, ra;
		
	protected:

	private:
	
		delegate void AccountHandler(System::Object^ sender, System::EventArgs^ e);
		event AccountHandler^ Notify;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			fillArray();

			add();

			endInit();
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(219, 36);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(546, 307);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(32, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 48);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 386);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"SeaBattle";
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	fillArray();

	add();

	endInit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
