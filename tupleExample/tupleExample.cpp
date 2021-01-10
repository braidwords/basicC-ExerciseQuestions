/*16. A basic example to use tuple in C++ */


#include <iostream>
#include <string>
#include <map>

class tupleExample
{

   
    enum class returnResponse {
        Toll,
        Danke
    };

    std::string greeting = "Wie Geht's";
    std::string greeting2 = "What's going";

     public:
    auto giveResponse(std::string a, std::string b) {
        using input = std::tuple<std::string, std::string>;
        static std::map<input, returnResponse> mytable = {
            { input{ "Wie Geht's", "What's going?" }, returnResponse::Toll },
            { input{ "Feliz Navidad", "Merry CHristmas" }, returnResponse::Danke },
            { input{ "Wie Geht's", "" }, returnResponse::Toll },


        };

        return mytable[input{ a, b }];
    }

    void getResponse() {
        auto getResponse = giveResponse(greeting, greeting2);
    }
};
