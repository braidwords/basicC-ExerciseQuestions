/*Question 13: Demonstrate an example on map in C++.*/
/** Map in C++ holds key-value relationship.Key is always unique and cannot be duplicated however, values can be same for an unique key.
* Map has sorted order on the basis of key. 
* By default, it is always in the ascending order. However, we can make it in descending order.
* Maps are used for the Dictionary based problems. 
*/

#include <iostream>
#include <map>
#include <string>



class mapExample
{
private:
    std::string employeeName;
    int employeeID;

public:
    std::map<int, std::string, std::greater<>> newEmployee; //Here sort order will be descending order because we are using built-in "greater" operator
    void addEmployee() {
        std::cout << "Adding new Employees" << std::endl;
        newEmployee[1] = "Shyam"; //Way 1 to add details in the map
        newEmployee.insert(std::make_pair(2, "Ram"));
        newEmployee.insert(std::make_pair(3, "HariOm")); //Way 2 to add details in the map
        std::cout << "Here is the Employee List" << std::endl;
        displayEmployees();
    }
    void displayEmployees() {
        std::map<int, std::string>::iterator it = newEmployee.begin();
        while (it != newEmployee.end())
        {
            std::cout << it->first << " :: " << it->second << std::endl;
            it++;
        }
    }
};
