#include <iostream>

void happyBirthday(std::string name){  // syntax for defining a function = return_type function_name(parameters) {}
    std::cout << "HAPPY BIRTHDAY! " << name << "\n";
    std::cout << "HAPPY BIRTHDAY! " << name << "\n";
    std::cout << "HAPPY BIRTHDAY DEAR " << name << "\n";
    std::cout << "HAPPY BIRTHDAY " << "TO YOU!" << "\n";
}

int main()
{
    // function = a block of reusable code that performs a specific task when called
    // "void" means the function does not return any value
    // "std::string name" in the parameter acts like a variable that receives the argument (here: "Naman")

    std::string name = "Naman";  // variable to store the name passed to the function

    happyBirthday(name); // function call → passes "name" to the function; code inside executes with that value

    return 0;
}

/** 
return_type → tells the compiler what type of value the function will give back to the caller.
For example:
    int add() → returns an integer value.
    double area() → returns a decimal value.
    std::string getName() → returns a string.
If a function does not need to return any value (it just performs an action), 
we use 'void' as the return_type — as seen in this program.
**/

/*
If you define a function *after* int main(), the compiler won’t know it exists 
when main() tries to call it — this causes an "implicit declaration" or "function not declared" error.
To fix it, you must declare the function before main() using a **function prototype**, like this:
*/
