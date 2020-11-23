/*10. Write an example demonstrating range-based for loop in C++*/

/* Range based for loops have specific usage which is to iterate through collections.
*
*
*/

#include<iostream>
#include <vector>
class rangeBasedForLoop
{
    int sumOfNumbers = 0;
public:

    void addNumbers(std::vector<int> &numbers)
    {
        for (int a : numbers) //Here, we are using a range based for loop to iterate over the passed vector 
        {
            sumOfNumbers += a;
        }
        std::cout << "The sum of numbers is: " << sumOfNumbers << "\t";

    }

    void printNumbers()
    {
        std::vector<int> numberVector{ 1,2,3,4,5 };
        int numberArray[] = { 1,2,3,4,5 };

        /* Normal for loop will look like this */
        for (int i = 0; i < 5; i++)
        {
            std::cout << numberArray[i] << "\t" << std::endl << std::endl;

        }

        /* Range based for loop will look like this.
        * We take the data type we are iterating through, create a temperorary variable that will hold the value while iterating, and
          the source/collection over which we are iterating through.
        */
        for (int a : numberVector)
        {
            std::cout << a << "\t"<<std::endl; //We could print a as it contains the data from the numberArray
        }

        /* Calling sum addNumber funtion and passing a reference number vector to it*/
        addNumbers(numberVector);
    }
};
