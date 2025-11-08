#include <iostream>

int main()
{
    // loop within loop
    /*
      loop(){
         loop(){
         }
       }
    */

    bool running = true;

    while(running){
        for(int i = 0; i < 5; i++){
            std::cout << i << '\n';
            if(i == 2){
                running = false;
            }
        }
    }
    // this wont stop at i = 2
    // reason:
    /**
This example shows that changing the condition variable of an outer loop (like `running`)
inside an inner loop does NOT instantly stop the inner loop.
The inner loop will finish its current cycle unless you use `break`.
To stop both loops immediately, use a nested break — one for the inner and one for the outer.
**/

   int rows;

   
   std::cout << "NUMBER OF ROWS: ";
   std::cin >> rows;

   for(int i = 0; i < rows; i++){
    for(int j = i+1 ; j <= rows + i; j++){
        std::cout << j;
    }
    std::cout << '\n';
   }

    return 0;
}