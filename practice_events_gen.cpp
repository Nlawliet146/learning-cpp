#include <iostream>
#include <ctime>

int main()
{
    // pseudo random = NOT truly random (but close)

    srand(time(NULL));  
    /***
     * srand(time(NULL)) → "seed random"
     * It initializes the random number generator using the current system time (in seconds).
     * Why? Because without seeding, rand() always starts from the same default seed (1),
     * meaning every run gives the *same sequence* of numbers.
     * By using the current time as a seed, each program run (done at a different second)
     * starts from a different seed — producing a *different* random sequence every time.
     * 
     * time(NULL) or time(0) → returns current time in seconds since Jan 1, 1970
     * (we use it since time changes continuously, ensuring varying randomness)
     ***/

    // random number gen
    int num = rand(); // choose a random number between 0-32767
    int num2 =  rand() % 6; // this will generate number 0-5, why? simple since remainder can be 0 to 5 for any number divided by 6
    int num3 = (rand() % 6) + 1; //number between 1-6 due to that plus 1
    std::cout << num << '\n' << num2 << '\n' << num3 << '\n';

    // random events gen
    srand(time(0));
    int randNUM = rand() % 5 + 1;
    
    switch(randNUM)
    {
        case 1: std::cout << "@\n"; break;
        case 2: std::cout << "#\n"; break;
        case 3: std::cout << "!\n"; break;
        case 4: std::cout << "$\n"; break;
        case 5: std::cout << "&\n"; break;
    }    
    return 0;
}

/***
 * Difference between time(0) and time(NULL):
 * Both are exactly the same in this context.
 * In C/C++, NULL is just a macro for 0 (used to represent a null pointer).
 * Since the time() function accepts a pointer (time_t*), 
 * passing either 0 or NULL means “no pointer provided”.
 * So → time(0) == time(NULL)  (no difference in behavior)
 ***/
