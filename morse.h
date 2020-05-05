#pragma once
#include <iostream>
#include <string>    // ��� std::string
#include <vector>    // ��� std::vector
#include <fstream>   // ��� ������ � �������
#include <Windows.h> // ��� ���������
#include <msclr\marshal_cppstd.h> //����������� ��� String^ � ������� string, ��� � ������ �������� ���� ������

using namespace System::Runtime::InteropServices;
using namespace msclr::interop;
using namespace std;

struct mappingAlphabetToMorze 
{
	char letter;
	string Morzecode;
};
namespace MorzeCoding
{
	const vector<mappingAlphabetToMorze> lettersCode   //������ ��� �������� ��� �����
	{ {
		{'�',"�-"},{'�',"-���"},{'�',"�--"},{'�',"--�"},
		{'�',"�-"},{'�',"-���"},{'�',"�--"},{'�',"--�"},
		{'�',"-��"},{'�',"�"},{'�',"���-"},{'�',"--��"},
		{'�',"-��"},{'�',"�"},{'�',"���-"},{'�',"--��"},
		{'�',"��"},{'�',"�---"},{'�',"-�-"},{'�',"�-��"},
		{'�',"��"},{'�',"�---"},{'�',"-�-"},{'�',"�-��"},
		{'�',"--"},{'�',"-�"},{'�',"---"},{'�',"�--�"},
		{'�',"--"},{'�',"-�"},{'�',"---"},{'�',"�--�"},
		{'�',"�-�"},{'�',"���"},{'�',"-"},{'�',"��-"},
		{'�',"�-�"},{'�',"���"},{'�',"-"},{'�',"��-"},
		{'�',"��-�"},{'�',"����"},{'�',"-�-�"},{'�',"---�"},
		{'�',"��-�"},{'�',"����"},{'�',"-�-�"},{'�',"---�"},
		{'�',"----"},{'�',"--�-"},{'�',"�--�-�"},{'�',"-�--"},
		{'�',"----"},{'�',"--�-"},{'�',"�--�-�"},{'�',"-�--"},
		{'�',"-��-"},{'�',"��-��"},{'�',"��--"},{'�',"�-�-"},
		{'�',"-��-"},{'�',"��-��"},{'�',"��--"},{'�',"�-�-"},
		{'1',"�----"},{'2',"��---"},{'3',"���--"},{'4',"����-"},
		{'5',"�����"},{'6',"-����"},{'7',"--���"},{'8',"---��"},
		{'9',"----�"},{'0',"-----"}, //{"'","�----�"},
		{'.',"������"},{',',"�-�-�-"},{'!',"--��--"},{'?',"��--��"},
		{'"',"�-��-�"},{';',"-�-�-�"},{':',"---���"},{'-',"-����-"},
		{'+',"�-�-�"},{'_',"��--�-"},{'/',"-��-�"},{'(',"-�--�"},
		{')',"-�--�-"},{'&',"�-���"},{'$',"���-��--"},{'@',"�--�-�"},
	} };
}



