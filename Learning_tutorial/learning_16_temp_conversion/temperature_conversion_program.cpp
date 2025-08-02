#include <iostream>
using namespace std;

int main()
{

    double temp;
    char unit;

    cout << "******* Temperature conversion *******";
    cout << "F = Fahrenheit" << '\n';
    cout << "C = Celsius" << '\n';
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in Celsius : ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature in fehrenheit is : " << temp << '\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in fehrenheit : ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature in celsius is : " << temp << '\n';
    }
    else
    {
        cout << "Please enter in only C or F. " << '\n';
    }
    return 0;
}