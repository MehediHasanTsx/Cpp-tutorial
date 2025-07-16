#include <iostream>

// cout << (insertion operation)
// cin << (extraction operation)

int main()
{
    std::string name;
    std::cout << "What's your full name?:";
    // std::cin >> name; // can't input full name with space between
    std::getline(std::cin >> std::ws, name); // can input full name with space between and anywhere in code(if i move input age before name then it won't work without std::ws)

    int age;
    std::cout << "What's your age?:";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.";
    return 0;
}