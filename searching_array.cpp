#include <iostream>

int SearchArray(int array[], int size, int element);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[1]);
    int MyNum;

    std::cout << "ENTER THE ELEMENT TO SEARCH FOR: ";
    std::cin >> MyNum;

    int index = SearchArray(numbers, size, MyNum);

    if(index != 1)
    {
        std::cout << "THE INDEX OF NUMBER YOU ARE SEARCHING FOR IS: " << index;
    }
    else
    {
        std::cout << "THe NUMBER IS NOT IN LIST";
    }

    return 0;
}

int SearchArray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }

    return -1; // in programming -1 is a sentinel value, it typically means something was not found. This is not a part of language, but a custom of sort
}

// this is a linear search