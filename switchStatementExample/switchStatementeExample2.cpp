/*12. Write an example for switch using enum class in C++*/
/* Enumerator names are local to the enum and are strongly typed which mean that we specify the scope of the enum using scope resolution operator*/

#include<iostream>


class switchStatementeExample2
{
public:

    enum class ZodiacSign { Taurus, Libra, Scorpio, Capricon };
    ZodiacSign zodiac = ZodiacSign::Libra;

    void changeZodiacSign()
    {
        zodiac = ZodiacSign::Scorpio;
        chooseYourZodiacMessage();
       
    }
    void chooseYourZodiacMessage()
    {
        switch (zodiac)
        {
        case ZodiacSign::Taurus:
            std::cout << "Your decisions are quite influencial" << std::endl;
            break;

        case ZodiacSign::Scorpio:
            std::cout << "Stay high headed" << std::endl;
            break;

        case ZodiacSign::Capricon:
            std::cout << "Your celebrations have just begun" << std::endl;
            break;

        case ZodiacSign::Libra:
            std::cout << "You are known to balance out things" << std::endl;
            break;
        }
    }
};