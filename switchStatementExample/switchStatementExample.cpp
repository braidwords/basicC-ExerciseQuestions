/*11. Write an example for switch with simple enum in C++*/

#include<iostream>


class switchWithEnumExample
{
    enum Food { Pizza, Pasta, FruitSalad, Veggies };
    //Food foodRef = Pizza;
    int userChoice = 0;
public:

    void userFoodChoice()
    {
        std::cout << "Enter your choice from these options abd get your health message!" << std::endl;
        std::cout << " Pizza "<<"            " <<"Pasta "<<"            "<<" FruitSalad "<<"            "<< " Veggies "<< std::endl;
        std::cin >> userChoice;
        chooseYourHealthMessage(userChoice);
    }

    void chooseYourHealthMessage(int choice)
    {
        switch (choice)
        {
        case Pizza:
            std::cout << "You should eat it once in a month or only on celebrations" << std::endl;
            break;

        case Pasta:
            std::cout << "You should not be eating that too much" << std::endl;
            break;

        case FruitSalad:
            std::cout << "You should eat it everyday" << std::endl;
            break;

        case Veggies:
            std::cout << "Try to eat Veggies in your Lunch" << std::endl;
            break;
        }
    }
};