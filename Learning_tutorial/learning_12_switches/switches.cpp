#include <iostream>
using namespace std;

int main()
{
    // switch = alternative to using many "else if" statements compare one value against matching cases

    char grade;
    cout << "What letter grade? : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "You did great!";
        break;
    case 'B':
        cout << "You did good!";
        break;
    case 'C':
        cout << "You did okay!";
        break;
    case 'D':
        cout << "You did not do good!";
        break;
    case 'F':
        cout << "You failed!";
        break;

    default:
        cout << "Please only enter in a letter grade (A-F)";
        break;
    }
    /* // with switch
     cout << "Enter the month (1-12) : ";
     int month;
     cin >> month;

     switch (month)
     {
     case 1:
         cout << "It is January.";
         break;
     case 2:
         cout << "It is  February.";
         break;
     case 3:
         cout << "It is  March.";
         break;
     case 4:
         cout << "It is  April.";
         break;
     case 5:
         cout << "It is  May.";
         break;
     case 6:
         cout << "It is  June.";
         break;
     case 7:
         cout << "It is  July.";
         break;
     case 8:
         cout << "It is  August.";
         break;
     case 9:
         cout << "It is  September.";
         break;
     case 10:
         cout << "It is  October.";
         break;
     case 11:
         cout << "It is  November.";
         break;
     case 12:
         cout << "It is  December.";
         break;
     default:
         cout << "Please enter in only numbers (1-12).";
         break;
     }*/

    /* // with if else statement
    cout << "Enter the month (1-12) : ";
    int month;
    cin >> month;

    if (month == 1)
    {
        cout << "It is January" << '\n';
    }
    else if (month == 2)
    {
        cout << "It is February" << '\n';
    }
    else if (month == 3)
    {
        cout << "It is March" << '\n';
    }
    else if (month == 4)
    {
        cout << "It is April" << '\n';
    }
    else if (month == 5)
    {
        cout << "It is May" << '\n';
    }
    else if (month == 6)
    {
        cout << "It is June" << '\n';
    }
    else if (month == 7)
    {
        cout << "It is July" << '\n';
    }
    else if (month == 8)
    {
        cout << "It is August" << '\n';
    }
    else if (month == 9)
    {
        cout << "It is September" << '\n';
    }
    else if (month == 10)
    {
        cout << "It is October" << '\n';
    }
    else if (month == 11)
    {
        cout << "It is November" << '\n';
    }
    else if (month == 12)
    {
        cout << "It is December" << '\n';
    }
    else
    {
        cout << "You haven't enter the number between (1-12).";
    }*/

    return 0;
}