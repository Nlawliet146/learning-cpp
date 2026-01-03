#include <iostream>

struct student
{ // struct student is like a datatype which contain the provided data types as member
    std::string name;
    double gpa;
    bool enrolled;
    // we can give them default values to struct
    // for example, bool enrolled = false; this will give a default value for enrolled
};

int main()
{
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, float, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operator"

    student student1;
    student1.name = "GOKU";
    student1.gpa = 9.9;
    student1.enrolled = false;

    // std::cout << student1; gives error because student is custom data type, and C++ can only print in built data types like int
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    return 0;
}