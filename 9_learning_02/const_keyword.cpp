#include <iostream>
// using namespace std;
int main()
{
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;

    std::cout << "The circumference of the circle is " << circumference << "\n";

    std::cout << "The area of the circle is " << area;

    return 0;
}