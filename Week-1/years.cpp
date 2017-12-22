#include<iostream>
using namespace std;

int main()
{
    int years, days, minutes, seconds;

    cout << "Years = ";
    cin >> years;

    days = years * 365;
    cout << "Days = " << days << endl;

    minutes = days * 24 * 60;
    cout << "Minutes = " << minutes << endl;

    seconds = minutes  * 60;
    cout << "Seconds = " << seconds << endl;

    return 0;
}
