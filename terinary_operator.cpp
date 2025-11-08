#include <iostream>

int main()
{
    // terinary operator is an replacement to if/else statement
    // syntax: [condition ? expression1 : expression2;] #[] not needed just for show here
    double grade = 50;
    grade >= 75 ? std::cout << "YOU PASS\n" : std::cout << "YOU FAIL\n";

    // an even/odd finder
    int num;
    std::cout << "ENTER YOUR NUMBER ";
    std::cin >> num;
    num % 2 == 0 ? std::cout << "IT IS EVEN\n" : std::cout << "IT IS ODD\n"; // a 0 result in any case corresponds to false

    // we can also use terinary operator as follow
    bool hungry = false;
    std::cout << (hungry ? "I AM HUNGRY" : "I AM FULL");

    return 0;
}