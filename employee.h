#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>

class Employee {
private:
    std::string name;
    int id;

public:
    // Default constructor
    Employee();

    // Constructor
    Employee(const std::string& name, int id);

    // Getters
    std::string get_name() const;
    int get_id() const;

    // Setters
    void set_name(const std::string& name);
    void set_id(int id);

    // Static function to initialize and return a list of employees
    static std::vector<Employee> initializeEmployees();
};

#endif  // EMPLOYEE_H
