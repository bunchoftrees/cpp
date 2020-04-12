// Handling user input, C time library, and basic calculation
#include <iostream>
#include <string>
#include <ctime> // C Time library

int main()
{
    time_t t = time(nullptr);
    tm *timePtr = localtime(&t);
    // tm_year references the number of years elapsed since 1900
    int currentYear = timePtr->tm_year + 1900;

    // Setting up inputs
    std::string firstName;
    std::string lastName;
    int birthYear;

    // Ask for user input
    std::cout << "What's your first name?\n";
    getline(std::cin, firstName);
    std::cout << "What's your last name?\n";
    getline(std::cin, lastName);
    std::cout << "What year were you born?\n";
    std::cin >> birthYear;

    // Setting up calculation
    int currentAge = currentYear - birthYear;

    // Reply with name and age
    std::cout << "Your name is: " << firstName << " " << lastName << std::endl;
    std::cout << "You were born in "
        << birthYear << " which means you turn "
        << currentAge << " this year."
        << std::endl;
}