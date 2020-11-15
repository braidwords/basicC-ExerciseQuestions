/* 5. This program shows the difference between signed and unsigned integers */

#include<iostream>
class modiferTypes
{
public:
    void knowModifier()
    {
        short int i;           // a signed short integer
        short unsigned int j;  // an unsigned short integer (unsigned always hold positive values)

        i = -123;
        j = 123;
        std::cout << i << " " << j;
    }
    
};