#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int year;
    bool isLeapYear = false;

    cout << "Enter year: ";
    cin >> year;

    if( (year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0) ) ) isLeapYear = true;

    if(isLeapYear) cout << "The year you entered is a leap year." << endl;
    else cout << "The year you entered is not a leap year." << endl;

    return 0;
}
