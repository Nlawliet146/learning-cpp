#include <iostream>

// cout << (insertion operator)
//cin >> (extraction opearator)

int main(){
    std::string name;
    int age;

    std::cout << "YOUR AGE? ";
    std::cin >> age;

    std::cout << "WHAT IS YOUR NAME? ";
    std::getline(std::cin >> std::ws, name); // reads full line including spaces

    std::cout << "HELLO " << name << std::endl;

    std::cout << "YOU ARE " << age << " YEARS OLD";
    return 0;
}

// >> means extractor (used to extract input from the stream)
// >> std::ws means extract and discard all leading whitespace (spaces, tabs, and newlines) before the next input

// std::cin >> stops reading at the first whitespace (like space, tab, or newline)
// When it stops, it leaves the newline character ('\n') still sitting in the input buffer
// getline() reads until it finds a newline — so if that leftover '\n' is still there,
// getline() will immediately stop and think the input is empty
// Therefore, we use std::ws to remove (extract) that leftover whitespace/newline before getline()
// This ensures getline() starts reading the actual text input correctly
