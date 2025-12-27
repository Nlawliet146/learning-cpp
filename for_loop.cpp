#include <iostream>

int main()
{
    for(int i = 1; i <= 3; i++){ //1st statement to set an index, second to set the limit, third to set increment
        std::cout << "HAPPY NEW YEAR!\n";
    } 

    //BREAK = break out of loop
    //CONTINUE = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue; // now i will be skipped
        }
        if(i == 17){
            break; // loop will stop at 16....if this was written after print(i) then the loop will stop at 17
        }

        std::cout << i << '\n';
    }

    return 0;
}