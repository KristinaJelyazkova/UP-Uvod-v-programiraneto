#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, counter = 0, number = 0;

    cout << "Enter number : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        number = pow(i,3) + 13 * i * n + pow(n,3);
        if ( (number % 5 == 0) || (number % 9 == 0) ) counter++;
    }

    cout << "There are " << counter << " such numbers." << endl;

    return 0;
}
