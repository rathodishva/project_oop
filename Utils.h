// util.h

#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <vector>
#include "Employee.h"

extern std::vector<Employee> all_employees;
extern std::string current_user_name;
void invalidInput(const std::string& errMsg = "");
void employeeLogin();
void initializeInventory(const std::string& user_name);

#endif
