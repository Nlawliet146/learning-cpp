#include <iostream>
#include <ctime>
#include <algorithm>

void drawBoard(char *spaces); // ARGUMENT = a pointer to an array named spaces
void Playermove(char *spaces, char player);
void Computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool checktie(char *spaces);

int main()
{
    srand(time(NULL));

    char spaces[9];
    std::fill(spaces, spaces + 9, ' ');

    char player = 'X';
    char computer = 'O';

    bool running = true;

    drawBoard(spaces);

    while (running)
    {
        Playermove(spaces, player);
        drawBoard(spaces);

        if (checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }

        Computermove(spaces, computer);
        drawBoard(spaces);

        if (checkwinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if (checktie(spaces))
        {
            running = false;
            break;
        }
    }

    std::cout << "THANKS FOR PLAYING!";

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |    " << '\n';
    std::cout << '\n';
}

void Playermove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a spot to place a marker (1-9): ";

        if (!(std::cin >> number))
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input! Please enter a number between 1 and 9.\n";
            continue;
        }

        number--;

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        else if (spaces[number] == 'X' || spaces[number] == 'O')
        {
            std::cout << "ALREADY OCCUPIED, CHOOSE ANOTHER MARKER!!" << '\n';
        }
    } while (!number > 0 || !number < 8);
}

void Computermove(char *spaces, char computer)
{
    int number;

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            std::cout << "Computer places the marker at " << (number + 1);
            break;
        }
        else if (spaces[number] == 'X' || spaces[number] == 'O')
        {
            number = rand() % 9;
        }
    }
}

bool checkwinner(char *spaces, char player, char computer)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])) // spaces[0] != ' ' safe check, only works when spaces are non empty
    {
        spaces[0] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[8] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[3] == spaces[0]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "YOU WIN!!\n" : std::cout << "YOU LOSE, LOL!\n";
    }
    else
    {
        return false;
    }

    return true;
}

bool checktie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }

    std::cout << "IT IS A TIE!!";
    return true;
}
