#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
public:
	Date(int m = 1, int d = 1, int y = 1900);//constructor
	void setDate(int m, int day, int y); // mutator

	int getmonth();
	int getday();
	int getyear();

	bool isleapyear();
	bool isleapyear(int year);

	int lastDay();
	int lastDay(int month, int year);



private:
	int month;
	int day;
	int year;


};

#endif
