#include <iostream>
#include <ctime>

char getUserchoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char comp);

int main()
{
    srand(time(0)); // this will be used in getComputerChoice to genrate a random number 

    char player;
    char computer;
    char again;

    do
        {
            player = getUserchoice();
            std::cout << "YOUR CHOICE IS: ";
            showChoice(player);

            computer = getComputerChoice();
            std::cout << "COMPUTER'S CHOICE IS: ";
            showChoice(computer);

            chooseWinner(player, computer);

            std::cout << "WANNA PLAY AGAIN? (Y/N): ";
            std::cin >> again;

        } while(again == 'y' || again == 'Y');
    
    return 0;
}

char getUserchoice()
{
    char player;
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "**************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissor\n";
        std::cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice()
{
    // we can declare srand() here to but the problem will be the seed generated will be same if code runs twice in a one second, by introducing it first in int main() it will automatically generate diff value the second time irrespective of second pass
    // now it will generate pseudo random number
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r'; // since we are returning the value, it is synonymous to break (in a sense). Therefore no need to ass break;
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "ROCK\n";
        break;
    case 'p':
        std::cout << "PAPER\n";
        break;
    case 's':
        std::cout << "SCISSOR\n";
        break;
    }
}
void chooseWinner(char player, char comp)
{
    switch (player)
    {
    case 'r':
        if (comp == 'r')
        {
            std::cout << "IT IS A TIE!\n";
        }
        else if (comp == 's')
        {
            std::cout << "YOU WIN!!\n";
        }
        else
        {
            std::cout << "YOU LOSE!\n";
        }
        break;
    case 'p':
        if (comp == 'p')
        {
            std::cout << "IT IS A TIE!\n";
        }
        else if (comp == 'r')
        {
            std::cout << "YOU WIN!!\n";
        }
        else
        {
            std::cout << "YOU LOSE!\n";
        }
        break;
    case 's':
        if (comp == 's')
        {
            std::cout << "IT IS A TIE!\n";
        }
        else if (comp == 'p')
        {
            std::cout << "YOU WIN!!\n";
        }
        else
        {
            std::cout << "YOU LOSE!\n";
        }
        break;
    }
}