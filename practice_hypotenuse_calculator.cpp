#include <iostream>
#include <cmath>

int main(){

    std::cout << "WELCOME TO HYPONTENUSE CALCULATOR" << '\n';
    double base;
    double perp;

    std::cout << "ENTER ONE SIDE OF TRIANGLE: ";
    std::cin >> base;

    std::cout << "ENTER ANOTHER SIDE OF TRIANGLE: ";
    std::cin >> perp;

    double hypo = sqrt(pow(base, 2) + pow(perp, 2));
    std::cout << "YOUUR HYPOTENUSE IS: " << hypo;
    return 0;
}