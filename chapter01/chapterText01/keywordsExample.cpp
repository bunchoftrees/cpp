
// Keywords example
#include <iostream>
#include <string>

int main()
{
    // Data types
    int myInt = 1;
    double myDouble = 3.14;
    char myChar = 'C';
    bool myBool = true;
    std::string myString = "Forrest\n";

    std::cout << myInt << std::endl
              << myDouble << std::endl
              << myChar << std::endl
              << myString;

    // Flow keywords
    if (myBool)
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }

    struct myStruct
    {
        int myInt = 2;
    };

}
