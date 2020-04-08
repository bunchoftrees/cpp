// Activity One
#include <iostream>
#include <string>

// Define group thresholds
#define GROUP_A_THRESHOLD 23
#define GROUP_B_THRESHOLD 39
#define GROUP_C_THRESHOLD 56

// Define group names
#define GROUP_A_NAME "Gen Z"
#define GROUP_B_NAME "Millenial"
#define GROUP_C_NAME "Gen Xer"
#define GROUP_D_NAME "Boomer"

// Create a function to determine generation membership
std::string GetGen(int age)
{
    if (age <= GROUP_A_THRESHOLD)
    {
        return GROUP_A_NAME;
    }
    else if (age <= GROUP_B_THRESHOLD)
    {
        return GROUP_B_NAME;
    }
    else if (age <= GROUP_C_THRESHOLD)
    {
        return GROUP_C_NAME;
    }
    else
    {
        return GROUP_D_NAME;
    }
}

int main()
{
    // Setting up inputs
    std::string firstName;
    std::string lastName;
    std::string name = "";
    int age = 0;

    // Ask for user input
    std::cout << "What's your first name?"
              << std::endl;
    getline(std::cin, firstName);
    std::cout << "What's your last name?"
              << std::endl;
    getline(std::cin, lastName);
    std::cout << "How old are you?"
              << std::endl;
    getline(std::cin, name);
    age = std::stoi(name);

    // variable that stores the returned value of GetGen(age)
    std::string group = GetGen(age);
    std::cout << "Welcome " << firstName
              <<" " << lastName << ". You are a "
              << group << "." << std::endl;
}
