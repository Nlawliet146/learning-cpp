#include <iostream>

void showINFO(const std::string name, const int age);

int main()
{
    // CONST PARAMETER = parameter that is effectively read-only
    //                   code is more secure & conveys intent (the internt being "DO NOT MESS WUTH THESE VARIABLE")
    //                   useful for references and pointers

    std::string name = "NAMAN";
    int age = 18;

    showINFO(name, age);

    return 0;
}

void showINFO(const std::string name, const int age)
{
    /* name = "ERROR";
    age = 0; 
    these will show error in it
    */
    std::cout << name << '\n';
    std::cout << age;
}