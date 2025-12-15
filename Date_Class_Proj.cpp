/*
Name: Blake Jewell
file name: Date_Class_Proj.cpp
focus: 
Design a class called Date. The class should store a date in three integers: month, day, and year.
There should be member functions to print the date in the following forms:
• 12/25/2021
• December 25, 2021
• 25 December 2021
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than the last day of the month or less
than 1. Do not accept values for the month greater than 12 or less than 1.
*/

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{


    Date date1;
    cout << "Test default constructor: ";
    cout << date1.displaydate3() << endl;

    Date date2(2, 28, 2009);
    cout << "Test constructor with valid date: ";
    cout << date2.displaydate3() << endl;

    Date date3(45, 2, 2009);
    cout << "Test constructor with invalid month (45, 2, 2009): ";
    cout << date3.displaydate3() << endl;

    Date date4(2, 29, 2009);
    cout << "Test constructor with invalid day (2, 29, 2009): ";
    cout << date4.displaydate3() << endl;

    date2.setDate(13, 1, 2009);
    cout << "Test setDate with bad month (13): ";
    cout << date2.displaydate3() << endl;

    date2.setDate(4, 31, 2009);
    cout << "Test setDate with bad day (4, 31, 2009): ";
    cout << date2.displaydate3() << endl;

    date2.setDate(2, 29, 2009);
    cout << "Test for leap year with bad date (2/29/2009): ";
    cout << date2.displaydate3() << endl;

    Date date5(2, 29, 2008);
    cout << "Test for leap year with good date (2/29/2008): "; // 
    cout << date5.displaydate3() << endl;

    cout << "Test the print formats:" << endl;
    cout << date5.displaydate2() << endl;
    cout << date5.displaydate1() << endl;

    return 0;











}
