#include "helpio.h"
#include <iostream>
#include <string.h>

using namespace std;

bool check_date(char day[], char month[], char year[])
{
    int d = atoi(day);
    int m = atoi(month);
    int y = atoi(year);
    if (d > 31 || d < 1 || m > 12 || m < 1 || y < 0)
    {
        return false;
    }
    return true;
}

string inputdate()
{
    char day[3], month[3], year[5];
    cout << "Please input the date in dd/mm/yyyy format:";
    cin.get(day, 3, '/');
    cin.ignore(100, '/');
    cin.get(month, 3, '/');
    cin.ignore(100, '/');
    cin.get(year, 5);
    if (check_date(day, month, year))
    {
        // join the strings and return
        string date = day;
        date = date + "/" + month + "/" + year;
        return date;
    }
    else
    {
        cout << "Invalid date. Please try again.";
        return inputdate();
    }
}
