/*Question 14: Demonstrate an example on map in C++.*/
/** Map in C++ holds key-value relationship.Key is always unique and cannot be duplicated however, values can be same for an unique key.
* Map has sorted order on the basis of key. 
* By default, it is always in the ascending order. However, we can make it in descending order.
* Maps are used for the Dictionary based problems. 
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>



class mapExample2
{
private:
    std::string employeeName;
    int employeeID = 0;

public:
    std::map<int, std::vector<std::string>, std::greater<>> newEmployee; //Here sort order will be descending order because we are using built-in "greater" operator
    void addEmployee() {
        std::cout << "Adding new Employees" << std::endl;
        newEmployee[1].push_back("Shyam");
        newEmployee[1].push_back("Singh");
        newEmployee[2].push_back("Mohan");
        newEmployee[2].push_back("Negi");
        std::cout << "Here is the Employee List" << std::endl;
        displayEmployees();
    }
    void displayEmployees() {
        for (auto& element1 : newEmployee)
        {
            std::cout << element1.first << " : ";
            for (auto& element2 : element1.second)
            {
                std::cout << element2 << " "; 
            }
        }
    }
};
