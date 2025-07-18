#include <iostream>
using namespace std;

int main()
{
    // ternary operator ?: replacement to an if/else statement
    // condition ? expression1 : expression2;

    // with ternary operator

    int grade = 50; // single statement
    cout << (grade >= 40 ? "You have passed." : "You have failed.") << '\n';

    int grade_2 = 40; // multiple statement
    cout << (grade_2 >= 80 ? "You got cgpa 4." : (grade_2 >= 60 ? "You got cgpa 3.5." : (grade_2 >= 50 ? "You got cgpa 2.5." : (grade_2 >= 40 ? "You got cgpa 2." : "You have failed.")))) << '\n';

    int number = 10;  // odd or even
    // number % 2 == 1 ? cout << "Odd." : cout << "Even."; // also write like below
    cout << (number % 2 == 1 ? "Odd." : "Even.") << '\n';

    int number_2 = 9; // odd or even
    number_2 % 2 == 0 ? cout << "Even." : cout << "Odd." << '\n'; // also write like below
    // cout << (number_2 % 2 ? "Odd." : "Even.") << '\n';
    // cout << (number_2 % 2 == 0 ? "Even." : "Odd.") << '\n';

    bool hungry = false;  //boolean
    cout << (hungry ? "You are hungry." : "You are full") << '\n';

    // with if/else
    /* int grade = 80;
     if (grade >= 40)
     {
         cout << "You have passed." << '\n';
     }

     else
     {
         cout << "You have failed." << '\n';
     }*/

    return 0;
}