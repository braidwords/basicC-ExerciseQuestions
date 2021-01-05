/*Question 15: Using enum with switch and in between converting switch to enum value */

#include <iostream>
#include <string>
#include <map>



class switchStatmentExample3
{
    enum class level { easy,
        medium,
        hard };
    ///std::map<std::string, level> levels;

public:
    level computeSomeString() {
        std::string myChoice="easy";
        level l= convert(myChoice);
        return l;
    }

    level convert(const std::string& myChoice) {
        if (myChoice == "easy")
            return level::easy;
        else if (myChoice == "medium")
            return level::medium;
        else if (myChoice == "hard")
            return level::hard;
    }

    void Test() {
        level val = computeSomeString();
        switch (val)
        {
        case level::easy:
            std::cout << "easy!";
            break;
        case level::medium:
            std::cout << "medium!";
            break;
        case level::hard:
            std::cout << "hard!";
            break;
        }
    }
};

