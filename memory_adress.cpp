#include <iostream>

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can be accessed using & (address-of operator)

    std::string name = "NAMAN GARG";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    /*
    You may notice that the printed memory addresses (when shown
    in decimal form by some environments) are close to each other,
    but not the same.

    Reason:
    1) Variables are stored in memory sequentially, but each data
      type occupies a different number of bytes.
        bool    = usually 1 byte
        int     = usually 4 bytes
        string  = much larger (object with internal data)

    2) Because of this, the next variable starts at a different
      memory offset, leading to different address values.

    Important:
    1 The compiler often prints addresses in hexadecimal (0x...)
      because it maps directly to binary memory representation
      and is easier for low-level debugging.
    2 The exact address values are NOT fixed and may change
      every time the program runs.
    */

    return 0;
}
