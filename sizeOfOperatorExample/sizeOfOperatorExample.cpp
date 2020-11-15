/*3. Write a program in C++ to find Size of fundamental data types.*/

#include<iostream>

class sizeOfOperatorExample
{
public:
    void findSizeOfPrimitiveDataTypes()
    {
        char a;
        short b;
        int c;
        long d;
        long long e;
        float f;
        double g;
        long double h;
        bool i;
        std::cout << "The sizeof(char) is : " << sizeof(a) << std::endl;
            std::cout << "The sizeof(short) is : " << sizeof(b) << std::endl;
            std::cout << "The sizeof(int) is : "<<sizeof(c) << std::endl;
            std::cout << "The sizeof(long) is : " << sizeof(d) << std::endl;
            std::cout << "The sizeof(long long) is : " << sizeof(e) << std::endl;
            std::cout << "The sizeof(float) is : " << sizeof(f) << std::endl;
            std::cout << "The sizeof(double) is : " << sizeof(g) << std::endl;
            std::cout << "The sizeof(long double) is : " << sizeof(h) << std::endl;
            std::cout << "The sizeof(bool) is : " << sizeof(i) << std::endl;
    }

};