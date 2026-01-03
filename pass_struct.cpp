#include <iostream>

struct character
{
    std::string name;
    int rating;
    std::string anime_name;
};

void printCharacter(character hero);
void changeRating(character &hero, int rating);

int main()
{
    character character1;
    character character2;
    
    character1.name = "LUFFY";
    character1.rating = 9.9;
    character1.anime_name = "ONE PIECE";

    std::cout << &character1 << '\n';
    printCharacter(character1);
    // the addresses are different, that is one inside func and one outside, this is because
    // when we pass a struct as an argument, then the function creates a copy of it, just like any other datatype 
    // if u want to work with orignal struct then ad & in argument, that is 
    // void printCharacter(character &hero)

    changeRating(character1, 10);
    printCharacter(character1);

    return 0;
}

void printCharacter(character hero)
{
    std::cout << hero.name << '\n';
    std::cout << hero.rating << '\n';
    std::cout << hero.anime_name << '\n';
    std::cout << &hero << '\n';
}

void changeRating(character &hero, int rating)
{
    hero.rating = rating;
}