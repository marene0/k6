#pragma once
#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
#include<sstream>
#include"Date.h"
#include"Time.h"
using namespace std;
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