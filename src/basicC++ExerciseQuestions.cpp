// basicC++ExerciseQuestions.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "../welcomeText/welcomeText.cpp"
#include "../sumOfNumbers/sumOfNumbers.cpp"
#include "../sizeOfOperatorExample/sizeOfOperatorExample.cpp"
#include "../checkLimits/checkLimits.cpp"
#include "../functionOverloading/calculateVolume.cpp"
#include "../modifierTypes/modifierTypesInC++.cpp"
#include "../stringExamples/stringExample1.cpp"
#include "../quotientAndReminder/quotientAndReminder.cpp"

int main()
{
    /*Question 1*/
    std::cout << "Hello World!\n";
    welcomeText obj;
    obj.printMessage();

    /*Question 2*/
    sumOfNumbers obj1;
    obj1.sumNumbers();

    /*Question 3*/
    sizeOfOperatorExample obj2;
    obj2.findSizeOfPrimitiveDataTypes();

    /*Question 4*/
    checkLimits obj3;
    obj3.checkLimitsOfPrimitiveDataTypes();

    /*Question 5*/
    calculateVolume obj4;
    obj4.volume(20); //This will invoke volume of cube
    obj4.volume(10, 20); //This will invoke volume of Cylinder
    obj4.volume(10, 20, 30); //This will invoke volume of Cuboid 

    /*Question 6*/
    modiferTypes obj5;
    obj5.knowModifier();

    /*Question 7*/
    stringExample1 obj6;
    obj6.printMessage();
    obj6.stringFuntions();

    /*Question 8*/
    quotientAndRemainder obj7;
    obj7.findQuotientAndRemainder();
}

