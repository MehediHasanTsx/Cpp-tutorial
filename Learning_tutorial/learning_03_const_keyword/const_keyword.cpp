#include <iostream>
// using namespace std;
int main()
{
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159; // now this const cant be changed in anywhere of this progarm
    double radius = 10;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << "The circumference of the circle is " << circumference << "\n";

    std::cout << "The area of the circle is " << area;

    // More const value like below

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGT = 1080;

    
    return 0;
}