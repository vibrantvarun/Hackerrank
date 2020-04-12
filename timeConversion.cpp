#include <bits/stdc++.h>
#include <string>
using namespace std;

string timeConversion(string str)
{
    string twentyHourFormat;
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);

    if (str[8] == 'A')
    {
        if (hh == 12)
        {
            twentyHourFormat = "00";
            for (int i = 2; i <= 7; i++)
            {
                twentyHourFormat = twentyHourFormat + str[i];
            }
        }
        else
        {
            for (int i = 0; i <= 7; i++)
                twentyHourFormat = twentyHourFormat + str[i];
        }
    }

    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            twentyHourFormat = "12";
            for (int i = 2; i <= 7; i++)
                twentyHourFormat = twentyHourFormat + str[i];
        }
        else
        {
            hh = hh + 12;
            twentyHourFormat = to_string(hh);
            for (int i = 2; i <= 7; i++)
                twentyHourFormat = twentyHourFormat + str[i];
        }
    }

    return twentyHourFormat;
}

int main()
{
    string str = "07:05:45PM";
    cout << timeConversion(str);
    return 0;
}