#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x, k;

    cout << "Enter number: ";
    cin >> x;

    cout << "Enter digit position: ";
    cin >> k;

    int a = pow (10, k - 1);
    int answer = ( x / a ) % 10 ;

    cout << "The digit in position " << k << " is " << answer << endl;

    return 0;
}
