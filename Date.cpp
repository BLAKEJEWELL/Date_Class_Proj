#include "Date.h"
#include <iostream>
using namespace std;


Date::Date(int m, int d, int y)// constructor with scope
{
    setDate(m, d, y);
}
void Date::setDate(int m, int d, int y) //mutator with inputvalidation. see datevalidation function.
{
    if (!datevalidation(m, d, y))
    {
        month = 1;
        day = 1;
        year = 1900;
        return;
    }


    year = y;
    month = m;
    day = d;
}
bool Date::isleapyear() const
{
    return isleapyear(year);
}
bool Date::isleapyear(int y) const
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
int Date::lastDay() const
{
    return lastDay(month, year);
}
int Date::lastDay(int m, int y) const // switched back to a switch for day choice
{
    switch (m)
    {
        //months with 31 days
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        //monnths with 30 days
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        //special little February
        return isleapyear(y) ? 29 : 28; //sends y to the isleapyear function, returns answer.
    default:
        return 0;
    }
}

string Date::displaydate3() const  // format: 00/00/0000
{
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}
string Date::displaydate2() const// format: month day year
{
    static string months[] =
    {
        "January", "February ", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return months[month - 1] + " " + to_string(day) + ", " + to_string(year);
}

string Date::displaydate1() const// day month year
{
    static string months[] =
    {
        "January", "February ", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return to_string(day) + " " + months[month - 1] + "   " + to_string(year);
}
bool Date::datevalidation(int m, int d, int y) const
{
    if (m < 1 || m > 12) //month validation
    {
        cout << "Month invalid" << endl;
        return false;
    }
    if (y < 1)//year validation
    {
        cout << "Year invalid" << endl;
        return false;

    }
    int maxDay = lastDay(m, y);
    if (d < 1 || d > maxDay) //day validation after cheding with lastday()
    {
        cout << "Day invalid" << endl;
        return false;
    }
    return true;
}

