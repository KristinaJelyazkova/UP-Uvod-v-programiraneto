#include<iostream>
using namespace std;

int main()
{
    double side, height, area;

    cout << "side = ";
    cin >> side;

    cout << "height = ";
    cin >> height;

    area = (side * height) / 2;

    cout << "area = " << area << endl;

    return 0;
}
