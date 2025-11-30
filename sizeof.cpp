#include <iostream>

int main()
{
    //sizeof() = determine the size in bytes of a: variable, data type, class, object etc

    double gpa  = 2.5;

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    // the answer is 8 bytes, that is the maximum size allocated to any double variable, therfore both of them gave 8 as ans

    std::string name = "NAMAN GARG";

    std::cout << sizeof(name) << " bytes\n"; // a string actually just holds an address(cuz string is a reference data type) to where the text is located, it is the address which gives the answer, therefore length of string dont matter 
    
    char grade = 'A';
    bool student = true;
    
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    // a bool and char is only of one byte

    char grades[] = {'A', 'B', 'C'};
    std::cout << sizeof(grades) << " bytes\n";
    // size is 3 bytes since, well 1 byte * 3 (3 elements)= 3, 

    // this can be used to calculate number of elements in an array sizeof(array)/sizeof(datatype of the array)
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";

    
    return 0;
}