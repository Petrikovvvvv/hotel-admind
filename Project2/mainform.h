#pragma once

#include"MyForm2.h"

namespace Project2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for mainform
    /// </summary>
    public ref class mainform : public System::Windows::Forms::Form
    {
    public:
        mainform(void)
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
        ~mainform()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button1;

    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel4;

    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;



    private: System::ComponentModel::IContainer^ components;
    protected:


    protected:




    protected:

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
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel3->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->label2->Location = System::Drawing::Point(54, 222);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(86, 20);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Username";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
                static_cast<System::Int32>(static_cast<System::Byte>(132)));
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->textBox1->Location = System::Drawing::Point(57, 257);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(280, 19);
            this->textBox1->TabIndex = 3;
            this->textBox1->Text = L"Username";
            this->textBox1->Click += gcnew System::EventHandler(this, &mainform::textBox1_Click);
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &mainform::textBox1_TextChanged_1);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(206)));
            this->label3->Location = System::Drawing::Point(54, 326);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(83, 20);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Password";
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
                static_cast<System::Int32>(static_cast<System::Byte>(132)));
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->textBox2->Location = System::Drawing::Point(59, 355);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(280, 19);
            this->textBox2->TabIndex = 5;
            this->textBox2->Text = L"Password";
            this->textBox2->Click += gcnew System::EventHandler(this, &mainform::textBox2_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(249)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(3)),
                static_cast<System::Int32>(static_cast<System::Byte>(34)));
            this->button1->Location = System::Drawing::Point(56, 469);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(281, 44);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Sign-In";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &mainform::button1_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->ForeColor = System::Drawing::Color::White;
            this->panel2->Location = System::Drawing::Point(57, 282);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(281, 2);
            this->panel2->TabIndex = 8;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::White;
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->panel4);
            this->panel3->ForeColor = System::Drawing::Color::White;
            this->panel3->Location = System::Drawing::Point(58, 380);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(281, 2);
            this->panel3->TabIndex = 9;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(156)));
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->ForeColor = System::Drawing::Color::White;
            this->panel4->Location = System::Drawing::Point(0, 7);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(281, 2);
            this->panel4->TabIndex = 8;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
                static_cast<System::Int32>(static_cast<System::Byte>(132)));
            this->panel5->Controls->Add(this->panel1);
            this->panel5->Controls->Add(this->panel2);
            this->panel5->Controls->Add(this->panel3);
            this->panel5->Controls->Add(this->button1);
            this->panel5->Controls->Add(this->textBox2);
            this->panel5->Controls->Add(this->label3);
            this->panel5->Controls->Add(this->textBox1);
            this->panel5->Controls->Add(this->label2);
            this->panel5->Location = System::Drawing::Point(89, -1);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(415, 657);
            this->panel5->TabIndex = 11;
            this->panel5->Click += gcnew System::EventHandler(this, &mainform::otherclick);
            this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainform::panel5_Paint);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(95, 1);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(100, 31);
            this->label1->TabIndex = 11;
            this->label1->Text = L"Sign-In";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
                static_cast<System::Int32>(static_cast<System::Byte>(249)));
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(50, 112);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(289, 39);
            this->panel1->TabIndex = 12;
            // 
            // mainform
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(15, 30);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
                static_cast<System::Int32>(static_cast<System::Byte>(3)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1058, 649);
            this->Controls->Add(this->panel5);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
            this->Margin = System::Windows::Forms::Padding(6);
            this->MaximumSize = System::Drawing::Size(1080, 700);
            this->Name = L"mainform";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"mainform";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
            this->panel3->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void mainform_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox2->Text == "Password")
        {
            textBox2->Text == "";
        }
    }
    private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text == "")
        {
            textBox1->Text = "Username";
        }
        if (textBox2->Text == "")
        {
            textBox2->Text = "Password";
        }
    }
    private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (textBox1->Text == "admin")
        {
            if (textBox2->Text == "root") {
                this->Hide();
                MyForm2^ obj1 = gcnew MyForm2();
                obj1->ShowDialog();
            }
            else
            {
                MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }

        }
    };


    
    };
}