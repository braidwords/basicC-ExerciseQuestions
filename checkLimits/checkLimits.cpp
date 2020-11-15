/*4. Write a program in C++ to check the upper and lower limits of primitive data types. */

#include<iostream>
class checkLimits
{
public:
    void checkLimitsOfPrimitiveDataTypes()
    {
        std::cout << "\n\n Check the upper and lower limits of integer :\n";
        std::cout << "--------------------------------------------------\n";
        std::cout << " The maximum limit of int data type :                  " << INT_MAX << std::endl;
        std::cout << " The minimum limit of int data type :                  " << INT_MIN << std::endl;
        std::cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << std::endl;
        std::cout << " The maximum limit of long long data type :            " << LLONG_MAX << std::endl;
        std::cout << " The minimum limit of long long data type :             " << LLONG_MIN << std::endl;
        std::cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << std::endl;
        std::cout << " The Bits contain in char data type :                  " << CHAR_BIT << std::endl;
        std::cout << " The maximum limit of char data type :                 " << CHAR_MAX << std::endl;
        std::cout << " The minimum limit of char data type :                 " << CHAR_MIN << std::endl;
        std::cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << std::endl;
        std::cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << std::endl;
        std::cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << std::endl;
        std::cout << " The minimum limit of short data type :                " << SHRT_MIN << std::endl;
        std::cout << " The maximum limit of short data type :                " << SHRT_MAX << std::endl;
        std::cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << std::endl;
        std::cout << std::endl;
    }
};