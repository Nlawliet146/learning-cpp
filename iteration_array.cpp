#include <iostream>

int main()
{
    std::string students[] = {"GOKU", "LUFFY", "NARUTO", "ICHIGO"};

    for(int i = 0; i < 4; i++)
    {
        std::cout << students[i] << '\n';
    }

    // OR WE CAN ITERATE LIKE THIS:

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }

    return 0;
}