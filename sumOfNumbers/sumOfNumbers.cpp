/*2. Write a program in C++ to print the sum of two numbers. */

#include<iostream>

class sumOfNumbers
{
private:
    int number1 = 0;
    int number2 = 0;
public:
    void insertNumbers()
    {
        std::cout << "Enter two numbers";
        std::cin >> number1;
        std::cin >> number2;
    }
    void sumNumbers()
    {
        insertNumbers();
        int result = number1 + number2;
        std::cout << "The sum of numbers is: " << result << std::endl;
    }

};