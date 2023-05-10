#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
#include<sstream>
using namespace std;

class ConsoleIO
{
public:
	static float CheckOnInt(float a)
	{
		if (static_cast<int>(a) != a)
		{
			throw a;
		}
		else
		{
			return a;
		}
	}
	static int GetText()
	{
		int value;
		cin >> value;
		return value;
	}
	static float GetValue()
	{
		float value;
		cin >> value;
		return value;
	}
	static float GetInt()
	{
		int i = 0;
		float value;
		while (i == 0)
		{
			cin >> value;
			try
			{
				float value1 = CheckOnInt(value);
				i++;
				return value1;
			}
			catch (const float a)
			{
				cout << "no " << endl;

			}
		}

	}
	static float G(float a)
	{
		int i = 0;
		while (i == 0 || i == 2)
		{
			if (i == 2)
			{
				cin >> a;
				i = 0;
			}
			try
			{
				float a1 = CheckOnInt(a);
				i++;
				return a1;
			}
			catch (const float a)
			{
				cout << "no " << endl;

				i += 2;
			}
		}
	}
};


class Date
{
	string year;
	string month;
	string day;
public:

	Date()
	{
		//year = 0;
		//month = 0;
		//day = 0;
	}


	string getYear()
	{
		return year;
	}
	void setYear(string year)
	{
		this->year = year;
	}

	string getMonth()
	{
		return month;
	}
	void setMonth(string month)
	{
		this->month = month;
	}

	string getDay()
	{
		return day;
	}
	void setDay(string day)
	{
		this->day = day;
	}
};

class Time
{
	string hour;
	string minute;
	string second;
public:

	Time()
	{
		//second = 0;
	}


	string getHour()
	{
		return hour;
	}
	void setHour(string hour)
	{
		this->hour = hour;
	}
	string getMinute()
	{
		return minute;
	}
	void setMinute(string minute)
	{
		this->minute = minute;
	}
	string getSecond()
	{
		return second;
	}
	void setSecond(string second)
	{
		this->second = second;
	}


};

class Program
{
protected:
	string name;
	string type;
	Date date;
	Time time;
public:
	string getHour()
	{
		return time.getHour();
	}
	void setHour(string hour)
	{
		time.setHour(hour);
	}
	string getMinute()
	{
		return time.getMinute();
	}
	void setMinute(string minute)
	{
		time.setMinute(minute);
	}
	string getSecond()
	{
		return time.getSecond();
	}
	void setSecond(string second)
	{
		time.setSecond(second);
	}


	string getYear()
	{
		return date.getYear();
	}
	void setYear(string year)
	{
		date.setYear(year);
	}
	string getMonth()
	{
		return date.getMonth();
	}
	void setMonth(string month)
	{
		date.setMonth(month);
	}

	string getDay()
	{
		return date.getDay();
	}
	void setDay(string day)
	{
		date.setDay(day);
	}



	string getName()
	{
		return name;
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getType()
	{
		return type;
	}
	void setType(string type)
	{
		this->type = type;
	}
	
	Program() {}
	Program(string n, string t) : name(n), type(t) {}
	virtual ~Program() {}

	virtual void display() const // віртуальний метод виведення
	{
		cout << "Program name: " << name << endl;
		cout << "Program type: " << type << endl;
	}
	
};



class ProgramSchedule {
private:
	Program* programs; // масив об'єктів класу Program
	int size; // розмір масиву
public:
	ProgramSchedule(int size) {
		this->size = size;
		programs = new Program[size];
	}

	~ProgramSchedule() {
		delete[] programs;
	}

	// Гетер та сетер для елемента масиву programs
	Program& operator[](int index) {
		return programs[index];
	}

