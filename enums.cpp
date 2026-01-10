#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, saturday = 6, friday = 5};

int main()
{
    // enums = a user defined data type that consist of paired name-integer constant
    //         GREAT if you have a set of potential options

    Day today = sunday;
    // we can not use string as switch, so we use enums to make it work

    switch(today)
    {
        case sunday: std::cout << "working";
                break;
        case monday: std::cout << "working";
                break;
        case tuesday: std::cout << "working";
                break;
        case wednesday: std::cout << "working";
                break;
        case thursday: std::cout << "working";
                break;
        case friday: std::cout << "working";
                break;
        case saturday: std::cout << "working";
                break;
    }

    switch(today)
    {
        case 0: std::cout << "working";
                break;
        case 1: std::cout << "working";
                break;
        case 2: std::cout << "working";
                break;
        case 3: std::cout << "working";
                break;
        case 4: std::cout << "working";
                break;
        case 5: std::cout << "working";
                break;
        case 6: std::cout << "working";
                break;
    }

    return 0;
}