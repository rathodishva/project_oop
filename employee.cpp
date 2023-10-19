#include "employee.h"

// Default constructor
Employee::Employee() : name(""), id(0) {}

// Constructor
Employee::Employee(const std::string& name, int id) : name(name), id(id) {}

// Getter for name
std::string Employee::get_name() const {
    return name;
}

// Getter for ID
int Employee::get_id() const {
    return id;
}

// Setter for name
void Employee::set_name(const std::string& name) {
    this->name = name;
}

// Setter for ID .
void Employee::set_id(int id) {
    this->id = id;
}

// Function to initialize and return a vector of employees
std::vector<Employee> Employee::initializeEmployees() {
    std::vector<Employee> employees;
    employees.push_back(Employee("Monica Gellar", 12341));
    employees.push_back(Employee("Ross Gellar", 12342));
    employees.push_back(Employee("Rachel Green", 12343));
    employees.push_back(Employee("Chandler Bing", 12344));
    employees.push_back(Employee("Joey Tribiani", 12345));
    employees.push_back(Employee("Phoebe Buffay", 12346));
    employees.push_back(Employee("Ishva Rathod", 11111));
    employees.push_back(Employee("Tirth Patel", 22222));
    employees.push_back(Employee("Dev Desai", 33333));
    return employees;
}
