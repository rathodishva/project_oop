#include "Utils.h" // include utils.h to access employee login
#include "Employee.h" // to ensure that employee funtions work

int main() {
    // main file used to idenitfy employees when first logging in 

    //  Create a vector of employees.

    all_employees.push_back(Employee("Ishva Rathod", 1111));
    all_employees.push_back(Employee("Tirth Patel", 2222));
    all_employees.push_back(Employee("Dev Desai", 3333));
    all_employees.push_back(Employee("User", 4444));
    all_employees.push_back(Employee("Joey Tribiani", 5555));

    employeeLogin(); // Call the employee login function to handle user authentication.
    return 0;
}