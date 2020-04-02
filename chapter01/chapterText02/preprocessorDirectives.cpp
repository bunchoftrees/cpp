// Macro example - Defining a value and function-like macro
#include <iostream>
#include <string>

#define HELLO_WORLD "Hello World!\n"
#define MULTIPLY(a, b) (a * b)

int main()
{
    
    std::cout << HELLO_WORLD;
    std::cout << MULTIPLY(3, 4) << "\n";
    std::cout << "Welcome, Forrest!\n";
}