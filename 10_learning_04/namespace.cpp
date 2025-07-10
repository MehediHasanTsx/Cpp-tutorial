// Namespace = provides a solution for preventing name conflicts in large projects. Each identically named entities as long as the namespaes are different.

#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{

    // to output second namespace without scope resulation operator
    using namespace second;
    std::cout << x << "\n";

    int x = 6;
    std::cout << x << "\n";

    // to output first namespace with scope resulation operator (::)
    std::cout << first::x << "\n";

    // when i use namespace std; in after #include<iostream> then the output will be like = cout << "Hello world !" << endl; can also write like below

    // when i don't use that then the output will be like = std::cout << "Hello world !" << "\n";
}
