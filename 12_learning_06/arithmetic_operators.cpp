#include <iostream>

int main()
{
    // Arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    // Addition (+)
    int students = 10;
    // students = students + 1; or above
    // students += 1; or above
    students++;
    std::cout << "Addition of 10+1=" << students << '\n';

    // Subtraction (-)
    int students_2 = 15;
    // students_2 = students_2 - 1; or above
    // students_2 -= 1; or above
    students_2--;
    std::cout << "Subtraction of  15-1=" << students_2 << '\n';

    // Multiplication (*)
    int students_3 = 20;
    // students_3 = students_3 * 2; or above
    students_3 *= 2;
    std::cout << "Multiplication of 20*2=" << students_3 << '\n';

    // Division
    double students_4 = 24;
    // students_4 = students_4 / 5; or above
    students_4 /= 5;
    std::cout << "Division of 24/5=" << students_4 << '\n';

    // Remainder
    int remainder = 32 % 5;
    std::cout << "Remainder of 32%5=" << remainder << '\n';

    return 0;
}