namespace AlphabetMorse2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� morse
	/// </summary>
	public ref class morse : public System::Windows::Forms::Form
	{
	public:
		morse(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~morse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_result;
	private: System::Windows::Forms::TextBox^ input_text;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ path_to_file;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ file_name;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::Label^ label9;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(morse::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_result = (gcnew System::Windows::Forms::TextBox());
			this->input_text = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->path_to_file = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->file_name = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 24);
			this->label2->TabIndex = 12;
			this->label2->Text = L"��������� ���������������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 24);
			this->label1->TabIndex = 11;
			this->label1->Text = L"�������� �����";
			// 
			// input_result
			// 
			this->input_result->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_result->Location = System::Drawing::Point(23, 64);
			this->input_result->Multiline = true;
			this->input_result->Name = L"input_result";
			this->input_result->Size = System::Drawing::Size(337, 75);
			this->input_result->TabIndex = 10;
			// 
			// input_text
			// 
			this->input_text->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_text->Location = System::Drawing::Point(11, 56);
			this->input_text->Multiline = true;
			this->input_text->Name = L"input_text";
			this->input_text->Size = System::Drawing::Size(349, 75);
			this->input_text->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(16, 469);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 44);
			this->button3->TabIndex = 8;
			this->button3->Text = L"��������������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &morse::button3_Click);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(406, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"������� �� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &morse::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(402, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"������� ���� � �����";
			// 
			// path_to_file
			// 
			this->path_to_file->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->path_to_file->Location = System::Drawing::Point(405, 67);
			this->path_to_file->Multiline = true;
			this->path_to_file->Name = L"path_to_file";
			this->path_to_file->Size = System::Drawing::Size(220, 31);
			this->path_to_file->TabIndex = 13;
			this->path_to_file->Text = L"C:/Users/�����/Desktop/test.txt";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(482, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 17;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &morse::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(479, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 19);
			this->label4->TabIndex = 16;
			this->label4->Text = L"��� �����";
			this->label4->Click += gcnew System::EventHandler(this, &morse::label4_Click);
			// 
			// file_name
			// 
			this->file_name->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->file_name->Location = System::Drawing::Point(482, 55);
			this->file_name->Multiline = true;
			this->file_name->Name = L"file_name";
			this->file_name->Size = System::Drawing::Size(133, 31);
			this->file_name->TabIndex = 15;
			this->file_name->Text = L"result";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(403, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 14);
			this->label5->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(480, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 14);
			this->label6->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(194, 469);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 44);
			this->button4->TabIndex = 20;
			this->button4->Text = L"��������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &morse::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(20, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 14);
			this->label7->TabIndex = 21;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(499, 469);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 47);
			this->button5->TabIndex = 22;
			this->button5->Text = L"����� �� ���������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &morse::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Location = System::Drawing::Point(16, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(634, 87);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(27, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(565, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"��������� ��� ��������������� ������ � ��� �����";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox2->Controls->Add(this->path_to_file);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->input_text);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(16, 115);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(634, 159);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->file_name);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->input_result);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(16, 289);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(634, 159);
			this->groupBox3->TabIndex = 25;
			this->groupBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(375, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"���� �����";
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(395, 105);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 34);
			this->button6->TabIndex = 22;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &morse::button6_Click);
			// 
			// morse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(669, 530);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"morse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &morse::morse_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		string letterToMorze(const char letter)  //��������� ������ � ���������� ��� �����
		{
			for (const auto& element : MorzeCoding::lettersCode)
			{
				if (element.letter == letter)
				{
					return element.Morzecode;
				}
			}
			return "����������� ������";
		}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {  //������������ ����� � ��� �����
		string Text; // ���������� ��� ����� �������� �����
		if (input_text->Text == "") { //�������� �� ������� ������
			MessageBox::Show("��������� ���� �����.", "������ �����", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		} 
		else if (input_result->Text!="") { // �������� ��������������� �� �����
			label7->Text = "����� ��� ���������������.";
			label7->ForeColor = System::Drawing::Color::Red;
		}
		else { // ���� ��� ���������
			Text = marshal_as<std::string>(input_text->Text); // ���������� �� ������ �� textbox � ���� ���������� text
			for (const auto& symbol : Text) //�� ������� ������� ���� ������ �� ������
			{
				if (symbol == ' ') //���� ������ ����
				{
					input_result->Text += "   "; //������������ � textbox ��� ������
				}
				else 
				{
	
					string s = letterToMorze(symbol); // � ��������������� �� ������� ����������� � s
				

					input_result->Text += marshal_as<System::String^>(s); // � ������� ��
					input_result->Text += " "; // ������ ���� ������ ��� ������������� ����
				}
			}
	
			
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // ������ �� ����� �����
		string str;
		std::ifstream infile; 
		if (input_text->Text!="") { //�������� ���� �� �������� ���������� ������ �� �����
			label5->Text = "������ ��� ��������.";
		}
		else { 
			infile.open(marshal_as<std::string>(path_to_file->Text)); //��������� ����
			if (!infile.is_open()) { //���� ���� �� ��������
				MessageBox::Show("��������, �� ����� �� ���������� ����.", "������ �������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning); //���� ���� �� �����������
			}
			else if (infile.peek() == EOF) { // ���� ���� ����
				MessageBox::Show("���� ����.", "������ ����� ��������", MessageBoxButtons::OK, MessageBoxIcon::Warning); // ���� ������ ������ ����� �����
			}
			else {
				while (!infile.eof()) { //��������� ���� ���� �� ����
					getline(infile, str);  //������� ������
					input_text->Text += marshal_as<System::String^>(str); //�������� ������ � textbox
					input_text->Text += " "; //��������� ������ ��� ������������� ������
				}
				label5->Text = "������ ������� ������� �� �����."; //����� ��������� �� ������ ����������
				label5->ForeColor = System::Drawing::Color::LimeGreen; //������ ��������� � ������� ����
			}
			infile.close(); //��������� ����
		}
	}
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //���������� ������������������� ����� � ����
	std::ofstream outfile;

		outfile.open(marshal_as<std::string>("C:/Users/�����/Desktop/"+file_name->Text+".txt"), std::ofstream::out | std::ofstream::app); //��������� ����
		if (!outfile.is_open()) { //���� ���� �� ��������
			MessageBox::Show("���, ��� �� ����� �� ���.", "������ �������� �����", MessageBoxButtons::OK, MessageBoxIcon::Warning); //���� ���� �� �����������
		}

		else {
			if (input_result->Text == "") { //�������� �� ������� ���� ������ �� ��������� ������
				MessageBox::Show("���� ������ �� ������� ������.", "��������������", MessageBoxButtons::OK, MessageBoxIcon::Warning); 
			}
			else {
				outfile << marshal_as<std::string>(input_result->Text); //���������� ��� ��������� � ����
				label6->Text = "��������� ������� ������� � ����.";  //��������� �� ������
				label6->ForeColor = System::Drawing::Color::LimeGreen; //������ � ��������
			}
		}
		outfile.close(); //��������� ����
	}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //������� ���� �����
	input_text->Text = "";
	input_result->Text = "";
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //����� �� ���������
	exit(0);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // ����������� ���� �����
	string Text;

	if (input_text->Text == "" || input_result->Text == "") { //�������� ���� �� ���������� ������
		label7->Text = "����� ��� �� ������������.";
		label7->ForeColor = System::Drawing::Color::Red;
	}
	else {

		Text = marshal_as<std::string>(input_text->Text);  //����������� ����� �� textbox � ���� ����������

		for (const auto& symbol : Text) //����� �� ��������� �� ������
		{
			if (symbol == ' ') //���� ������ ��� ������
			{
				Sleep(1000); // �������� ����� �������
			}
			else
			{
				string s = letterToMorze(toupper(symbol)); // � ��������������� �� ������� ����������� � s

				for (int k(0); k < s.size(); ++k)     //��� ��� �������� �� ����� ���� �����
				{
					if (s[k] == '�') // ������ �� "�����"        

					{
						Beep(1500, 200);
					}
					else // ������ �� "����"
					{
						Beep(1500, 500);
					}
				}
				Sleep(500); // �������� ����� �������
			}
		}


	}
}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void morse_Load(System::Object^ sender, System::EventArgs^ e) {

}


};
}
