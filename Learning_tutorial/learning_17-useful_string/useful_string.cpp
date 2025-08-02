#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name : ";
    // cin >> name; //this wont count space between inputs
    getline(cin, name); // this will count space between inputs

    if (name.length() > 12) // length method
    {
        cout << "Your name can't be over 12 character.";
    }
    else if (name.empty()) // empty method
    {
        cout << "You didn't enter your name.";
    }
    else
    {
        cout << "Hello " << name;
    }

    /*name.clear(); // it will clear the input name
    {
        cout << "Hello " << name;
    }*/

    /*name.append("@gamil.com");  // output will be name@gmail.com
     cout << "Your username is now " << name ;*/
    // cout << name.append("@gmail.com"); // can be write like this

    // cout << name.at(9); // show the nth caracter string form the input

    // cout << name.insert(0, "@"); // exact position insert any string

    // cout << name.find(' '); // it will find the defined character or string

    // cout << name.erase(0, 5); // it will erase defined strings

    return 0;
}
