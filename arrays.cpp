#include <iostream>

int main()
{
    // array = a data structure that can hold multiple values, values are accessed by an index number
    //         (basically the list in python) or (a variable that stores multiple value)
    
    /*
    It is similar to a **Python list**, but with important differences:

        - C++ arrays have a **fixed size** once declared.
        - All elements must be of the **same data type**.
        - Writing the array name alone (like `cars`) does NOT print elements.
          Instead, it gives the **memory address** of the first element.
        
        Syntax reminder:
            type arrayName[size] = {values};
    */

    std::string car = "BUGATTI\n";
    std::cout << car;

    std::string cars[] = {"BMW", "BUGATTI", "MERCEDES"};
    // to make an array add [] in front of string name and enclose the multiple values in {}
    std::cout << cars << '\n'; // Printing the array name directly shows a memory address, not values.

    std::cout << cars[0] << '\n'; // by writing the index number while printing, then we will get the value stored on that index
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    cars[1] = "MUSTANG"; // now the value at index 0 will be replaced with "MUSTANG"
    std::cout << cars[1] << '\n';

    // TO NOTE: NOW THAT I HAVE CALLED ARRAY WITH STD::STRING, NOW I CAN ONLY STORE STRINGS IN IT

    int prices[3]; // we can declare the array before but we need to mention the array size (in this case 3)

    prices[0] = 5;
    prices[1] = 10;
    prices[2] = 7;

    return 0;
}