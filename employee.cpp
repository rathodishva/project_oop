#include "employee.h"

Employee::Employee(std::string name, int id) {
    this->id = id;
    this->name = name;
}

std::string Employee::get_name() {
    return this->name;
}

int Employee::get_id() {
    return this->id;
}
