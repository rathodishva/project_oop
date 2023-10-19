#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, int id);
    std::string get_name() const;
    int get_id() const;

private:
    std::string name;
    int id;
};

#endif // EMPLOYEE_H
