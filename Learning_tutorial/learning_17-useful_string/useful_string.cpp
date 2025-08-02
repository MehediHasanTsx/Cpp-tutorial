#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name : ";
    // cin >> name; //this wont count space between inputs
    getline(cin, name); // this will count space between inputs 

    if (name.length() > 12)
    {
        cout << "Your name can't be over 12 character." << '\n';
    }
    else
    {
        cout << "Welcome " << name << '\n';
    }

    return 0;
}