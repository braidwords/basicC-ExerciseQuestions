/*4. Write a program in C++ to demonstrate function Overloading */
/*the function must differ from each other by the types and/or the number of arguments in the argument list. 
You cannot overload function declarations that differ only by return type.*/

#include<iostream>
class calculateVolume
{
public:
    /*Function 1: To calculate volume of a cube*/

    void volume(int side)
    {
        if (side > 0)
        {
            std::cout << "Volume of Cube: " << side * side * side << std::endl;
        }
        else
        {
            std::cout << "Volume of Cube is Zero";
        }
       
    }

    /*Funtion 2: To calculate volume of a cylinder*/

    void volume(int radius, int height)
    {
        std::cout << "Volume of Cylinder: " << 3.14*radius*radius*height << std::endl;
    }

    /*Function 3: To calculate volume of cuboid*/

    void volume(int length, int breadth, int height)
    {
        std::cout << "Volume of Cuboid: " << 3.14 * length * breadth * height << std::endl;
    }
};
