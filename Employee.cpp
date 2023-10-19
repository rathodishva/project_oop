#include "Employee.h" // include header file to allow .cpp to run


Employee::Employee(const std::string& name, int id) : name(name), id(id) {}

std::string Employee::get_name() const {
    return name; // function to return the name of employee when entered
}

int Employee::get_id() const {
    return id; // function to return the id of employee when entered
}
