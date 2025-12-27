#include <iostream>

void swap(std::string x, std::string y);
void swap_working(std::string &x, std::string &y);

int main()
{
    std::string x = "cola";
    std::string y = "water";
    std::string temp;

    // TO SWAP VARIABLES

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n' << '\n';

    swap(x, y); // THIS WONT CHANGE/SWAP, BECAUSE WHEN WE PASS VARIABLE IN FUNCTION WE PASS BY VALUE
                // WHEN WE INVOKE THE FUNCTION WE ARE CREATING COPY OF ORIGNAL VALUE, SO WHAT ACTUALLY
                // SWTICHED WERE THE COPIES AND NOT THE ORIGNAL
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n' << '\n';
    // IF I WERE TO CHANGE THE ORIGNAL THEN I NEED TO PASS WITH REFERENCE
    // a REFERENCE OF MEMORY ADDRESS, aN ADDRESS IS WHERE THE DATA IS LOCATED IN COMPUTER

    swap_working(x, y);
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
     
    return 0;
}

void swap(std::string x, std::string y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_working(std::string &x, std::string &y) // by addign & what we will be passing in the function is memeory address
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
