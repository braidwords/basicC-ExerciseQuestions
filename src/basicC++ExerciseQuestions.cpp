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
#include "../stringExamples/stringExample2.cpp"
#include "../loopTypes/rangeBasedForLoop.cpp"
#include "../switchStatementExample/switchStatementExample.cpp"
#include "../switchStatementExample/switchStatementeExample2.cpp"
#include "../stdExamples/mapExample.cpp"
#include "../stdExamples/mapExample2.cpp"
#include "../switchStatementExample/switchStatmentExample3.cpp"
#include "../switchStatementExample/switchStatementExample4.cpp"

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

    /*Question 9*/
    stringExample2 obj8;
    obj8.readAndDisplayString();

    /*Question 10*/
    rangeBasedForLoop obj9;
    obj9.printNumbers();

    /*Question 11*/
    switchWithEnumExample obj10;
    obj10.userFoodChoice();

    /*Question 12*/
    switchStatementeExample2 obj11;
    obj11.chooseYourZodiacMessage();
    obj11.changeZodiacSign();

    /*Question 13*/
    mapExample obj12;
    obj12.addEmployee();

    /*Question 14*/
    mapExample2 obj13;
    obj13.addEmployee();

     /*Question 15*/
    switchStatmentExample3 obj14;
    obj14.Test();

    /*Question 16*/
    switchStatmentExample4 obj15;
    obj15.test();

}
