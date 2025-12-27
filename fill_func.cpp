#include <iostream>

int main()
{
    // fill() = fills a range of elements with a specified value. fill(start, end, value)

    //std::string foods[5] = {"Pizza", "Pizza", "Pizza", "Pizza", "Pizza"}; 
    // it is not practical to type all of the elements in the list 

    // instead we can do this:

    const int SIZE = 10;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "Pizza");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    // we can also fill with multiple values
    fill(foods, foods + (SIZE/2), "Pizza");
    fill(foods + (SIZE/2), foods + SIZE, "Burgers");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}

/*
    IMPORTANT NOTE ABOUT ERRORS:

    (1) std::fill() is defined inside the <algorithm> header.
        Without including <algorithm>, the compiler normally cannot find fill().

    (2) When using std::string arrays, some compilers include parts of
        <algorithm> indirectly through the <string> header.
        This is not standard behavior, but it can make fill() appear to work
        even without including <algorithm>.

    (3) When using char arrays (like char spaces[10]), no indirect include happens.
        Because <string> is not involved, the compiler does NOT pull in <algorithm>,
        so fill() causes an error:
            "fill was not declared in this scope"

    (4) Correct and guaranteed method for all datatypes:
            #include <algorithm>
            std::fill(...)

    (5) Summary: string arrays may accidentally allow fill() without <algorithm>,
        but char arrays will always require <algorithm>.
*/
