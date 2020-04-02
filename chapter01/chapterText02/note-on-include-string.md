# A note about #include <string>

If a std::out << "${someStringHere}"; does not contain a new line "\n" #include <string> appears to not work, and will add a percent symbol to represent the end of your program's output.

While this may not be completely accurate, I'm including this as a placeholder for when I do learn about this behavior.

-f