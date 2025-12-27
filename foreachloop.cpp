#include <iostream>

int main()
{
    // for each loop = loop that eases the traversal over iterable data set

    std::string students[] = {"GOKU", "LUFFY", "NARUTO", "ICHIGO"};

    // STANDARD ITERATION METHOD

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++)
    {
        std::cout << students[i] << '\n';
    }

    // we need to give three variable inside for loop

    // FOR-EACH METHOD, easier but less flexible

    for(std::string student : students) // 1st argument, what are we iterating over, this case string, so we named it student, then we pass on which string type to iterate on, here it is students
    {
        std::cout << student << '\n';
    }

    int grades[] = {65, 72, 93};

    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }

    // the disadvantage is that it will traverse the array completly, with no way of stopping in between

    return 0;
}