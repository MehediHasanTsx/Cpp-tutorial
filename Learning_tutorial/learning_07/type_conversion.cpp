#include <iostream>

int main()
{
    // type conversion = conversion a  value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    double x = (int)3.33;
    std::cout << x << '\n';

    char x1 = 100;
    std::cout << x1 << '\n'; // implicit

    std::cout << (char)97 << '\n'; // explicit

    // example
    int correct = 33;
    int questions = 100; // can add double here but also like below
    double score = correct / (double)questions * 100;
    std::cout << score << "%" << '\n';

    return 0;
}