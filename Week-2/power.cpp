#include<iostream>
#include<cmath>
using namespace std;

bool isPower(int n){
    int number = n;
    for( int i = 2; i <= sqrt(n); i++ ){
        number = n;
        while ( ( number % i == 0 ) && ( number > 1 ) ){
            number /= i;
        }
        if ( number == 1 ) return true;
    }
    return false;
}

int main(){
    int n;

    cout<< "n=";
    cin >> n;

    if(isPower(n)) cout << "Yes." << endl;
    else cout << "No." << endl;

    return 0;
}
