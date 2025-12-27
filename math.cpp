#include <iostream>
#include <cmath>

namespace first{
    double x = 3.94;
}

int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z << '\n';

    z = std::min(x, y);
    std::cout << z << '\n';
    // min and max are not part of <cmath> header (they are in <algorithm>)

    z = pow(x, y);
    std::cout << z << '\n';

    z = sqrt(9);
    std::cout << z << '\n';

    z = abs(-3); // returns the absolute value (like modulus for negatives)
    std::cout << z << '\n';

    z = round(first::x); // rounds to nearest integer
    std::cout << z << '\n';

    z = ceil(first::x); // returns smallest integer greater than or equal to value
    std::cout << z << '\n';

    z = floor(first::x); // returns largest integer less than or equal to value
    std::cout << z << '\n';

    return 0;
}
