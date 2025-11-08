#include <iostream>

int main(){
    
    // int or integer data type
    int x; //DECLARATION
    x = -5; //ASSIGNMENT

    int y = 10; //DECLARATION AND ASSIGNMENT CAN BE DONE AT SAME TIME
    int sum = x + y;

    int days = 7.5; // decimal part is truncated 

    // double (number including decimal)
    double price = 10.99;
    double cgpa = 7.5;
    double temp = 22.5;

    //char (stores single character..any character)
    char grade = 'A';
    char initial = 'N';
    char currency = '$';

    // boolean (true or false)
    bool student = true;
    bool swit = false;

    // string (objects that represent a sequence of text)
    std::string name = "NAMAN GARG"; // string are declared by using std::string

    /*THE const keyword specifies that the variable value is constant
      tell the compiler to prevent modifying it 
      effectively making it read only */
    const double PI = 3.1459; 
    // it is not necessary to make the variable capital it is just a general tredn to do so
    //not value of PI is fixed for whole code
    double radi = 7;
    double circum = 2 * PI * radi;

    std::cout << x << '\n' << y << '\n' << sum << '\n' << days << '\n';
    std::cout << price << '\n' << cgpa << '\n' << temp << '\n';
    std::cout << grade << '\n' << initial << '\n' << currency << '\n';
    std::cout << name << '\n' << circum;
    return 0;
}