#include <iostream>

void sort(int array[], int size);
void DescSort(int array[], int size);

int main()
{
    int array[] = {10, 2, 5, 8, 3, 1, 9, 7, 4, 6};
    int array2[] = {10, 2, 5, 8, 3, 1, 9, 7, 4, 6}; // made two copies, one for asc and other for desc
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        std::cout << element << " ";
    }

    std::cout << '\n';

    DescSort(array2, size);

    for (int element : array2)
    {
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++) // the reason the loop is till size - 1, cuz how can we comapre the last element to something on its right.
    { 
        for (int j = 0; j < size - i - 1; j++) // Inner loop goes only till (size - i - 1) because after each pass, the last i elements are already sorted, so no need to check them again.
        {
            if(array[j] > array[j+1]) // for descending order, just change > to <
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
}

void DescSort(int array[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++) 
    { 
        for (int j = 0; j < size - i - 1; j++) // Inner loop goes only till (size - i - 1) because after each pass, the last i elements are already sorted, so no need to check them again.
        {
            if(array[j] < array[j+1]) 
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
}

// Bubble Sort: Compare side-by-side numbers and swap them if needed.
// In each round, the biggest number moves to the end (like a bubble rising).
// This means the next round has fewer numbers left to check.
