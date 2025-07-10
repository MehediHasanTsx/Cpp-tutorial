#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string txt;
typedef int numb;

using txt2 = std::string;
using numb2 = int;

int main()
{
    // typedef = reserved keyword used to create an additional name (alias) for another data type.
    //  New identifier for an existing type
    //  Helps with readability and reduces typos
    // Use when there is a clear benefit
    // Replaced with 'using' (work better w/ templates)

    txt firstname = "Mehedi";
    numb age = 22;

    std::cout << firstname << '\n';
    std::cout << age << '\n';

    // using
    txt2 firstname_2 = "Mehedi_hasan";
    numb2 age_2 = 23;

    std::cout << firstname_2 << '\n';
    std::cout << age_2 << '\n';

    return 0;
}