	// Виведення всіх програм у розкладі
	void display() const {
		for (int i = 0; i < size; i++) {
			programs[i].display();
			cout << endl;
		}
	}
};




istream& operator >> (istream& in, Program& Program)
{
	cout << endl;
	cout << "Program" << endl;
	cout << "name  ";
	string n;
	in >> n;
	Program.setName(n);
	cout << "type  ";
	string t;
	in >> t;
	Program.setType(t);
	cout << endl;
	cout << "Time " << endl;


	cout << "hour ";
	string h;
	cin >> h;
	try {
		int hour = stoi(h);
		if (hour > 24 || hour < 1) {
			throw "Number must be less than or equal to 24.";
		}
		Program.setHour(h);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}

	cout << "minute ";
	string i;
	cin >> i;
	try {
		int minute = stoi(i);
		if (minute > 60 || minute < 1) {
			throw "Number must be less than or equal to 60.";
		}
		Program.setMinute(i);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}


	cout << "second ";
	string s;
	cin >> s;
	try {
		int second = stoi(s);
		if (second > 60 || second < 1) {
			throw "Number must be less than or equal to 60.";
		}
		Program.setSecond(s);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}

	//ConsoleIO::G(n);

	cout << "Date:" << endl;
	cout << "Year: ";
	string y;
	cin >> y;
	try {
		int year = stoi(y);
		if (year < 2020) {
			throw "Number must be less than or equal to 2020.";
		}
		Program.setYear(y);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}
	cout << "month ";
	string m;
	cin >> m;
	try {
		int month = stoi(m);
		if (month > 12 || month < 1) {
			throw "Number must be less than or equal to 12.";
		}
		Program.setMonth(m);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}
	cout << "day ";
	string d;
	cin >> d;
	try {
		int day = stoi(d);
		if (day > 31 || day < 1) {
			throw "Number must be less than or equal to 31.";
		}
		Program.setDay(d);
	}
	catch (const char* errorMessage) {
		cerr << "Error: " << errorMessage << endl;
	}
	catch (...) {
		cerr << "Unknown error occurred." << endl;
	}
	//ConsoleIO::G(n); // не знаю чому тут (b)  
	return in;
}



ostream& operator << (ostream& out, Program& program)
{
	out << endl;
	out << "Name " << program.getName() << endl;
	out << "Type " << program.getType() << endl;//type
	out << "program " << endl;
	out << "hour " << program.getHour() << endl;
	out << "minute " << program.getMinute() << endl;
	out << "second " << program.getSecond() << endl;
	out << "Date" << endl;
	out << "year " << program.getYear() << endl;  //можливо помилки виже в верх/ниж регістрі року та місяці
	out << "month " << program.getMonth() << endl;
	out << "day " << program.getDay() << endl;
	out << endl;
	return out;
}

void Output1(Program & program )
{
	cout << endl;
	cout << "\tName " << program .getName() << endl;
	cout << "\tType " << program .getType() << endl;// type
	cout << "\tTime " << endl;
	cout << "\thour " << program.getHour() << endl;
	cout << "\tminute " << program .getMinute() << endl;
	cout << "\tsecond" << program .getSecond() << endl;
	cout << "\tDate" << endl;
	cout << "\tyear " << program .getYear() << endl;
	cout << "\tmonth " << program .getMonth() << endl;
	cout << "\tday " << program .getDay() << endl;
	cout << endl;
}

class TimeIO
{
public:
	void Input(Program& program)
	{
		cin >> program;
	}
	void Output(Program& program)
	{
		cout << program;
	}
	void Output2(Program& program)
	{
		Output1(program);
	}
};



class ProgramManager
{


	int TimeCount = ConsoleIO::GetInt();
	Program* programs = new Program[TimeCount];
	TimeIO* IOWorker = new TimeIO();
public:
	ProgramManager()
	{

	}
	~ProgramManager(void)
	{
		delete[] programs;
		delete IOWorker;
	}

	void fillPrograms()
	{
		for (int i = 0; i < TimeCount; i++)
		{
			IOWorker->Input(programs[i]);
		}
	}
	void Show()
	{
		cout << endl;
		cout << "list" << endl;
		for (int i = 0; i < TimeCount; i++)
		{
			IOWorker->Output(programs[i]);
		}
	}
	void AddPrograms1()
	{

		AddPrograms(programs, TimeCount);
	}
	void AddPrograms(Program*& programs, int& TimeCount)
	{
		Program* newProgram = new Program[TimeCount + 1];

		for (int i = 0; i < TimeCount; i++)
		{
			newProgram[i] = programs[i];
		}

		IOWorker->Input(newProgram[TimeCount]);

		TimeCount++;

		delete[] programs;

		programs = newProgram;
	}
	void deletePrograms1()
	{
		deletePrograms(programs, TimeCount);
	}
	void deletePrograms(Program*& programs, int& TimeCount)
	{
		Program* newProgram = new Program[TimeCount - 1];

		for (int i = 0; i < TimeCount - 1; i++)
		{
			newProgram[i] = programs[i];
		}

		TimeCount--;

		delete[] programs;

		programs = newProgram;
	}




