#pragma once
#include <iostream>
#include <string>    // для std::string
#include <vector>    // для std::vector
#include <fstream>   // для работы с файлами
#include <Windows.h> // для кириллицы
#include <msclr\marshal_cppstd.h> //преобразует как String^ в обычный string, так и другие подобные типы данных

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
	const vector<mappingAlphabetToMorze> lettersCode   //вектор где хранится код морзе
	{ {
		{'А',"·-"},{'Б',"-···"},{'В',"·--"},{'Г',"--·"},
		{'а',"·-"},{'б',"-···"},{'в',"·--"},{'г',"--·"},
		{'Д',"-··"},{'Е',"·"},{'Ж',"···-"},{'З',"--··"},
		{'д',"-··"},{'е',"·"},{'ж',"···-"},{'з',"--··"},
		{'И',"··"},{'Й',"·---"},{'К',"-·-"},{'Л',"·-··"},
		{'и',"··"},{'й',"·---"},{'к',"-·-"},{'л',"·-··"},
		{'М',"--"},{'Н',"-·"},{'О',"---"},{'П',"·--·"},
		{'м',"--"},{'н',"-·"},{'о',"---"},{'п',"·--·"},
		{'Р',"·-·"},{'С',"···"},{'Т',"-"},{'У',"··-"},
		{'р',"·-·"},{'с',"···"},{'т',"-"},{'у',"··-"},
		{'Ф',"··-·"},{'Х',"····"},{'Ц',"-·-·"},{'Ч',"---·"},
		{'ф',"··-·"},{'х',"····"},{'ц',"-·-·"},{'ч',"---·"},
		{'Ш',"----"},{'Щ',"--·-"},{'Ъ',"·--·-·"},{'Ы',"-·--"},
		{'ш',"----"},{'щ',"--·-"},{'ъ',"·--·-·"},{'ы',"-·--"},
		{'Ь',"-··-"},{'Э',"··-··"},{'Ю',"··--"},{'Я',"·-·-"},
		{'ь',"-··-"},{'э',"··-··"},{'ю',"··--"},{'я',"·-·-"},
		{'1',"·----"},{'2',"··---"},{'3',"···--"},{'4',"····-"},
		{'5',"·····"},{'6',"-····"},{'7',"--···"},{'8',"---··"},
		{'9',"----·"},{'0',"-----"}, //{"'","·----·"},
		{'.',"······"},{',',"·-·-·-"},{'!',"--··--"},{'?',"··--··"},
		{'"',"·-··-·"},{';',"-·-·-·"},{':',"---···"},{'-',"-····-"},
		{'+',"·-·-·"},{'_',"··--·-"},{'/',"-··-·"},{'(',"-·--·"},
		{')',"-·--·-"},{'&',"·-···"},{'$',"···-··--"},{'@',"·--·-·"},
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
	/// Сводка для morse
	/// </summary>
	public ref class morse : public System::Windows::Forms::Form
	{
	public:
		morse(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			this->label2->Text = L"Результат конвертирования";
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
			this->label1->Text = L"Исходный текст";
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
			this->button3->Text = L"конвертировать";
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
			this->button1->Text = L"считать из файла";
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
			this->label3->Text = L"Введите путь к файлу";
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
			this->path_to_file->Text = L"C:/Users/Мирик/Desktop/test.txt";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(482, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Сохранить";
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
			this->label4->Text = L"Имя файла";
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
			this->button4->Text = L"очистить";
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
			this->button5->Text = L"выйти из программы";
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
			this->label8->Text = L"Программа для конвертирования текста к код Морзе";
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
			this->label9->Text = L"Звук Морзе";
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
	
		string letterToMorze(const char letter)  //принимает символ и возвращает код Морзе
		{
			for (const auto& element : MorzeCoding::lettersCode)
			{
				if (element.letter == letter)
				{
					return element.Morzecode;
				}
			}
			return "неизвестный символ";
		}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {  //конвертирует текст в код морзе
		string Text; // переменная где будет хранится текст
		if (input_text->Text == "") { //проверка на пустоту текста
			MessageBox::Show("Заполните поле ввода.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		} 
		else if (input_result->Text!="") { // проверка отконвертирован ли текст
			label7->Text = "Текст уже отконвертирован.";
			label7->ForeColor = System::Drawing::Color::Red;
		}
		else { // если все нормально
			Text = marshal_as<std::string>(input_text->Text); // записываем из данные из textbox в нашу переменную text
			for (const auto& symbol : Text) //по очереди берется один символ из текста
			{
				if (symbol == ' ') //если символ пуст
				{
					input_result->Text += "   "; //записывается в textbox как пробел
				}
				else 
				{
	
					string s = letterToMorze(symbol); // и соответствующие ей символы присваиваем в s
				

					input_result->Text += marshal_as<System::String^>(s); // и выводим их
					input_result->Text += " "; // выводи один пробел для читабельности кода
				}
			}
	
			
		}

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // читаем из файла текст
		string str;
		std::ifstream infile; 
		if (input_text->Text!="") { //проверка если ты повторно считываешь данные из файла
			label5->Text = "Данные уже записаны.";
		}
		else { 
			infile.open(marshal_as<std::string>(path_to_file->Text)); //открываем файл
			if (!infile.is_open()) { //если файл не открылся
				MessageBox::Show("Возможно, вы ввели не правильный путь.", "Ошибка открытия файла", MessageBoxButtons::OK, MessageBoxIcon::Warning); //если файл не открывается
			}
			else if (infile.peek() == EOF) { // если файл пуст
				MessageBox::Show("Файл пуст.", "Ошибка ввода значений", MessageBoxButtons::OK, MessageBoxIcon::Warning); // если первый символ конец файла
			}
			else {
				while (!infile.eof()) { //считываем пока файл не пуст
					getline(infile, str);  //считать строку
					input_text->Text += marshal_as<System::String^>(str); //записать строку в textbox
					input_text->Text += " "; //поставить пробел для читабельности текста
				}
				label5->Text = "Данные успешно считаны из файла."; //вывод сообщения об успехе считывании
				label5->ForeColor = System::Drawing::Color::LimeGreen; //красим сообщение в зеленый цвет
			}
			infile.close(); //закрываем файл
		}
	}
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //записываем отконвертированныый текст в файл
	std::ofstream outfile;

		outfile.open(marshal_as<std::string>("C:/Users/Мирик/Desktop/"+file_name->Text+".txt"), std::ofstream::out | std::ofstream::app); //открываем файл
		if (!outfile.is_open()) { //если файл не открылся
			MessageBox::Show("Упс, что то пошло не так.", "Ошибка открытия файла", MessageBoxButtons::OK, MessageBoxIcon::Warning); //если файл не открывается
		}

		else {
			if (input_result->Text == "") { //проверку на пустоту поля откуда мы считываем данные
				MessageBox::Show("Поле откуда вы читаете пустое.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning); 
			}
			else {
				outfile << marshal_as<std::string>(input_result->Text); //записываем наш результат в файл
				label6->Text = "Результат успешно записан в файл.";  //сообщение об успехе
				label6->ForeColor = System::Drawing::Color::LimeGreen; //красим в зеленный
			}
		}
		outfile.close(); //закрываем файл
	}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //очистка всех полей
	input_text->Text = "";
	input_result->Text = "";
	label5->Text = "";
	label6->Text = "";
	label7->Text = "";

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //выход из программы
	exit(0);
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // озвучивание кода Морзе
	string Text;

	if (input_text->Text == "" || input_result->Text == "") { //проверка поля на присутсвие данных
		label7->Text = "Текст еще не конвертиован.";
		label7->ForeColor = System::Drawing::Color::Red;
	}
	else {

		Text = marshal_as<std::string>(input_text->Text);  //присваиваем даные из textbox в нашу переменную

		for (const auto& symbol : Text) //берем по символьно из текста
		{
			if (symbol == ' ') //если символ это пробел
			{
				Sleep(1000); // интервал между словами
			}
			else
			{
				string s = letterToMorze(toupper(symbol)); // и соответствующие ей символы присваиваем в s

				for (int k(0); k < s.size(); ++k)     //это все отвечает за звуки кода морзе
				{
					if (s[k] == '·') // сигнал на "точка"        

					{
						Beep(1500, 200);
					}
					else // сигнал на "тире"
					{
						Beep(1500, 500);
					}
				}
				Sleep(500); // интервал между буквами
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
