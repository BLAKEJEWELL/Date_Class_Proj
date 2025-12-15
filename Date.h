
#pragma once
#ifndef DATE_H
#define DATE_H

#include <string>

class Date
{

public:
	
	
	Date(int m = 1, int d = 1, int y = 1900); //constructor
	void setDate(int m, int d, int y); //mutator

	
	int getmonth() const //month accessor
	{
		return month;
	}
	int getday() const //day accessor
	{
		return day;
	}
	int getyear() const //year accessor
	{
		return year;
	}


	bool isleapyear() const;//to check for if the year is a leap year or not
	bool isleapyear(int y) const;

	int lastDay() const;//to check how many days are in the month
	int lastDay(int m, int y) const;

	bool datevalidation(int m, int d, int y) const; //validate dates
	
	std::string displaydate3() const;    //display results
	std::string displaydate2() const;     
	std::string displaydate1() const; 

private:
	int month;
	int day;
	int year;







};



#endif
