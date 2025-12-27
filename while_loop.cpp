#include <iostream>

int main()
{
    std::string name;

    while (name.empty())
    {
        std::cout << "ENTER YOUR NAME: ";
        std::getline(std::cin, name);
    }

    std::cout << "HELLO " << name << '\n';

    // do while loop = do some block of code first, THEN repeat it condition is still true

    int number;
    do
    {
        std::cout << "ENTER THE POSITIVE NUMBER: ";
        std::cin >> number;
    } while (number < 0);

    // the code in do part will run once regardless of condition, the condition exist only to repeat it if necessary

    std::cout << "THIS IS NUMBER " << number;

    return 0;
}