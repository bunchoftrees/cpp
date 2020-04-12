# Example Three

This example accepts user input, both string and integer, while also being able to get the local time from the system. We do this by importing the C Time library with an `#include <ctime>` preprocessor directive.

1. Import C Time library
2. In `main()` get the current local time using `time_t`. For more reading and a reference to how I learned this, check out [this link](http://cplusplus.com/forum/beginner/32329/) on the [cplusplus.com](http://cplusplus.com/forum/beginner/) beginner forum. There is likely a way to refactor this to use the system time from the [`chrono`](https://en.cppreference.com/w/cpp/chrono) C++ library.
3. Create variables using strings and integers to get user input. Get the birth year of the user, to calculate their age.
4. Prompt for user input. Remember, if you're parsing a string, use [`getline()`](https://en.cppreference.com/w/cpp/string/basic_string/getline) with the parameters of `std::cin`, `nameOfVariable` within the fuction call.
5. Set up a variable to get the current age of the user by subtracting their birth year from the current year (from system time). 
6. Using standard out, report back what the user's information is.
7. For additional practice, refactor this to determine if the user has already had their birthday. 