	void FindProgram() 
	{
		string n;
		cout << "\tenter name : ";
		cin >> n;
		for (int i = 0; i < TimeCount; i++)
		{
			if (n == programs[i].getName())
			{
				IOWorker->Output2(programs[i]);
			}
		}
	}

};




class Transmission : public Program
{
private:
	string date;
	string time;

public:
	Transmission() {}
	Transmission(string n, string t, string d, string ti) : Program(n, t), date(d), time(ti) {}
	~Transmission() {}

	void display() const // віртуальний метод виведення
	{
		cout << "Transmission name: " << name << endl;
		cout << "Transmission type: " << type << endl;
		cout << "Transmission date: " << date << endl;
		cout << "Transmission time: " << time << endl;
	}

	friend istream& operator>>(istream& in, Transmission& t)
	{
		cout << "Enter transmission name: ";
		getline(in, t.name);
		cout << "Enter transmission type: ";
		getline(in, t.type);
		cout << "Enter transmission date (dd/mm/yyyy): ";
		getline(in, t.date);
		cout << "Enter transmission time (hh:mm): ";
		getline(in, t.time);

		return in;
	}

	friend ostream& operator<<(ostream& out, Transmission& t)
	{
		out << "Transmission name: " << t.name << endl;
		out << "Transmission type: " << t.type << endl;
		out << "Transmission date: " << t.date << endl;
		out << "Transmission time: " << t.time << endl;

		return out;
	}
};


int stateMenu;
void Menu()
{
	cout << "menu" << endl
		<< "make a choice" << endl
		<< "(1) fill the programs" << endl
		<< "(2) show programs" << endl
		<< "(3) add new programs" << endl
		<< "(4) remove programs" << endl
		<< "(6) search" << endl
		<< "(0) exit" << endl
		<< "Your choice: ";
	stateMenu = ConsoleIO::GetInt();
	cout << endl;
}
void Menu1()  // це з пункту 6 пошук але ти видалила всі пошуки тому додай їх з qqq1 або ні :)
{
	cout << "\tsearch menu" << endl
		<< "\t(1) search by name" << endl
		<< "\t(0) exit" << endl
		<< "\t:Your choice ";
	stateMenu = ConsoleIO::GetInt();
	cout << endl;
}
int main()
{
	Program* program1 = new Transmission("The news", "News", "01-04-2023", "19:00"); // поліморфічний вказівник
	program1->display(); // виклик віртуального методу виведення (пізнє зв'язування)
	delete program1; // звільнення пам'яті
	cout << endl;
	///

	Program* program2 = new Transmission("super mum", "tv show", "20-04-2023", "12:59");
	program2->display();
	delete program2;
	cout << endl;
	Program* program3 = new Transmission("para na milion", "tv show", "25-04-2023", "20:00");
	program3->display();
	delete program3;
	cout << endl;
	Program* program4 = new Transmission("adventure time", "cartun", "12-04-2023", "16:20");
	program4->display();
	delete program4;
	cout << endl;
	Program* program5 = new Transmission("death book", "anime", "21-04-2023", "11:00");
	program5->display();
	delete program5;
	cout << endl;

	cout << "enter the number of programs: ";
	ProgramManager allPrograms;
	cout << endl;
	Menu();
a:

	
	while (stateMenu != 0)
	{
		switch (stateMenu)
		{
		case 1:
			allPrograms.fillPrograms();
			cout << endl;
			Menu();
			break;
		case 2:
			allPrograms.Show();
			cout << endl;
			Menu();
			break;
		case 3:
			allPrograms.AddPrograms1();
			cout << endl;
			Menu();
			break;
		case 4:
			allPrograms.deletePrograms1();
			cout << endl;
			Menu();
			break;

		case 6:
			Menu1();
			while (stateMenu != 0)
			{
				switch (stateMenu)
				{
				case 1:
					allPrograms.FindProgram();
					cout << endl;
					Menu1();
					break;
				default:
					cout << "error";
					Menu1();
				}

			}
		default:
			cout << endl;
			cout << "error" << endl;
			cout << endl;
			Menu();
		}
	}
}
