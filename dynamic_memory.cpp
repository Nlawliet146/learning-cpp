#include <iostream>

int main()
{
    /* dynamic memory = Memory that is allocated after the programme is already compiled and running.
       Use the 'new' operator to allocate in the heap rather in stack

       Useful when we don't know how much memory we will need.
       Makes program more flexible especially when accepting user input

       there are these memory: heap > stack> global/static> text(code)
    */

    int *pnum = NULL; 

    pnum = new int;
    *pnum = 21;

    std::cout << "address: " << pnum << '\n';
    std::cout << "value: " << *pnum << '\n';
    
    // whenever you use new operator, use delete operator at last so as to free up that empty space at the end of code or section of code

    delete pnum;
    // IMPORTANT NOTE:
    // 'new' allocates memory on the heap and returns its address.
    // Every 'new' must have a matching 'delete'; otherwise the allocated memory
    // stays reserved for the entire program lifecycle, causing a memory leak.
    // Here, 'delete pnum;' correctly frees the allocated int. It does NOT cause
    // a leak. Forgetting delete would.

    char *pGrades = nullptr;
    int size;
    
    std::cout << "HOW MANY GRADES TO ENTER IN?: ";
    std::cin >> size;
    
    pGrades = new char[size]; // for an array just write [] 

    for(int i = 0; i < size; i++)
    {
        std::cout << "ENTER GRADE NUMBER #" << i + 1 << ": ";
        std::cin >> pGrades[i]; // we can also write pGrade + i
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << '\n';
    }

    delete[] pGrades; // we use [] after delete for arrays    
 
    return 0;
}