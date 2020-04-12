// Preprocessor directives and macros
#include<iostream>
#include<string>

#define GRADE_D_THRESHOLD 60
#define GRADE_C_THRESHOLD 70
#define GRADE_B_THRESHOLD 80
#define GRADE_A_THRESHOLD 90

int main()
{
    int value = 0;
    std::cout << "Please enter a test score (0 - 100):\n";
    std::cin >> value;

    if (value < GRADE_D_THRESHOLD)
    {
        std::cout << "Fail: " << value << "\n";
        std::cout << "A passing score must be 60 or higher.\n";
    }
    else if (value < GRADE_C_THRESHOLD)
    {
        std::cout << "Pass: Grade D\n";
    }
    else if (value < GRADE_B_THRESHOLD)
    {
        std::cout << "Pass: Grade C\n";
    }
    else if (value < GRADE_A_THRESHOLD)
    {
        std::cout << "Pass: Grade B\n";
    }
    else if (value < 100)
    {
        std::cout << "Pass: Grade A\n";
    }
    else
    {
        std::cout << "Pass: A+\n";
    }
}
