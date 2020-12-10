/*Question 13: Demonstrate an example on map in C++.*/

#include <iostream>
#include <map>
#include <string>



class mapExample
{
private:
    std::string employeeName;
    int employeeID;

public:
    std::map<int, std::string> newEmployee;
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
