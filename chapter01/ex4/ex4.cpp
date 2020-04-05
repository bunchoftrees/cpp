#include <iostream>

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
    bool runProgram = true;
    int value1 = 0;
    int value2 = 0;
    while (runProgram == true)
    {
        std::cout << "Please input number 1: ";
        std::cin >> value1;
        std::cout << "Please input number 2: ";
        std::cin >> value2;
        if (value1 == value2)
        {
            std::cout << "Values must be different to find a Max value"
            << std::endl << "Try again." << std::endl;
            runProgram = true;
        }
        else
        {
            std::cout << "The highest number is: "
            << Max(value1, value2) << std::endl;
            runProgram = false;
        }
    }
}

