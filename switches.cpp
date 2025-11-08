#include <iostream>

int main(){
    //switch = alternative to using many "if else" statements, compare one value against matching cases
    int week;

    std::cout << "ENTER THE WEEK (1-7) ";
    std::cin >> week;

    switch(week){
        case 1:
           std::cout << "IT IS MONDAY";
           break;
        
        case 2:
           std::cout << "IT IS TUESDAY";
           break;
        case 3:
           std::cout << "IT IS WEDNESDAY";
           break;
        case 4:
           std::cout << "IT IS THURSDAY";
           break;
        case 5:
           std::cout << "IT IS FRIDAY";
           break;
        case 6:
           std::cout << "IT IS SATURDAY";
           break;
        case 7:
           std::cout << "IT IS SUNDAY";
           break;
        default:
           std::cout << "choose a correct week number (1-7)";
    }
    return 0;
}

/*
  Revision Note:
    - switch checks one variable against fixed constant values (cases).
    - Each 'case' must end with 'break' to stop execution from falling into the next case.
    - 'default' runs if none of the cases match.
    - Best used when comparing one variable to multiple known options.
    - case 1 doesn’t literally mean “case number 1” — it means “if the variable’s value equals 1”.
*/
