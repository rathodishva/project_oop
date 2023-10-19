
#include "Utils.h"
#include "Employee.h"
#include "Inventory.h"
#include <iostream>
#include <vector>
#include <string>

std::vector<Employee> all_employees; // Declare a vector to store employee data
Inventory inventory; // Create an instance of the Inventory class.
int current_user_id = -1; // Initialize a variable to store the current user's ID.
int user_inventory_action_choice = -1; // Initialize a variable for user's inventory action choice.
std::string current_user_name; // Initialize a variable to store the current user's name.

//  Function to handle and display invalid input with an optional error message.
void invalidInput(const std::string& errMsg) {
    std::cout << (errMsg.empty() ? "Invalid input!" : errMsg) << std::endl;
    std::exit(0);
}

// user interface 

// Function to handle employee login.
void employeeLogin() {
    std::cout << "Welcome to Apple Inventory" << std::endl;
    int answer;

    std::cout << "Please enter your employee id: ";
    std::cin >> answer;

    if (std::cin.fail()) {
        invalidInput(); // Handle invalid input.
        return;
    } else {
        if (all_employees.empty()) {
            invalidInput("No employees available"); // Handle no employees available
        } else {
            current_user_id = answer;
            
            // matching user id with name given 
            for (const Employee& employee : all_employees) {
                if (employee.get_id() == current_user_id) {
                    current_user_name = employee.get_name();
                    current_user_id = employee.get_id();
                    break;
                }
            }
            // if user is not found
            if (current_user_name.empty()) {
                invalidInput("User not found");
            } else {
                initializeInventory(current_user_name);
            }
        }
    }
}
// creating main dashboard to access the products
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

// giving choice to choose operation
    int answer;
    std::cout << "Please enter your choice: ";
    std::cin >> answer;

    if (std::cin.fail() || answer <= 0 || answer > 7) {
        invalidInput();
        return;
    }

    user_inventory_action_choice = answer;

    switch (user_inventory_action_choice) {
        case 1: // run function ot see products
            std::cout << "You selected option 1. View all products" << std::endl;
            inventory.display_Apple_products();
            break;

        case 2: // run funciton to add product
            std::cout << "You selected option 2. Add new product" << std::endl;
            inventory.add_products();
            break;

        case 3: // run funciton to remove product
            std::cout << "You selected option 3. Remove product" << std::endl;
            inventory.remove_products();
            break;

        case 4: // run function to update product information
            std::cout << "You selected option 4. Update product information" << std::endl;
            inventory.update_products(1);
            break;

        case 5: // run fucniton to update product avaliavlity 
            std::cout << "You selected option 5. Update product quantity" << std::endl;
            inventory.update_products(2);
            break;

        case 6: // funciton to show a build in inventory
            std::cout << "You selected option 6. Autofill inventory" << std::endl;
            inventory.autofill_inventory();
            break;

        case 7: // function to exit program
            std::cout << "Exiting the program..." << std::endl;
            std::exit(0);
        default:
            invalidInput();
            break;
    }
}
