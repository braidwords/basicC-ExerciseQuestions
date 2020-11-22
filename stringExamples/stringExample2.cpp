
/*9. Write an example demonstrating use of cin and getline in C++*/

#include<iostream>
#include<string>

using namespace std;

class stringExample2
{
    std::string userName;
    std::string userQuestion;
public:
    void readAndDisplayString()
    {
        cout << "What's your name? ";
        getline(cin, userName);
        cout << "Hello " << userName << ".\n";
        cout << "What is your favorite team? ";
        getline(cin, userQuestion);
        cout << "WOW! " << userQuestion << " too!\n";
    }
};