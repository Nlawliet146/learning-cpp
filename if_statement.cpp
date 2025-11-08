#include <iostream>

int main(){
    // if statement = do something if statement is true. If not then do something else or don nothing.

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "YOU ARE VERY OLD!!";
    }
    else if(age <= 0){
        std::cout << "YOU HAVEN'T BEEN BORN YET";
    }
    else if(age >= 18){
        std::cout << "YOU ARE ELIGIBLE";
    }
    else{
        std::cout << "YOU ARE AN MINOR";
    }
    // ORDER OF IF, ELSE IF AND ELSE STATEMENT TAKES PRIORITY ACCORDING TO WHICH STATEMENT IS IN PRIORTY


    return 0;
}