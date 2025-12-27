#include <iostream>

int main()
{
    std::string cars[][3] = {{"BMW", "ferrari", "Lambo"},
                            {"Toyota", "Hector", "Hyundai"},
                            {"Thar", "Fortuner", "Creta"}};  
    // NOTE: i used three types because i want to, i can use n number since first [] is empty
    // for 2d arrays we need two square bracket, the first is rows and second sqaure bracket is coloumn (kind of like numpy)
    // NOTE: first sqaure bracket can be empty, but the second have to be filled

    // to access them we need two index
    std::cout << cars[1][2] << '\n';
    std::cout << cars[2][1] << '\n';
    std::cout << cars[0][0] << '\n';

    std::cout << '\n';

    // to iterate:

    int rows = sizeof(cars)/sizeof(cars[0]); //NOTE: each lsit is an element and supposedly we have actually 3 elements which themselves hasa 3 subelement of there own
    int colomns = sizeof(cars[0])/sizeof(cars[0][0]); // NOTE: can use any number untill valid index cuz each number of subelement shall be equal in each element
                                                        
    
    for(int i = 0; i < rows; i++)
    {
        std::cout << cars[i] << '\n'; // will give address since elements are arrays themselves
    }

    std::cout << '\n';
     
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < colomns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}