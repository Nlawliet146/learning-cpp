#include <iostream>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);
int myNum = 3; // this is a global variable here

int main()
{
    // overloaded function

    bakepizza();
    bakepizza("MUSHROOM");
    bakepizza("MUSHROOM", "PANEER");

    int myNum = 2; // this is a local variable since it is inside a function int main()

    std::cout << myNum /*this will print the local one*/ << '\n' << ::myNum /*this will be a gloabal one due to that :: behind mynum    */; 

    return 0;
}

void bakepizza()
{
    std::cout << "HERE IS YOUR PIZZA\n";
}
void bakepizza(std::string topping1)
{
    std::cout << "HERE IS YOUR " << topping1 << " PIZZA!\n" ; 
}
void bakepizza(std::string topping1, std::string topping2)
{
    std::cout << "HERE IS YOUR " << topping1 << " AND " << topping2 <<" PIZZA!\n" ; 
}

// BASICALLY A SAME FUNCTION CAN BE DEFINED SEVERAL TIMES WITH DIFFERENT ARGUMENTS
// USE OF THIS IS VERSALITY OF FUNCTION IS INCREASED

// LOCAL VARIABLE = DECLARED INSIDE A FUNCTION OR A BLOCK
// GLOBAL VARIABLE = DECLARED OUTSIDE OF ALL FUNCTIONS
