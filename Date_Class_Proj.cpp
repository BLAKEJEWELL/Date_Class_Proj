

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
    cout << "Test default constructor";
    cout << "Test constructor with valid date: ";
    cout << "Test constructor with invalid month (45, 2, 2009): ";
    cout << "Test constructor with invalid day (2, 29, 2009): ";
    cout << "Test setDate with bad month (13): ";
    cout << "Test setDate with bad day (4, 31, 2009): ";
    cout << "Test for leap year with bad date (2/29/2009): ";
    cout << "Test for leap year with good date (2/29/2008): ";
    cout << "Test the print formats:";

    return 0;
}


