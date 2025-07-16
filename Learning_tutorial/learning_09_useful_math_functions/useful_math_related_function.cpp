#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // declaration and initialization
    // double x = 3;
    // double y = 5;
    // double z = 9;
    // double r = 3.33;

    // declaration
    // double maximum;
    // double minimum;
    // double power;
    // double root;
    // double absolute;
    // double rounded;

    // function call and assignment
    // maximum = max(x, z);
    // minimum = min(y, z);
    // power = pow(3, 5);
    // root = sqrt(16);
    // absolute = abs(-12);
    // rounded = round(r);

    // output and shortcuts
    cout << "Maximum number is: " << max(3, 9) << '\n';
    cout << "Minimum number is: " << min(5, 9) << '\n';
    cout << "3 to the power of 5 is: " << pow(3, 5) << '\n';
    cout << "Root over 16 is = " << sqrt(16) << '\n';
    cout << "Absolule |-12| = " << abs(-12) << '\n';
    cout << "Rounded of 3.33 = " << round(3.33) << '\n';
    cout << "Ceiling of 3.33 = " << ceil(3.33) << '\n';
    cout << "Ceiling of 4.5 = " << ceil(4.5) << '\n';
    cout << "Floored of 3.59 = " << floor(3.59) << '\n';

    // more about usefull math related function is in
    // = www.cplusplus.com/reference/cmath

    return 0;
}