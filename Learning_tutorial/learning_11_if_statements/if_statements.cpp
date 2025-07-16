#include <iostream>
using namespace std;

int main()
{
    // if statements = do something if a condition is true.
    //          if not, then don't do it.

    cout << "Enter your age : ";
    int age;
    cin >> age;

    if (age >= 80)
    {
        cout << "You are too old." << '\n';
    }
    else if (age >= 18)
    {
        cout << "You are welcome." << '\n';
    }
    else if (age < 0)
    {
        cout << "You haven't been born yet!" << '\n';
    }
    else
    {
        cout << "You are not welcome." << '\n';
    }

    return 0;
}