#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);  // can use sizeof(prices)/sizeof(double)

    double total = getTotal(prices, size);
    std::cout << "$ " << total;
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}

// NOTE:
// When an array is passed to a function using [], it decays into a pointer.
// A pointer does NOT store the array's length, it stores it location, so a range-based for loop cannot, that is 'foreach' loop
// determine how many elements to iterate. Therefore, we must explicitly pass the array size 