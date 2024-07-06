#pragma once
#include"ViewBookings.h"
#include"adminbooking.h"
#include"rooomamount.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;
    using namespace System::IO;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox8;
	protected:














	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel1;

    private: System::Windows::Forms::Button^ button4;


    private: System::Windows::Forms::TextBox^ roomsbooking;


    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ bookingcount;
    private: System::Windows::Forms::TextBox^ textBox1;

    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ Roomsleft;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel4;









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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->roomsbooking = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->bookingcount = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->Roomsleft = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox8
            // 
            this->textBox8->BackColor = System::Drawing::Color::Black;
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBox8->Location = System::Drawing::Point(795, 476);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(140, 35);
            this->textBox8->TabIndex = 0;
            this->textBox8->Text = L"Booking";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Black;
            this->button4->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button4->Location = System::Drawing::Point(725, 147);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(273, 432);
            this->button4->TabIndex = 5;
            this->button4->Text = L"Reserve Booking";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
            // 
            // roomsbooking
            // 
            this->roomsbooking->BackColor = System::Drawing::Color::Black;
            this->roomsbooking->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->roomsbooking->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->roomsbooking->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->roomsbooking->Location = System::Drawing::Point(816, 434);
            this->roomsbooking->Name = L"roomsbooking";
            this->roomsbooking->Size = System::Drawing::Size(94, 35);
            this->roomsbooking->TabIndex = 4;
            this->roomsbooking->Text = L"298";
            this->roomsbooking->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->Location = System::Drawing::Point(834, 8);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(38, 36);
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(245)));
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
                static_cast<System::Int32>(static_cast<System::Byte>(166)));
            this->button1->Location = System::Drawing::Point(895, 6);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(155, 40);
            this->button1->TabIndex = 3;
            this->button1->Text = L"Log-Out";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(245)));
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(76)),
                static_cast<System::Int32>(static_cast<System::Byte>(166)));
            this->textBox3->Location = System::Drawing::Point(21, 5);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(198, 41);
            this->textBox3->TabIndex = 2;
            this->textBox3->Text = L"Dashboard";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(245)));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Location = System::Drawing::Point(0, 21);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1062, 52);
            this->panel1->TabIndex = 5;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(90)));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button3->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::White;
            this->button3->Location = System::Drawing::Point(72, 147);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(273, 432);
            this->button3->TabIndex = 4;
            this->button3->Text = L"View Bookings";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
            // 
            // bookingcount
            // 
            this->bookingcount->AutoSize = true;
            this->bookingcount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(90)));
            this->bookingcount->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bookingcount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->bookingcount->Location = System::Drawing::Point(194, 434);
            this->bookingcount->Name = L"bookingcount";
            this->bookingcount->Size = System::Drawing::Size(30, 40);
            this->bookingcount->TabIndex = 5;
            this->bookingcount->Text = L"2";
            this->bookingcount->Click += gcnew System::EventHandler(this, &MyForm2::bookingcount_Click);
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(90)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBox1->Location = System::Drawing::Point(117, 476);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(187, 35);
            this->textBox1->TabIndex = 0;
            this->textBox1->Text = L"Total Bookings";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->textBox6->Location = System::Drawing::Point(434, 476);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(187, 35);
            this->textBox6->TabIndex = 0;
            this->textBox6->Text = L"Room Status";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox6_TextChanged);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->button2->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->button2->Location = System::Drawing::Point(400, 147);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(273, 432);
            this->button2->TabIndex = 5;
            this->button2->Text = L"View Rooms";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
            // 
            // Roomsleft
            // 
            this->Roomsleft->AutoSize = true;
            this->Roomsleft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->Roomsleft->Font = (gcnew System::Drawing::Font(L"Poppins", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Roomsleft->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->Roomsleft->Location = System::Drawing::Point(497, 434);
            this->Roomsleft->Name = L"Roomsleft";
            this->Roomsleft->Size = System::Drawing::Size(59, 40);
            this->Roomsleft->TabIndex = 6;
            this->Roomsleft->Text = L"298";
            this->Roomsleft->Click += gcnew System::EventHandler(this, &MyForm2::Roomsleft_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
                static_cast<System::Int32>(static_cast<System::Byte>(90)));
            this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel2->ForeColor = System::Drawing::Color::White;
            this->panel2->Location = System::Drawing::Point(175, 244);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(64, 62);
            this->panel2->TabIndex = 7;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(113)));
            this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel3->ForeColor = System::Drawing::Color::White;
            this->panel3->Location = System::Drawing::Point(495, 234);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(68, 72);
            this->panel3->TabIndex = 8;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Black;
            this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel4->ForeColor = System::Drawing::Color::White;
            this->panel4->Location = System::Drawing::Point(831, 234);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(68, 72);
            this->panel4->TabIndex = 9;
            // 
            // MyForm2
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(238)));
            this->ClientSize = System::Drawing::Size(1062, 653);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->roomsbooking);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->Roomsleft);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->bookingcount);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->Name = L"MyForm2";
            this->Text = L"MyForm2";
            this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        String^ connstring = "Server=localhost;port=3306;database=appointment;uid=root;password=manman";

        MySqlConnection^ conn = gcnew MySqlConnection(connstring);

	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    ViewBookings^ vbs = gcnew ViewBookings(this);
    vbs->Show();
    Hide();
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {


    try
    {
        conn->Open();

        MySqlCommand^ cmd = gcnew MySqlCommand("SELECT COUNT(*) FROM appointment_d", conn);
        int count1 = Convert::ToInt32(cmd->ExecuteScalar());
        bookingcount->Text = count1.ToString();

        int adjustedcount =  300 - count1;
        Roomsleft->Text = adjustedcount.ToString();
        roomsbooking->Text = adjustedcount.ToString();
            
        conn->Close();


    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Error: " + ex->Message);
    }
    
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    rooomamount^ rms = gcnew rooomamount(this);
    rms->Show();
    Hide();

}
private: System::Void Roomsleft_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bookingcount_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    adminbooking^ adb = gcnew adminbooking(this);
    adb->Show();
    Hide();

}
};
}

