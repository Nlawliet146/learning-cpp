#include <iostream>

int main(){   // std means standard while cout means charcter output
    std::cout << "Hello WORld!" << std::endl; // endl means end of line it shifts the cursor to next line..is adv is that it flush output buffer
    std::cout << "Will i succed..." << '\n'; // \n has same fxn as endl it means new line...it has better performance
    std::cout << "YES I WILL" << std::endl;
    return 0; // return 0 signify end of block inside int main() and ; means end of statement
}

/*
NOTE: In C++, "\n" is a special escape sequence that creates a new line,
not the literal characters '\' and 'n'.
If you want to display "\n" as plain text (not start a new line), use these alternatives:

1) std::cout << "\\n";  
   → The first '\' escapes the second, so it prints a single '\' followed by 'n'.

2) std::cout << R"(\n)";  
   → Raw string literal: everything inside R"( ... )" is printed exactly as written.

3) std::cout << '\' << 'n';  
   → Prints '\' and 'n' as two separate characters.

All three will output: \n
*/
