#include <iostream>

int main()
{
    // Pointer = a variable that stores the memory address of another variable.
    // &  = address-of operator → gives the memory address of a variable.
    // *  = dereference operator → lets you access the value stored at that address.
    // Importance of * : without dereferencing, a pointer is just an address; * lets you read or change the real value.

    std::string name = "NAMAN";

    // Pointer type must match the variable type it points to.
    std::string *pname = &name; // convention: prefix p to pointer names

    std::cout << pname;          // prints the memory address
    std::cout << '\n' << *pname; // prints the value stored at that address (“NAMAN”)

    int age = 18;
    int *page = &age;

    std::cout << '\n' << *page;  // prints 18
    std::cout << '\n' << page;   // prints address of age

    std::string freepizzas[5];
    std::fill(freepizzas, freepizzas + 5, "pizza");

    // No & needed because an array name already represents its starting address.
    std::string *pfreepizzas = freepizzas;

    std::cout << '\n' << *pfreepizzas; // prints first element "pizza"
    std::cout << '\n' << freepizzas;   // prints starting address of array
    std::cout << '\n' << pfreepizzas;  // prints same address as above

    return 0;
}
