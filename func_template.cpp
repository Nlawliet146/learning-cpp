#include <iostream>

/*
int max(int x, int y)
{
    return (x > y) ? x : y;
} 
this function is not compatible with other data type, one way to make it compatible is overloading the function
*/

// Other way is using template, common naming convention for using template is T

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}

// if we want to compare two characters of different datatype then what we can do is introduce another template

template <typename T, typename U>
auto max2(T x, U y)
{
    return (x > y) ? x : y;
} // this function will now compare entities of two data type

int main()
{
    // Function template = describes what a function looks like.
    //                     Can be used to generate as many overload function
    //                     as needed, each using differnet data type

    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.1) << '\n';
    std::cout << max('5', '6') << '\n';

    std::cout << max2(1, 1.4) << '\n';
    std::cout << max2(1.1, '6') << '\n';
    std::cout << max2('5', 2.1) << '\n'; // while comapring a string, the ASCII number of string is considered

    return 0;
}