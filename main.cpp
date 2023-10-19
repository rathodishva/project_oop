#include "Utils.h"
#include "Employee.h"

int main() {

    all_employees.push_back(Employee("Ishva Rathod", 1111));
    all_employees.push_back(Employee("Tirth Patel", 2222));
    all_employees.push_back(Employee("Dev Desai", 3333));
    all_employees.push_back(Employee("User", 4444));
    all_employees.push_back(Employee("Joey Tribiani", 5555));

    employeeLogin();
    return 0;
}