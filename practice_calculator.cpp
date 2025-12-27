#include <iostream>

int main()
{
    char op;
    std::cout << "WELCOME TO THE CALCULATOR" << '\n';

    double a;
    std::cout << "CHOOSE YOUR FIRST NUMBER: ";
    std::cin >> a;

    double b;
    std::cout << "CHOOSE YOUR SECOND NUMBER: ";
    std::cin >> b;

    double ans;

    std::cout << "CHOOSE OPERATOR (+,-,*,/): ";
    std::cin >> op;
    
    if (op == '/' && b == 0)
    {
        std::cout << "NUMBER CANT BE DIVIDED BY ZERO"; 
    }
    else if (op == '+' || op == '-' || op == '*' || op == '/')
    {

        switch (op)
        {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        }
        std::cout << "YOUR ANSWER IS: " << ans;
    }
    else
    {
        std::cout << "CHOOSE A VALID OPERATOR!!";
    }

    return 0;
}