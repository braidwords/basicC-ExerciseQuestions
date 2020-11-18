/*Question 8: Write a program in C++ to compute quotient and remainder.*/


#include <iostream>

class quotientAndRemainder
{
    int dividend;
    int divisor;
public:
    void findQuotientAndRemainder()
    {
        std::cout << "Enter Dividend" << std::endl;
        std::cin >> dividend;
        std::cout << "Enter Divisor" << std::endl;
        std::cin >> divisor;
        if (dividend && dividend > 0)
        {
            int quotient = dividend / divisor;
            std::cout << "Quotient is: " << quotient<<std::endl;
            int remainder = dividend % divisor;
            std::cout << "Remainder is: " << remainder << std::endl;
        }
        else
        {
            std::cout << "Dividend and Divisor must be greater than zero";
        }


    }
};