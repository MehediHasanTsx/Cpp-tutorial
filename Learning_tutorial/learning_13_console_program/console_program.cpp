#include <iostream>
using namespace std;

int main()
{
    cout << "*********** Calculator ***********" << '\n';

    cout << "Enter operation (+ - * /) : ";
    char op;
    cin >> op;

    cout << "Enter number_1 : ";
    double number_1;
    cin >> number_1;

    cout << "Enter number_2 : ";
    double number_2;
    cin >> number_2;

    switch (op)
    {
    case '+':
        cout << "Result : " << number_1 + number_2 << '\n';
        break;
    case '-':
        cout << "Result : " << number_1 - number_2 << '\n';
        break;
    case '*':
        cout << "Result : " << number_1 * number_2 << '\n';
        break;
    case '/':
        cout << "Result : " << number_1 / number_2 << '\n';
        break;

    default:
        cout << "Result : " << "That wasn't a valid response." << '\n' ;
        break;
    }

    cout << "***********************************";
    return 0;
}