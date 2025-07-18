#include <iostream>
using namespace std;

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    // && (and) operator
    cout << "***************************" << '\n';
    cout << "Enter the temperature 1: ";
    int temp;
    cin >> temp;
    if (temp > 0 && temp < 30)
    {
        cout << "Temperature is good!" << '\n';
    }
    else
    {
        cout << "Temperature is bad!" << '\n';
    }
    cout << "***************************" << '\n';

    // || (or) operator
    cout << "Enter the temperature 2: ";
    int temp_2;
    cin >> temp_2;
    if (temp_2 < 0 || temp_2 > 30)
    {
        cout << "Temperature is bad!" << '\n';
    }
    else
    {
        cout << "Temperature is good!" << '\n';
    }
    cout << "***************************" << '\n';

    // ! (not) operator
    cout << "bool sunny = true:" << '\n';
    bool sunny = true;
    if (sunny == true)
    {
        cout << "it is sunny outside." << '\n';
    }
    else
    {
        cout << "It is cloudy outside." << '\n';
    }
    cout << "***************************" << '\n';

    // with strings
    cout << "Weather with strings input:" << '\n';
    cout << "weather is good? true or false = ";
    string temp_3;
    cin >> temp_3;
    if (temp_3 == "true")
    {
        cout << "You can go outside!" << '\n';
    }
    else if (temp_3 == "false")
    {
        cout << "You can't go outside!" << '\n';
    }
    else
    {
        cout << "You didn't type true or false." << '\n';
    }
    cout << "***************************" << '\n';

    return 0;
}