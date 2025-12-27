#include <iostream>

namespace first{ // here first is name of namespace
    int x = 2;
}
namespace second{
    int y = 3;
}
int main(){  
    // Namespace = Provides a soln for preventing name conflicts in large projects.
    //             Each entity needs a unique name. A namespace allows for identically named variables as long as
    //             namespace are different
    using namespace second; // another method to call the namespace now below this line the value of x and y will be that in namespace..shall be used at start
    using std::string; //now i dont need to write std::string to declare a string only string will work

    int x = 0;

    std::cout << x << '\n' << first::x << '\n'; // :: means scope resolution operator
    std::cout << y << '\n';  // y of namespace was used even without declaring it here
    
    string name = "IT WORKS";
    std::cout << name;

    return 0;
}