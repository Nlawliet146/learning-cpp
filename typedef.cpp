#include <iostream>

typedef std::string string_t; // a basic convention to name typedef with _t at end
// typedef std::cout print_t; this will result in an error cuz cout is an object not a datatype

using int_t = int; // using is a more famous way of an alias, it follows same rules as that of typedef

int main(){

    /*Typedef = reserved keyword  used to create an additonal name aka an alias for another data type..DATA TPE AND NOT AN OBJECT.
                new identifier for existing type, helps with readibilty and decrease typos*/
    string_t name = "Naman garg";
    int_t numb = 17;
    std::cout << name << '\n' << numb;
                
    return 0;
}

/*
Type vs Object — Quick Summary

• A "type" defines what kind of data or behavior something has (a blueprint/class).
  → Example: std::ostream, int, std::string

• An "object" is a specific instance of a type (exists in memory and holds data).
  → Example: std::cout, x = 10, name = "Naman"

• typedef (or using) can only alias TYPES, not OBJECTS.
  → typedef std::ostream print_t;   valid
  → typedef std::cout print_t;      invalid

• std::ostream = type that defines all output streams
• std::cout = object of std::ostream that writes to the screen
*/

/*
    auto& — Reference Type Deduction with 'auto'

    'auto' automatically deduces the data type of a variable based on the initializer.
    When we add '&' (ampersand), it means the variable will act as a *reference*
    to the original object instead of creating a separate copy.

    🔹 Example 1: Without '&'
        int x = 10;
        auto y = x;  // 'y' is a separate copy of 'x'
        y = 20;      // changes 'y' only, 'x' remains 10

    🔹 Example 2: With '&'
        int x = 10;
        auto& y = x;  // 'y' is a reference to 'x'
        y = 20;       // changes 'x' too, because 'y' refers to 'x'

    ➤ So, 'auto&' is useful when:
        - You want to modify the original variable (not a copy)
        - You want to avoid unnecessary copying of large objects (like vectors, strings, etc.)
        - You’re iterating through a container and want to directly access elements

    🔹 Example 3: In loops
        std::vector<int> nums = {1, 2, 3};

        // This creates copies of elements
        for (auto n : nums) {
            n *= 2;  // modifies the copy, not the original
        }

        // This modifies the actual elements inside 'nums'
        for (auto& n : nums) {
            n *= 2;  // modifies the original elements
        }

    Summary:
        'auto'  → creates a copy
        'auto&' → creates a reference (no copy)
        'const auto&' → reference but cannot modify original
*/

