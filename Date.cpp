#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(int m, int d, int y) // constructor with scope
{
	setDate(m, d, y);
}
void Date::setDate(int m, int d, int y)
{

}
int getmonth()
{

}
int getday()
{

}
int getyear()
{

}

bool Date::isleapyear() 
{
	return isleapyear(year);
}
bool Date::isleapyear(int y) 
{
	return (y % 4 == 0 && y % 100 != 0);
}

int lastDay()
{

}
int lastDay(int m, int y)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		return 31;
	}
	else if (m == 4 || m == 6 || m == 7 || m == 11)
	{
		return 30;
	}
	else
	{
		
		return isleapyear(y);
	}



		/*
	switch (m)
	{
	case 1: 
		return 31;
	case 3:
		return 31;
	case 5:
		return 31;
	case 7:
		return 31;
	case 8:
		return 31;
	case 10:
		return 31;
	case 12:
		return 31;
	case 4:
		return 30;
	case 6:
		return 30;
	case 9:
		return 30;
	case 11:
		return 30;
	case 2:
		return isleapyear(y);
	default:
		return 0;
		*/
	}
}

string datedisplay1() // format: month day year
{

}
string datedisplay2() // format: day month year
{

}
string datedisplay3() // format: 00/00/0000
{

}
bool datevalidation(int m, int d, int y)
{
	if (m < 1 || m>12)
	{
		return false;
	}
	if (y < 1)
	{
		return false;
	}

	int howmanydays = lastDay(m, y);
}