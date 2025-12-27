#include <iostream>
#include <iomanip> //there is a function in here which lets you set precision in double choices "std::setprecision(2) << std::fixed"

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*********************\n";
        std::cout << "ENTER YOUR CHOICE: \n";
        std::cout << "*********************\n";
        std::cout << "1) SHOW BALANCE \n";
        std::cout << "2) DEPOSIT \n";
        std::cout << "3) WITHDRAW \n";
        std::cout << "4) EXIT \n";

        while (!(std::cin >> choice))
        {
            std::cout << "INVALID INPUT! Enter a number: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout << "THANKS FOR VISITNG! \n";
            std::cout << "*********************\n";
            break;
        default:
            std::cout << "INVALID CHOICE \n";
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
    std::cout << "YOUR BALANCE IS: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
    double amount = 0;

    std::cout << "ENTER AMOUNT TO BE DEPOSITED: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "THAT IS NOT A VALID AMOUNT: ";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount;

    std::cout << "ENTER AMOUNT TO BE WITHDRAWN: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "INSUFFICIENT FUNDS\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "THAT IS NOT A VALID AMOUNT: ";
        return 0;
    }
    else
    {
        return amount;
    }
}
