#include <iostream>

int main()
{
    std::string name;
    std::cout << "WHAT IS YOUR NAME: ";
    std::getline(std::cin >> std::ws, name);

    name.length(); //gives length if string | default: returns 0 if string is empty
    name.empty(); //checks whether string is empty...returns a boolean value | default: returns true if string has no characters
    name.clear(); //clears the string | default: makes string empty ("")
    name.append("@GMAIL.COM"); //appends one string to another | default: if string was empty, this becomes "@GMAIL.COM"
    name.at(0); //tells the charcter at given index of string...here the index given is zero | default: throws 'out_of_range' error if string is empty
    name.insert(0, "MR. "); //inserts the given string at given index...here given index is zero | default: if index > length, throws 'out_of_range' error
    name.find(' '); //finds if the given string have this string in it... ' ' it checks a whitespace | default: returns std::string::npos if not found
    name.erase(0, 3); // removes characters from given indexes.including the upper limit...here the range of deletion was 0 and 3 | default: if index > size, throws 'out_of_range' error

}

// every function needs to be printed for result except append and clear....they will make changes to string 
// even if not printed
