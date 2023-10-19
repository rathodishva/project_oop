// inventory.cpp

#include "inventory.h"
#include "products.h"
#include <iostream>
#include <vector>
#include <string>

Inventory::Inventory() {
    // Constructor implementation here
}

void Inventory::display_Apple_products() {
    // display_Apple_products implementation here
}

void Inventory::search_products(const std::string& value) {
    // search_products implementation here
}

void Inventory::autofill_inventory() {
    // autofill_inventory implementation here
}

void Inventory::add_products() {
    std::cout << "Please select a product you want to add:" << std::endl;
    std::cout << "1. iPhone" << std::endl;
    std::cout << "2. iPad" << std::endl;
    std::cout << "3. MacBook" << std::endl;

    int user_input;
    std::string input;

    std::cout << "Please enter your choice: ";
    std::cin >> input;

    if (input.empty() || !std::all_of(input.begin(), input.end(), ::isdigit) || (user_input = std::stoi(input)) <= 0 || user_input > 3) {
        invalidInput();
        return;
    }

    switch (user_input) {
        case 1: {
            std::cout << "Add a new iPhone" << std::endl;

            iPhone* iphone = new iPhone();
            iphone->set_product_type_id(1);

            std::string user_input_model;
            std::cout << "Enter model: ";
            std::cin.ignore();
            std::getline(std::cin, user_input_model);
            iphone->set_model(user_input_model);

            int user_input_price;
            std::cout << "Enter price: ";
            std::cin >> user_input_price;
            iphone->set_price(user_input_price);

            int user_input_availability;
            std::cout << "Enter availability: ";
            std::cin >> user_input_availability;
            iphone->set_availability(user_input_availability);

            int user_input_battery_health;
            std::cout << "Enter battery health: ";
            std::cin >> user_input_battery_health;
            iphone->set_battery_health(user_input_battery_health);

            int user_input_storage_size;
            std::cout << "Enter storage size: ";
            std::cin >> user_input_storage_size;
            iphone->set_storage_size(user_input_storage_size);

            std::string user_input_colours;
            std::cout << "Enter color: ";
            std::cin.ignore();
            std::getline(std::cin, user_input_colours);
            iphone->set_colours(user_input_colours);

            std::string user_input_condition;
            std::cout << "Enter condition: ";
            std::getline(std::cin, user_input_condition);
            iphone->set_condition(user_input_condition);

            std::string user_input_software_generation;
            std::cout << "Enter software generation: ";
            std::getline(std::cin, user_input_software_generation);
            iphone->set_software_generation(user_input_software_generation);

            std::string user_input_wireless_charging;
            std::cout << "Enter wireless charging [y/n]: ";
            std::cin >> user_input_wireless_charging;
            bool has_wireless_charging = (user_input_wireless_charging == "y" || user_input_wireless_charging == "Y");
            iphone->set_wireless_charging(has_wireless_charging);

            Apple_products.push_back(iphone);
            std::cout << "New iPhone added to products" << std::endl;
            initializaInventory(current_user_name);
            break;
        }
        // Cases for iPad and MacBook can be similarly implemented
        default:
            break;
    }
}

// Inside the add_products function in inventory.cpp

