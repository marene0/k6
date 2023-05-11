#pragma once
#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
#include<sstream>
#include"Time.h"
using namespace std;
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
