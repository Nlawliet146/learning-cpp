#include <iostream>

double square(double length); // we can declare the function before main function and then define it later
std::string joinString(std::string string1, std::string string2); // here the function type is std::string, that is that it will return a string

int main()
{
    //return = return a value back to the spot where you called the encompassing function
    double length = 5.9;
    double area = square(length);

    std::string first_name = "NAMAN";
    std::string second_name = "GARG";

    std::string full_name = joinString(first_name, second_name);

    std::cout << area << '\n';
    std::cout << full_name;

    return 0;
}

double square(double length) // function type is double cuz it is returning a double, it will be void if it returns nothing
{
    double result = length * length;
    return result;
}

std::string joinString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}