case 2: {
    std::cout << "Add a new iPad" << std::endl;
    iPad* ipad = new iPad();
    ipad->set_product_type_id(2);

    std::string user_input_model;
    std::cout << "Enter model: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_model);
    ipad->set_model(user_input_model);

    int user_input_price;
    std::cout << "Enter price: ";
    std::cin >> user_input_price;
    ipad->set_price(user_input_price);

    int user_input_availability;
    std::cout << "Enter availability: ";
    std::cin >> user_input_availability;
    ipad->set_availability(user_input_availability);

    int user_input_battery_health;
    std::cout << "Enter battery health: ";
    std::cin >> user_input_battery_health;
    ipad->set_battery_health(user_input_battery_health);

    int user_input_storage_size;
    std::cout << "Enter storage size: ";
    std::cin >> user_input_storage_size;
    ipad->set_storage_size(user_input_storage_size);

    std::string user_input_colours;
    std::cout << "Enter color: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_colours);
    ipad->set_colours(user_input_colours);

    std::string user_input_condition;
    std::cout << "Enter condition: ";
    std::getline(std::cin, user_input_condition);
    ipad->set_condition(user_input_condition);

    std::string user_input_software_generation;
    std::cout << "Enter software generation: ";
    std::getline(std::cin, user_input_software_generation);
    ipad->set_software_generation(user_input_software_generation);

    std::string user_input_wireless_charging;
    std::cout << "Enter wireless charging [y/n]: ";
    std::cin >> user_input_wireless_charging;
    bool has_wireless_charging = (user_input_wireless_charging == "y" || user_input_wireless_charging == "Y");
    ipad->set_wireless_charging(has_wireless_charging);

    int user_input_generation;
    std::cout << "Enter generation: ";
    std::cin >> user_input_generation;
    ipad->set_generation(user_input_generation);

    std::string user_input_processor;
    std::cout << "Enter processor: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_processor);
    ipad->set_processor(user_input_processor);

    std::string user_input_Apple_pencil;
    std::cout << "Enter is Apple pencil [y/n]: ";
    std::cin >> user_input_Apple_pencil;
    bool has_Apple_pencil = (user_input_Apple_pencil == "y" || user_input_Apple_pencil == "Y");
    ipad->set_Apple_pencil(has_Apple_pencil);

    std::string user_input_magic_keyboard;
    std::cout << "Enter is magic keyboard [y/n]: ";
    std::cin >> user_input_magic_keyboard;
    bool has_magic_keyboard = (user_input_magic_keyboard == "y" || user_input_magic_keyboard == "Y");
    ipad->set_magic_keyboard(has_magic_keyboard);

    Apple_products.push_back(ipad);
    std::cout << "New iPad added to products" << std::endl;
    initializaInventory(current_user_name);
    break;
}
case 3: {
    std::cout << "Add a new MacBook" << std::endl;
    MacBook* mac = new MacBook();
    mac->set_product_type_id(3);

    std::string user_input_model;
    std::cout << "Enter model: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_model);
    mac->set_model(user_input_model);

    int user_input_price;
    std::cout << "Enter price: ";
    std::cin >> user_input_price;
    mac->set_price(user_input_price);

    int user_input_availability;
    std::cout << "Enter availability: ";
    std::cin >> user_input_availability;
    mac->set_availability(user_input_availability);

    int user_input_battery_health;
    std::cout << "Enter battery health: ";
    std::cin >> user_input_battery_health;
    mac->set_battery_health(user_input_battery_health);

    int user_input_storage_size;
    std::cout << "Enter storage size: ";
    std::cin >> user_input_storage_size;
    mac->set_storage_size(user_input_storage_size);

    std::string user_input_colours;
    std::cout << "Enter color: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_colours);
    mac->set_colours(user_input_colours);

    std::string user_input_condition;
    std::cout << "Enter condition: ";
    std::getline(std::cin, user_input_condition);
    mac->set_condition(user_input_condition);

    std::string user_input_software_generation;
    std::cout << "Enter software generation: ";
    std::getline(std::cin, user_input_software_generation);
    mac->set_software_generation(user_input_software_generation);

    std::string user_input_wireless_charging;
    std::cout << "Enter wireless charging [y/n]: ";
    std::cin >> user_input_wireless_charging;
    bool has_wireless_charging = (user_input_wireless_charging == "y" || user_input_wireless_charging == "Y");
    mac->set_wireless_charging(has_wireless_charging);

    int user_input_generation;
    std::cout << "Enter generation: ";
    std::cin >> user_input_generation;
    mac->set_generation(user_input_generation);

    std::string user_input_processor;
    std::cout << "Enter processor: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_processor);
    mac->set_processor(user_input_processor);

    std::string user_input_mag_safe;
    std::cout << "Enter is MagSafe [y/n]: ";
    std::cin >> user_input_mag_safe;
    bool has_mag_safe = (user_input_mag_safe == "y" || user_input_mag_safe == "Y");
    mac->set_mag_safe(has_mag_safe);

    std::string user_input_touch_bar;
    std::cout << "Enter is Touch Bar [y/n]: ";
    std::cin >> user_input_touch_bar;
    bool has_touch_bar = (user_input_touch_bar == "y" || user_input_touch_bar == "Y");
    mac->set_touch_bar(has_touch_bar);

    Apple_products.push_back(mac);
    std::cout << "New MacBook added to products" << std::endl;
    initializaInventory(current_user_name);
    break;
}

