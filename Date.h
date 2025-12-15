#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
public:
	Date(int m = 1, int d = 1, int y = 1900);//constructor
	void setDate(int m, int day, int y); // mutator

	int getmonth()//month accessor
	{
		return month;
	}
	int getday()//day accessor
	{
		return day;
	}
	int getyear()//year accessor
	{
		return year;
	}


	//to check for if the year is a leap year or not
	bool isleapyear();
	bool isleapyear(int year);

	//to check how many days are in the month
	int lastDay();
	int lastDay(int month, int year);



private:
	int month;
	int day;
	int year;


};

#endif
