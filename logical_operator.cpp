#include <iostream>

int main()
{
    // && = checks if two conditions are true
    // || = checks if atleast one of the two condtion is true
    // ! = reverses the logical state (that is turns operator to work opposite of what it works)
    int temp;
    bool sunny; //BY DEFAULT VALUE OF BOOL IS FALSE
    std::cout << "ENTER THE TEMPERATURE: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "TEMPERATURE IS GOOD\n";
        sunny = true;
    }
    else{
        std::cout << "TEMPERATURE SUCKS\n";
    }

    // using ||
    if(temp < 0 || temp > 30){
        std::cout << "TEMPERATURE SUCKS\n";
    }
    else{
        std::cout << "TEMPERATURE IS GOOD\n";
        sunny = true;
    }

// equality and !
    if(sunny){
        std::cout << "THE WEATHER IS PLEASENT\n";
    }
    else{
        std::cout << "THE WEATHER IS NOT THAT GOOD\n";
    }
// using !
    if(!sunny){
        std::cout << "THE WEATHER IS NOT THAT GOOD\n";
    }
    else{
        std::cout << "THE WEATHER IS PLEASENT\n";
    }


    return 0;
}