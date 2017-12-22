#include<iostream>
using namespace std;

int main()
{
    int p;
    bool isTrue = 0;

    cout << "p=";
    cin >> p;

    /*if ( (p % 4 == 0) || (p % 7 == 0)){
        isTrue = 1;
    }*/



    /*if (( b * b - 4 * a * c) < 0) isTrue = 1;
    if ( sqrt ( (a - 0) * (a - 0) + (b - 1) * (b - 1) ) < 5 ) isTrue = 1;
    if ( sqrt ( (a - c) * (a - c) + (b - d) * (b - d) ) > f) isTrue = 1;
    if ( sqrt ( a * a + b * b ) < 5 && ( a < 0 ) && ( b < 0 ) ) isTrue = 1;
    if ( x >= 0 && x <= 1 ) isTrue = 1;
    if ( ( x == a && x > b && x > c ) || ( x == b && x > a && x > c ) || ( x == c && x > a && x > b )) isTrue = 1;
    if ( ! ( ( x == a && x > b && x > c ) || ( x == b && x > a && x > c ) || ( x == c && x > a && x > b ) ) ) isTrue = 1;
    if ( x || y ) isTrue = 1;
    if ( x && y ) isTrue = 1;
    if ( a <= 0 && b <= 0 && c <= 00) isTrue = 1;*/
    if ( ( (p % 10) == 7 ) || ( ((p / 10) % 10) == 7 ) || ( (p / 100) == 7 ) ) isTrue = 1;
    /*if ( ( (m % 10) != ( (m / 10) % 10 ) ) && ( (m % 10) != (m / 100) ) && ( (m / 10) % 10) !=  (m / 100) )  isTrue = 1;
    if ( ( (m % 10) == ( (m / 10) % 10 ) ) || ( (m % 10) == (m / 100) ) || ( (m / 10) % 10) == (m / 100) ) ) isTrue = 1;
    if ( ( ( (x % 10) < ( (x / 10) % 10 ) ) && ( (x / 10) % 10 ) < (x / 100) ) || ( ( ( x % 10) > ( (x / 10) % 10) ) && ( (x / 10) % 10) > (x / 100) )) isTrue = 1;
    if ( ( (x % 10) == (y / 100) ) && ( (y % 10) == (x / 100) ) && ( ( (x / 10) % 10 ) == ( (y / 10) % 10 ) ) isTrue = 1;
    if ( x == 2 || x == 3 || x == 5 || x == 7 || x == 11 || x == 13 || x == 17) isTrue = 1;*/

    if(isTrue) cout << "It is true." << endl;
    else cout << "It is not true." << endl;
    return 0;
}
