#include<iostream>
#include<vector>
using namespace std;

vector <char> numberK;

int main()
{
    int number, k, i = 0;
    cout << "Enter number:";
    cin >> number;
    cout << "Enter numeral system:";
    cin >> k;

    while (number)
    {
        if( (number % k) <= 9) numberK.push_back(number % k + 48); //ascii
        else numberK.push_back(number % k + 55); //ascii
        number /= k;
    }

    for (int i = numberK.size() - 1; i >= 0; i--)
    {
        cout << numberK[i];
        numberK.pop_back();
    }
    return 0;
}
