/* C++ provides following two types of string representations: 
The C-style character string (null terminated character array)
The string class type introduced with Standard C++ */

/*6. Give an example to clarify how to use C-style character string in C++ and various related functions*/

#include <iostream>

class stringExample1
{
public:
    void printMessage()
    {
        char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
        std::cout << "Greeting message: ";
        std::cout << greeting << std::endl;
    }
    void stringFuntions()
    {
        //char strResult[10];
        char greeting1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
        std::cout << "The length of greeting 1 is: "<< strlen(greeting1)<<std::endl; //length of the string/array
        char greeting2[6] = { 'W', 'o', 'r', 'l', 'd', '\0' };
        std::cout << "The length of greeting 2 is: " << strlen(greeting2) << std::endl;
        std::cout << "The concatenated string is: " << strcat_s(greeting1, greeting2) << std::endl; //concatenates two character arrays 
    }
};