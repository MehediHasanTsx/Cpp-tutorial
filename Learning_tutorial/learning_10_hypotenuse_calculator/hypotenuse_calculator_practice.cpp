#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double height;
    cout << "Enter height: ";
    cin >> height;

    double base;
    cout << "Enter base: ";
    cin >> base;

    cout << "Hypotenuse of the triangle is " << sqrt(pow(height, 2) + pow(base, 2)) << '\n';
    return 0;
}