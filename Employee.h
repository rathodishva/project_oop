#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public: // public variables 
   //  employee constructor which takes name and id of employee
    Employee(const std::string& name, int id);

    // declaration to get the name of the employee.
    std::string get_name() const;

    // declaration to get the ID of the employee.
    int get_id() const;

private:
    // private member variables to store the name and ID of the employee.
    std::string name;
    int id;
};

#endif 
