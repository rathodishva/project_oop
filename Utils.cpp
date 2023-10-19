// util.cpp

#include "Utils.h"
#include "Employee.h"
#include "Inventory.h"
#include <iostream>
#include <vector>
#include <string>

std::vector<Employee> all_employees;
Inventory inventory;
int current_user_id = -1;
int user_inventory_action_choice = -1;
std::string current_user_name;

void invalidInput(const std::string& errMsg) {
    std::cout << (errMsg.empty() ? "Invalid input!" : errMsg) << std::endl;
    std::exit(0);
}

void employeeLogin() {
    std::cout << "Welcome to Apple Inventory" << std::endl;
    int answer;

    std::cout << "Please enter your employee id: ";
    std::cin >> answer;

    if (std::cin.fail()) {
        invalidInput();
        return;
    } else {
        if (all_employees.empty()) {
            invalidInput("No employees available");
        } else {
            current_user_id = answer;
            
            for (const Employee& employee : all_employees) {
                if (employee.get_id() == current_user_id) {
                    current_user_name = employee.get_name();
                    current_user_id = employee.get_id();
                    break;
                }
            }

            if (current_user_name.empty()) {
                invalidInput("User not found");
            } else {
                initializeInventory(current_user_name);
            }
        }
    }
}

void initializeInventory(const std::string& user_name) {
    std::cout << "Welcome " << user_name << std::endl;
    std::cout << "----\nSelect activity number you want to perform:" << std::endl;
    std::cout << "1. View all products" << std::endl;
    std::cout << "2. Add new product" << std::endl;
    std::cout << "3. Remove from current products" << std::endl;
    std::cout << "4. Update product information" << std::endl;
    std::cout << "5. Update product quantity" << std::endl;
    std::cout << "6. Autofill inventory" << std::endl;
    std::cout << "7. Exit" << std::endl;

    int answer;
    std::cout << "Please enter your choice: ";
    std::cin >> answer;

    if (std::cin.fail() || answer <= 0 || answer > 7) {
        invalidInput();
        return;
    }

    user_inventory_action_choice = answer;

    switch (user_inventory_action_choice) {
        case 1:
            std::cout << "You selected option 1. View all products" << std::endl;
            inventory.display_Apple_products();
            break;

        case 2:
            std::cout << "You selected option 2. Add new product" << std::endl;
            inventory.add_products();
            break;

        case 3:
            std::cout << "You selected option 3. Remove product" << std::endl;
            inventory.remove_products();
            break;

        case 4:
            std::cout << "You selected option 4. Update product information" << std::endl;
            inventory.update_products(1);
            break;

        case 5:
            std::cout << "You selected option 5. Update product quantity" << std::endl;
            inventory.update_products(2);
            break;

        case 6:
            std::cout << "You selected option 6. Autofill inventory" << std::endl;
            inventory.autofill_inventory();
            break;

        case 7:
            std::cout << "Exiting the program..." << std::endl;
            std::exit(0);
        default:
            invalidInput();
            break;
    }
}
