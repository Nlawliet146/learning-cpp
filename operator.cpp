#include <iostream>

int main() {
    int students = 20;

    // Basic addition
    students = students + 1;
    std::cout << students << '\n';

    // Shorthand addition
    students += 1;
    std::cout << students << '\n';

    // Increment operator
    students++;
    std::cout << students << '\n';

    // Subtraction
    students -= 1;
    std::cout << students << '\n';

    // Multiplication
    students *= 2;
    std::cout << students << '\n';

    // Division
    students /= 2;
    std::cout << students << '\n';

    // Modulus (remainder after division)
    int remainder = students % 3;
    std::cout << remainder << '\n';

    // Floating-point division example
    double students2 = 20;
    double total = students2 / 3;
    std::cout << total << '\n';

    // Type casting for float division (avoid integer division)
    total = static_cast<double>(students) / 3; // temp or for this line only makes students a double instead of int
    std::cout << total << '\n';

    return 0;
}

/* 
 (double)students is a C-style cast — simple and fine for beginners.
 static_cast<double>(students) is the modern C++ version — safer, more explicit,
 and helps prevent unintended type conversions.
 Example: (double*)ptr;  // allowed in C-style cast, even if unsafe
          static_cast<double*>(ptr);  // gives an error, preventing misuse
 Both work the same here.
*/