// Inside the add_products function in inventory.cpp (continuation)

case 3: {
    std::cout << "Add a new MacBook" << std::endl;
    MacBook* mac = new MacBook();
    mac->set_product_type_id(3);

    std::string user_input_model;
    std::cout << "Enter model: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_model);
    mac->set_model(user_input_model);

    int user_input_price;
    std::cout << "Enter price: ";
    std::cin >> user_input_price;
    mac->set_price(user_input_price);

    int user_input_availability;
    std::cout << "Enter availability: ";
    std::cin >> user_input_availability;
    mac->set_availability(user_input_availability);

    int user_input_battery_health;
    std::cout << "Enter battery health: ";
    std::cin >> user_input_battery_health;
    mac->set_battery_health(user_input_battery_health);

    int user_input_storage_size;
    std::cout << "Enter storage size: ";
    std::cin >> user_input_storage_size;
    mac->set_storage_size(user_input_storage_size);

    std::string user_input_colours;
    std::cout << "Enter color: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_colours);
    mac->set_colours(user_input_colours);

    std::string user_input_condition;
    std::cout << "Enter condition: ";
    std::getline(std::cin, user_input_condition);
    mac->set_condition(user_input_condition);

    std::string user_input_software_generation;
    std::cout << "Enter software generation: ";
    std::getline(std::cin, user_input_software_generation);
    mac->set_software_generation(user_input_software_generation);

    std::string user_input_wireless_charging;
    std::cout << "Enter wireless charging [y/n]: ";
    std::cin >> user_input_wireless_charging;
    bool has_wireless_charging = (user_input_wireless_charging == "y" || user_input_wireless_charging == "Y");
    mac->set_wireless_charging(has_wireless_charging);

    int user_input_generation;
    std::cout << "Enter generation: ";
    std::cin >> user_input_generation;
    mac->set_generation(user_input_generation);

    std::string user_input_processor;
    std::cout << "Enter processor: ";
    std::cin.ignore();
    std::getline(std::cin, user_input_processor);
    mac->set_processor(user_input_processor);

    std::string user_input_mag_safe;
    std::cout << "Enter is MagSafe [y/n]: ";
    std::cin >> user_input_mag_safe;
    bool has_mag_safe = (user_input_mag_safe == "y" || user_input_mag_safe == "Y");
    mac->set_mag_safe(has_mag_safe);

    std::string user_input_touch_bar;
    std::cout << "Enter is Touch Bar [y/n]: ";
    std::cin >> user_input_touch_bar;
    bool has_touch_bar = (user_input_touch_bar == "y" || user_input_touch_bar == "Y");
    mac->set_touch_bar(has_touch_bar);

    Apple_products.push_back(mac);
    std::cout << "New MacBook added to products" << std::endl;
    initializaInventory(current_user_name);
    break;
}
default:
    invliadInput();
    break;
}
});

}

