#include <iostream>

int main()
{
    // NULL VALUE = special value which means something has no value
    //              when a pointer is holding a null value, that pointer is not pointing at anything (null point)

    // nullptr = keyboard represents a null pointer literal

    // nullptrs are helpful in determining if an address was successfully assigned to a pointer

    int *pointer = nullptr; // since we are not assigning any addrress to this pointer,
                            // it will be a good habit to assign this a null point, so it doesnt create any error in the program
    int x = 1709;

    pointer = &x;

    // a system of check and balances - check whether the pointer is null or not,
    // since a nullptr or unassigned pointer will give unidentified output (an error)

    if (pointer == nullptr)
    {
        std::cout << "NOT SUCCUSSFUL in assiging address";
    }
    else
    {
        std::cout << "all GOOD, you can safely access the pointer" << '\n';
        std::cout << *pointer;
    }

    return 0;
}