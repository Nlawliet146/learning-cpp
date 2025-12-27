#include <iostream>

int main()
{
    std::string foods[5];  
    // Fixed-size array that can store up to 5 food names

    int size = sizeof(foods) / sizeof(foods[0]);
    // Calculates total number of elements in the array

    std::string temp;
    // Temporary variable to store user input before assigning

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);

        if(temp == "q")
        {
            break;  
            // Stops taking input early if user enters 'q'
        }
        foods[i] = temp;
        // Stores valid input into the array
    }

    std::cout << "\nYou like the following food:\n";

    for(int i = 0; i < size && !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n';
        // Prints only elements that were actually filled
    }

    return 0;
}
