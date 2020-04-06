// Functions
#include <iostream>

// Find the greater of two integers
int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    // set up variables
    bool runProgram = true;
    int value1 = 0;
    int value2 = 0;

    // create a while loop to disallow incorrect input
    while (runProgram == true)
    {
        std::cout << "Please input number 1: ";
        std::cin >> value1;
        std::cout << "Please input number 2: ";
        std::cin >> value2;
        if (value1 == value2)
        {
            // if the inputs are the same, try again
            std::cout << "Values must be different to find a Max value"
            << std::endl << "Try again." << std::endl;
            runProgram = true;
        }
        else
        {
            // now that the values can have a max,
            // find the max
            // and end the program
            std::cout << "The highest number is: "
            << Max(value1, value2) << std::endl;
            runProgram = false;
        }
    }
}

