#pragma once
#include <iostream>
#include <Windows.h>
#include <iostream>
#include <string>
#include<sstream>
#include"Date.h"

using namespace std;
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