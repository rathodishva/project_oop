#include <iostream>
#include "Employee.h"  // Include Employee class header
#include "Inventory.h" // Include Inventory class header

void invalidInput(const std::string& errMsg = "") {
    std::cout << (errMsg.empty() ? "Invalid input!" : errMsg) << std::endl;
    exit(0);
}

int main() {
    std::vector<Employee> allEmployees;
    allEmployees.push_back(Employee("Anbc", 1));
    allEmployees.push_back(Employee("An", 2));
    allEmployees.push_back(Employee("bc", 3));
    allEmployees.push_back(Employee("A", 4));
    allEmployees.push_back(Employee("c", 5));

    Inventory inventory;

    int currentUserId = -1;
    std::string currentUserName;
    int userInventoryActionChoice = -1;

    std::cout << "Welcome to Apple Inventory" << std::endl;

    std::cout << "Please enter your employee id: ";
    std::string input;
    getline(std::cin, input);

    if (!std::cin || input.empty() || !std::isdigit(input[0])) {
        invalidInput();
    }

    currentUserId = std::stoi(input);

    bool userFound = false;
    for (const Employee& emp : allEmployees) {
        if (emp.getId() == currentUserId) {
            currentUserName = emp.getName();
            currentUserId = emp.getId();
            userFound = true;
            break;
        }
    }

    if (!userFound) {
        invalidInput("User not found");
    } else {
        std::cout << "Welcome, " << currentUserName << std::endl;
        std::cout << "----" << std::endl;
        std::cout << "Select activity number you want to perform:" << std::endl;
        std::cout << "1. View all products" << std::endl;
        std::cout << "2. Add new product" << std::endl;
        std::cout << "3. Remove from current products" << std::endl;
        std::cout << "4. Update product information" << std::endl;
        std::cout << "5. Update product quantity" << std::endl;
        std::cout << "6. Autofill inventory" << std::endl;
        std::cout << "7. Exit" << std::endl;

        std::cout << "Please enter your choice: ";
        getline(std::cin, input);

        if (!std::cin || input.empty() || !std::isdigit(input[0])) {
            invalidInput();
        }

        userInventoryActionChoice = std::stoi(input);

        switch (userInventoryActionChoice) {
            case 1:
                std::cout << "You selected option 1. View all products" << std::endl;
                inventory.displayAppleProducts();
                break;
            case 2:
                std::cout << "You selected option 2. Add new product" << std::endl;
                inventory.addProducts();
                break;
            case 3:
                std::cout << "You selected option 3. Remove product" << std::endl;
                inventory.removeProducts();
                break;
            case 4:
                std::cout << "You selected option 4. Update product information" << std::endl;
                inventory.updateProducts(1);
                break;
            case 5:
                std::cout << "You selected option 5. Update product quantity" << std::endl;
                inventory.updateProducts(2);
                break;
            case 6:
                std::cout << "You selected option 6. Autofill inventory" << std::endl;
                inventory.autofillInventory();
                break;
            case 7:
                return 0;
            default:
                invalidInput();
                break;
        }
    }

    return 0;
}
