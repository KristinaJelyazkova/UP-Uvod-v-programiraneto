#include<iostream>
#include<math.h>
using namespace std;

bool isPowerof2(int number){
    bool execute = true;
    if(number <= 1) return false;
    while( (number != 1) && execute){
        if(number % 2 != 0) return false;
        number /= 2;
    }
    return true;
}

int main(){
    int number;

    cout << "Enter number: ";
    cin >> number;

    if(isPowerof2(number)) cout << "Yes." << endl;
    else cout << "No." << endl;

    return 0;
}
