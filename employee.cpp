// employee.cpp

#include "employee.h"

Employee::Employee(const std::string& name, int id) {
    this->id = id;
    this->name = name;
}

std::string Employee::get_name() const {
    return name;
}

int Employee::get_id() const {
    return id;
}