void remove_products() {
    std::string user_input;
    std::cout << "Enter the product index you want to remove: ";
    std::cin >> user_input;
    int index = std::stoi(user_input);

    if (index < 0 || index >= Apple_products.size()) {
        std::cout << "No product available at index: " << index << std::endl;
        initializaInventory(current_user_name);
    } else {
        Apple_products.erase(Apple_products.begin() + index);
        std::cout << "Product removed." << std::endl;
        display_Apple_products();
    }
}
// Inside the update_products function in inventory.cpp (continuation)
{
                                break;

                            case 1:
                                rl.question("Enter updated wireless charging [y/n]: ", (answer) => {
                                    if (answer != "y" && answer != "n") {
                                        invliadInput();
                                    } else {
                                        bool updated_wireless_charging = (answer == "y" || answer == "Y");
                                        (this->Apple_products[product_index] as iPhone)->set_wireless_charging(updated_wireless_charging);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 2:
                                rl.question("Enter updated generation: ", (answer) => {
                                    if (isNaN(parseInt(answer)) || parseInt(answer) <= 0) {
                                        invliadInput();
                                    } else {
                                        int updated_generation = std::stoi(answer);
                                        (this->Apple_products[product_index] as iPad)->set_generation(updated_generation);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 3:
                                rl.question("Enter updated processor: ", (answer) => {
                                    if (answer == "" || answer == "undefined") {
                                        invliadInput();
                                    } else {
                                        (this->Apple_products[product_index] as iPad)->set_processor(answer);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 4:
                                rl.question("Enter updated Apple pencil [y/n]: ", (answer) => {
                                    if (answer != "y" && answer != "n") {
                                        invliadInput();
                                    } else {
                                        bool updated_apple_pencil = (answer == "y" || answer == "Y");
                                        (this->Apple_products[product_index] as iPad)->set_Apple_pencil(updated_apple_pencil);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 5:
                                rl.question("Enter updated Magic Keyboard [y/n]: ", (answer) => {
                                    if (answer != "y" && answer != "n") {
                                        invliadInput();
                                    } else {
                                        bool updated_magic_keyboard = (answer == "y" || answer == "Y");
                                        (this->Apple_products[product_index] as iPad)->set_magic_keyboard(updated_magic_keyboard);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 6:
                                rl.question("Enter updated Touch Bar [y/n]: ", (answer) => {
                                    if (answer != "y" && answer != "n") {
                                        invliadInput();
                                    } else {
                                        bool updated_touch_bar = (answer == "y" || answer == "Y");
                                        (this->Apple_products[product_index] as MacBook)->set_touch_bar(updated_touch_bar);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            case 7:
                                rl.question("Enter updated MagSafe [y/n]: ", (answer) => {
                                    if (answer != "y" && answer != "n") {
                                        invliadInput();
                                    } else {
                                        bool updated_mag_safe = (answer == "y" || answer == "Y");
                                        (this->Apple_products[product_index] as MacBook)->set_mag_safe(updated_mag_safe);
                                        std::cout << "### Product information updated successfully" << std::endl;
                                        display_Apple_products();
                                    }
                                });

                                break;

                            default:
                                invliadInput();
                                break;
                        }
                    }
                });
                break;
            default:
                break;
        }
    }
};

// Inside the update_products function in inventory.cpp (continuation)

            case 2: // update availability
                rl.question("Enter the product index you want to update availability: ", (answer) => {
                    if (isNaN(parseInt(answer)) || parseInt(answer) <= 0) {
                        invliadInput();
                    } else if (parseInt(answer) > (this->Apple_products.size() - 1)) {
                        std::cout << "No product available at this index: " << answer << std::endl;
                        initializaInventory(current_user_name);
                    } else {
                        let product_index = std::stoi(answer);
                        rl.question("Enter the new updated quantity: ", (answer) => {
                            if (isNaN(parseInt(answer)) || parseInt(answer) < 0) {
                                invliadInput();
                            } else {
                                this->Apple_products[product_index].set_availability(std::stoi(answer));
                                std::cout << "### Product quantity updated successfully" << std::endl;
                                display_Apple_products();
                            }
                        });
                    }
                });
                break;

            default:
                invliadInput();
                break;
        }
    }
};
