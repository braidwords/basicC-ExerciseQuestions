/*1. Write a program in C++ to print a welcome text in a separate line.*/
/*\n is used to insert a newline in C++*/

#include <iostream>

class welcomeText
{
public:
    void printMessage()
    {
        std::cout << "<----------------------------------------->\n"; 
        std::cout << "Welcome to C++ Basic Exercise Questions \n" << std::endl;
    }
};

