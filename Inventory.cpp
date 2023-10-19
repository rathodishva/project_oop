// including all header class files 
#include "Inventory.h"
#include "iPhone.h"
#include "MacBook.h"
#include "iPad.h"
#include <iostream>
#include <limits>

Inventory::Inventory() {} // constructor for inventory class

void Inventory::display_Apple_products() // funciton to display products to then be used in the interface
{

    if (Apple_products.empty()) // what happens if there are not products to view
    {
        std::cout << "No products to show. Do you want to add some products? [y/n]: "; // give option to view products
        char answer; 
        std::cin >> answer;

        if (answer != 'y' && answer != 'n') // if the answer is yes it runs to add products funcitons
        {
            std::cout << "Invalid input." << std::endl;
        }

        if (answer == 'y')
        {
            add_products(); // goes to add products functioins 
        }
        else
        {
            exit(0); // if it is no the program goes back
        }
    }
    else
    {
        for (size_t i = 0; i < Apple_products.size(); i++) /// Iterate through the Apple products in the inventory.
        { 
            std::cout << "--------------------------------------------------------------" << std::endl;
            std::cout << "product index: " << i << std::endl; // a value is given for each product object to then be eaisly accseissble 
            std::cout << "--------------------------------------------------------------" << std::endl;

            Products *product = Apple_products[i]; // Get the current product.

            switch (Apple_products[i]->get_product_type_id()) // able to set based on product type
            {
            // pointers within each variable to assign required spesifcation to spesific variables
            case 1: // iphone infomraiton 
            {
                std::string product_type = "iPhone"; // intialise iphone 
                iPhone *apple_iphone = dynamic_cast<iPhone *>(product); // pointed to derived class iphone and allow apple_iphone point to the object being/is created

                std::cout << "product_type: " << product_type << std::endl;
                std::cout << "model: " << apple_iphone->get_model() << std::endl;
                std::cout << "availability: " << apple_iphone->get_availability() << std::endl;
                std::cout << "price: " << apple_iphone->get_price() << std::endl;
                std::cout << "condition: " << apple_iphone->get_condition() << std::endl;
                std::cout << "battery_health: " << apple_iphone->get_battery_health() << std::endl;
                std::cout << "software_generation: " << apple_iphone->get_software_generation() << std::endl;
                std::cout << "storage_size: " << apple_iphone->get_storage_size() << std::endl;
                std::cout << "colours: " << apple_iphone->get_colours() << std::endl;
                std::cout << "wireless_charging: " << (apple_iphone->check_wireless_charging() ? "Yes" : "No") << std::endl;
                std::cout << "generation: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "processor: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "Apple_pencil: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "magic_keyboard: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "touch_bar: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "mag_safe: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products

                break;
            }

            case 2: // ipad
            {
                std::string product_type = "iPad"; // inislaise iPad
                iPad *apple_ipad = dynamic_cast<iPad *>(product); // pointed to derived class ipad and allow apple_ipad point to the object being/is created

                std::cout << "product_type: " << product_type << std::endl;
                std::cout << "model: " << apple_ipad->get_model() << std::endl;
                std::cout << "availability: " << apple_ipad->get_availability() << std::endl;
                std::cout << "price: " << apple_ipad->get_price() << std::endl;
                std::cout << "condition: " << apple_ipad->get_condition() << std::endl;
                std::cout << "battery_health: " << apple_ipad->get_battery_health() << std::endl;
                std::cout << "software_generation: " << apple_ipad->get_software_generation() << std::endl;
                std::cout << "storage_size: " << apple_ipad->get_storage_size() << std::endl;
                std::cout << "colours: " << apple_ipad->get_colours() << std::endl;
                std::cout << "wireless_charging: " << (apple_ipad->check_wireless_charging() ? "Yes" : "No") << std::endl;
                std::cout << "generation: " << apple_ipad->get_generation() << std::endl;
                std::cout << "processor: " << apple_ipad->get_processor() << std::endl;
                std::cout << "Apple_pencil: " << apple_ipad->check_Apple_pencil() << std::endl;
                std::cout << "magic_keyboard: " << apple_ipad->check_magic_keyboard() << std::endl;
                std::cout << "touch_bar: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products
                std::cout << "mag_safe: N/A" << std::endl; // information is N/A as only introduced in later inheritaed products

                break;
            }

            case 3: // mac
            {
                std::string product_type = "MacBook"; // initalise macbook
                MacBook *apple_mac = dynamic_cast<MacBook *>(product); // pointed to derived class macbook and allow apple_macbook point to the object being/is created


                std::cout << "product_type: " << product_type << std::endl;
                std::cout << "model: " << apple_mac->get_model() << std::endl;
                std::cout << "availability: " << apple_mac->get_availability() << std::endl;
                std::cout << "price: " << apple_mac->get_price() << std::endl;
                std::cout << "condition: " << apple_mac->get_condition() << std::endl;
                std::cout << "battery_health: " << apple_mac->get_battery_health() << std::endl;
                std::cout << "software_generation: " << apple_mac->get_software_generation() << std::endl;
                std::cout << "storage_size: " << apple_mac->get_storage_size() << std::endl;
                std::cout << "colours: " << apple_mac->get_colours() << std::endl;
                std::cout << "wireless_charging: " << (apple_mac->check_wireless_charging() ? "Yes" : "No") << std::endl;
                std::cout << "generation: " << apple_mac->get_generation() << std::endl;
                std::cout << "processor: " << apple_mac->get_processor() << std::endl;
                std::cout << "Apple_pencil: " << apple_mac->check_Apple_pencil() << std::endl;
                std::cout << "magic_keyboard: " << apple_mac->check_magic_keyboard() << std::endl;
                std::cout << "touch_bar: " << (apple_mac->check_touch_bar() ? "Yes" : "No") << std::endl;
                std::cout << "mag_safe: " << (apple_mac->check_mag_safe() ? "Yes" : "No") << std::endl;

                break;
            }

            default:
                break;
            }
        }
    }
    initializeInventory(current_user_name); // allowing user to perform invenotry fucniton based on the username
}



void Inventory::autofill_inventory()
{
    iPhone *iphone = new iPhone();

    iphone->set_product_type_id(1);
    iphone->set_model("iPhone 12");
    iphone->set_price(1000);
    iphone->set_availability(200);
    iphone->set_battery_health(98);
    iphone->set_colours("pink");
    iphone->set_condition("excellent");
    iphone->set_software_generation("iOS 14");
    iphone->set_storage_size(128);
    iphone->set_wireless_charging(true);

    Apple_products.push_back(iphone);

    iPad *ipad = new iPad();
    ipad->set_product_type_id(2);
    ipad->set_model("ipad 12");
    ipad->set_price(1000);
    ipad->set_availability(200);
    ipad->set_battery_health(98);
    ipad->set_colours("pink");
    ipad->set_condition("excellent");
    ipad->set_software_generation("ios 14");
    ipad->set_storage_size(128);
    ipad->set_wireless_charging(true);
    ipad->set_Apple_pencil(true);
    ipad->set_magic_keyboard(true);
    ipad->set_generation(12);
    ipad->set_processor("intel");

    Apple_products.push_back(ipad);

    MacBook *mac = new MacBook();
    mac->set_product_type_id(3);
    mac->set_model("macbook 12");
    mac->set_price(1000);
    mac->set_availability(200);
    mac->set_battery_health(98);
    mac->set_colours("pink");
    mac->set_condition("excellent");
    mac->set_software_generation("ios 14");
    mac->set_storage_size(128);
    mac->set_wireless_charging(true);
    mac->set_Apple_pencil(true);
    mac->set_magic_keyboard(true);
    mac->set_generation(12);
    mac->set_processor("intel");
    mac->set_mag_safe(true);
    mac->set_touch_bar(true);

    Apple_products.push_back(mac);

    initializeInventory(current_user_name);
}

void Inventory::add_products()
{
    std::cout << "Please select a product you want to add:" << std::endl;
    std::cout << "1. iPhone" << std::endl;
    std::cout << "2. iPad" << std::endl;
    std::cout << "3. MacBook" << std::endl;

    int user_input;
    std::string answer;
    std::cin >> answer;

    if (std::cin.fail() || (user_input = std::stoi(answer)) <= 0 || user_input > 3)
    {
        invalidInput();
        return;
    }

    switch (user_input)
    {
    case 1:
    {

        std::cout << "Add new iPhone" << std::endl;
        iPhone *iphone = new iPhone();
        iphone->set_product_type_id(1);

        std::string user_input_model;
        std::cout << "Enter model: ";
        std::cin.ignore();
        std::getline(std::cin, user_input_model);

        if (user_input_model.empty())
        {
            invalidInput();
            break;
        }

        iphone->set_model(user_input_model);

        int user_input_price;
        std::cout << "Enter price: ";
        std::cin >> user_input_price;

        if (std::cin.fail() || user_input_price <= 0)
        {
            invalidInput();
            break;
        }

        iphone->set_price(user_input_price);

        int user_input_availability;
        std::cout << "Enter availability: ";
        std::cin >> user_input_availability;

        if (std::cin.fail() || user_input_availability <= 0)
        {
            invalidInput();
            break;
        }

        iphone->set_availability(user_input_availability);

        int user_input_battery_health;
        std::cout << "Enter battery health: ";
        std::cin >> user_input_battery_health;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }

        iphone->set_battery_health(user_input_battery_health);

        int user_input_storage_size;
        std::cout << "Enter storage size: ";
        std::cin >> user_input_storage_size;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }
        iphone->set_storage_size(user_input_storage_size);

        std::string user_input_colours;
        std::cout << "Enter color: ";
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

        char user_input_wireless_charging;
        std::cout << "Enter wireless charging [y/n]: ";
        std::cin >> user_input_wireless_charging;
        iphone->set_wireless_charging(user_input_wireless_charging == 'y' || user_input_wireless_charging == 'Y');

        Apple_products.push_back(iphone);
        std::cout << "New iPhone added to products" << std::endl;
        initializeInventory(current_user_name);
        break;
    }

    case 2:
    {

        std::cout << "Add new iPad" << std::endl;
        iPad *ipad = new iPad();
        ipad->set_product_type_id(1);

        std::string user_input_model;
        std::cout << "Enter model: ";
        std::cin.ignore();
        std::getline(std::cin, user_input_model);

        if (user_input_model.empty())
        {
            invalidInput();
            break;
        }

        ipad->set_model(user_input_model);

        int user_input_price;
        std::cout << "Enter price: ";
        std::cin >> user_input_price;

        if (std::cin.fail() || user_input_price <= 0)
        {
            invalidInput();
            break;
        }

        ipad->set_price(user_input_price);

        int user_input_availability;
        std::cout << "Enter availability: ";
        std::cin >> user_input_availability;

        if (std::cin.fail() || user_input_availability <= 0)
        {
            invalidInput();
            break;
        }

        ipad->set_availability(user_input_availability);

        int user_input_battery_health;
        std::cout << "Enter battery health: ";
        std::cin >> user_input_battery_health;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }

        ipad->set_battery_health(user_input_battery_health);

        int user_input_storage_size;
        std::cout << "Enter storage size: ";
        std::cin >> user_input_storage_size;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }
        ipad->set_storage_size(user_input_storage_size);

        std::string user_input_colours;
        std::cout << "Enter color: ";
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

        char user_input_wireless_charging;
        std::cout << "Enter wireless charging [y/n]: ";
        std::cin >> user_input_wireless_charging;
        ipad->set_wireless_charging(user_input_wireless_charging == 'y' || user_input_wireless_charging == 'Y');

        int user_input_generation;
        std::cout << "Enter storage size: ";
        std::cin >> user_input_generation;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }
        ipad->set_generation(user_input_generation);

        std::string user_input_processor;
        std::cout << "Enter color: ";
        std::getline(std::cin, user_input_processor);
        ipad->set_processor(user_input_processor);

        char user_input_Apple_pencil;
        std::cout << "Enter apple pencil [y/n]: ";
        std::cin >> user_input_Apple_pencil;
        ipad->set_Apple_pencil(user_input_Apple_pencil == 'y' || user_input_Apple_pencil == 'Y');

        char user_input_magic_keyboard;
        std::cout << "Enter magic keyboard [y/n]: ";
        std::cin >> user_input_magic_keyboard;
        ipad->set_magic_keyboard(user_input_magic_keyboard == 'y' || user_input_magic_keyboard == 'Y');

        Apple_products.push_back(ipad);
        std::cout << "New iPhone added to products" << std::endl;
        initializeInventory(current_user_name);
        break;
    }

    case 3:
    {

        std::cout << "Add new Macbook" << std::endl;
        MacBook *mac = new MacBook();
        mac->set_product_type_id(1);

        std::string user_input_model;
        std::cout << "Enter model: ";
        std::cin.ignore();
        std::getline(std::cin, user_input_model);

        if (user_input_model.empty())
        {
            invalidInput();
            break;
        }

        mac->set_model(user_input_model);

        int user_input_price;
        std::cout << "Enter price: ";
        std::cin >> user_input_price;

        if (std::cin.fail() || user_input_price <= 0)
        {
            invalidInput();
            break;
        }

        mac->set_price(user_input_price);

        int user_input_availability;
        std::cout << "Enter availability: ";
        std::cin >> user_input_availability;

        if (std::cin.fail() || user_input_availability <= 0)
        {
            invalidInput();
            break;
        }

        mac->set_availability(user_input_availability);

        int user_input_battery_health;
        std::cout << "Enter battery health: ";
        std::cin >> user_input_battery_health;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }

        mac->set_battery_health(user_input_battery_health);

        int user_input_storage_size;
        std::cout << "Enter storage size: ";
        std::cin >> user_input_storage_size;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }
        mac->set_storage_size(user_input_storage_size);

        std::string user_input_colours;
        std::cout << "Enter color: ";
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

        char user_input_wireless_charging;
        std::cout << "Enter wireless charging [y/n]: ";
        std::cin >> user_input_wireless_charging;
        mac->set_wireless_charging(user_input_wireless_charging == 'y' || user_input_wireless_charging == 'Y');

        int user_input_generation;
        std::cout << "Enter storage size: ";
        std::cin >> user_input_generation;

        if (std::cin.fail() || user_input_battery_health <= 0)
        {
            invalidInput();
            break;
        }
        mac->set_generation(user_input_generation);

        std::string user_input_processor;
        std::cout << "Enter color: ";
        std::getline(std::cin, user_input_processor);
        mac->set_processor(user_input_processor);

        char user_input_Apple_pencil;
        std::cout << "Enter apple pencil [y/n]: ";
        std::cin >> user_input_Apple_pencil;
        mac->set_Apple_pencil(user_input_Apple_pencil == 'y' || user_input_Apple_pencil == 'Y');

        char user_input_magic_keyboard;
        std::cout << "Enter magic keyboard [y/n]: ";
        std::cin >> user_input_magic_keyboard;
        mac->set_magic_keyboard(user_input_magic_keyboard == 'y' || user_input_magic_keyboard == 'Y');

        char user_input_touch_bar;
        std::cout << "Enter touch bar [y/n]: ";
        std::cin >> user_input_touch_bar;
        mac->set_touch_bar(user_input_touch_bar == 'y' || user_input_touch_bar == 'Y');

        char user_input_mag_safe;
        std::cout << "Enter mag safe [y/n]: ";
        std::cin >> user_input_mag_safe;
        mac->set_mag_safe(user_input_mag_safe == 'y' || user_input_mag_safe == 'Y');

        Apple_products.push_back(mac);
        std::cout << "New iPhone added to products" << std::endl;
        initializeInventory(current_user_name);
        break;
    }

    default:
        invalidInput();
        break;
    }
}

void Inventory::remove_products()
{
    std::cout << "Enter the product index you want to remove: ";
    int product_index;
    std::cin >> product_index;

    if (std::cin.fail() || product_index < 0 || static_cast<size_t>(product_index) >= Apple_products.size())
    {
        std::cout << "Invalid input." << std::endl;
        return;
    }

    Apple_products.erase(Apple_products.begin() + product_index);
    std::cout << "Product removed." << std::endl;
    initializeInventory(current_user_name);
}

void Inventory::update_products(int updateType)
{
    switch (updateType)
    {
    case 1: // Update information
    {
        int productIndex = 0;
        std::cout << "Enter the product index you want to update: ";
        while (!(std::cin >> productIndex) || productIndex <= 0 || productIndex > Apple_products.size())
        {
            std::cout << "Invalid input! Enter a valid product index: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int maxPropertyCount = -1;

        // Use a pointer to the base class to handle different product types
        Products *product = Apple_products[productIndex];

        std::cout << "Select one of the following properties that you want to update:" << std::endl;

        // Dynamic casting to handle specific product types
        switch (Apple_products[productIndex]->get_product_type_id())
        {
        case 1: // iPhone
        {
            product = dynamic_cast<iPhone *>(product);
            maxPropertyCount = 9;

            std::cout << "1. Model" << std::endl;
            std::cout << "2. Availability" << std::endl;
            std::cout << "3. Price" << std::endl;
            std::cout << "4. Condition" << std::endl;
            std::cout << "5. Battery Health" << std::endl;
            std::cout << "6. Software Generation" << std::endl;
            std::cout << "7. Storage Size" << std::endl;
            std::cout << "8. Colours" << std::endl;
            std::cout << "9. Wireless Charging" << std::endl;
            break;
        }

        case 2: // iPad
        {
            product = dynamic_cast<iPad *>(product);
            maxPropertyCount = 13;

            std::cout << "1. Model" << std::endl;
            std::cout << "2. Availability" << std::endl;
            std::cout << "3. Price" << std::endl;
            std::cout << "4. Condition" << std::endl;
            std::cout << "5. Battery Health" << std::endl;
            std::cout << "6. Software Generation" << std::endl;
            std::cout << "7. Storage Size" << std::endl;
            std::cout << "8. Colours" << std::endl;
            std::cout << "9. Wireless Charging" << std::endl;
            std::cout << "10 .generation" << std::endl;
            std::cout << "11 .processor" << std::endl;
            std::cout << "12 .Apple_pencil" << std::endl;
            std::cout << "13 .magic_keyboard" << std::endl;
            break;
        }

        case 3: // MacBook
        {
            product = dynamic_cast<MacBook *>(product);
            maxPropertyCount = 15;

            std::cout << "1. Model" << std::endl;
            std::cout << "2. Availability" << std::endl;
            std::cout << "3. Price" << std::endl;
            std::cout << "4. Condition" << std::endl;
            std::cout << "5. Battery Health" << std::endl;
            std::cout << "6. Software Generation" << std::endl;
            std::cout << "7. Storage Size" << std::endl;
            std::cout << "8. Colours" << std::endl;
            std::cout << "9. Wireless Charging" << std::endl;
            std::cout << "10 .generation" << std::endl;
            std::cout << "11 .processor" << std::endl;
            std::cout << "12 .Apple_pencil" << std::endl;
            std::cout << "13 .magic_keyboard" << std::endl;
            std::cout << "14. touch_bar" << std::endl;
            std::cout << "15. mag_safe" << std::endl;
            break;
        }

        default:
            break;
        }

        int choice = 0;
        std::cout << "Enter your choice: ";
        while (!(std::cin >> choice) || choice <= 0 || choice > maxPropertyCount)
        {
            std::cout << "Invalid input! Enter a valid choice: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (choice)
        {
        case 1:
        {
            std::string updated_model;
            std::cin.ignore();
            std::cout << "Enter updated model: ";
            std::getline(std::cin, updated_model);

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_model(updated_model);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 2:
        {
            int updated_availability;
            std::cout << "Enter updated availability: ";
            while (!(std::cin >> updated_availability) || updated_availability <= 0)
            {
                std::cout << "Invalid input! Enter a valid availibility: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_availability(updated_availability);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 3:
        {
            std::string updated_condition;
            std::cin.ignore();
            std::cout << "Enter updated condition: ";
            std::getline(std::cin, updated_condition);

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_condition(updated_condition);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 4:
        {
            int updated_price;
            std::cout << "Enter updated price: ";
            while (!(std::cin >> updated_price) || updated_price <= 0)
            {
                std::cout << "Invalid input! Enter a valid availibility: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_price(updated_price);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 5:
        {
            std::string updated_software_generation;
            std::cin.ignore();
            std::cout << "Enter updated software_generation: ";
            std::getline(std::cin, updated_software_generation);

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_software_generation(updated_software_generation);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 6:
        {
            int updated_battery_health;
            std::cout << "Enter updated battery_health: ";
            while (!(std::cin >> updated_battery_health) || updated_battery_health <= 0)
            {
                std::cout << "Invalid input! Enter a valid availibility: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_battery_health(updated_battery_health);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 7:
        {
            std::string updated_colours;
            std::cin.ignore();
            std::cout << "Enter updated colours: ";
            std::getline(std::cin, updated_colours);

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_colours(updated_colours);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 8:
        {
            int updated_storage_size;
            std::cout << "Enter updated storage_size: ";
            while (!(std::cin >> updated_storage_size) || updated_storage_size <= 0)
            {
                std::cout << "Invalid input! Enter a valid availibility: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_storage_size(updated_storage_size);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }
        case 9:
        {
            char updated_wireless_charging;
            std::cout << "Enter wireless charging [y/n]: ";
            std::cin >> updated_wireless_charging;
            if (dynamic_cast<iPhone *>(product))
            {
                dynamic_cast<iPhone *>(product)->set_wireless_charging(updated_wireless_charging == 'y' || updated_wireless_charging == 'Y');
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 10:
        {
            int updated_generation;
            std::cout << "Enter updated generation: ";
            while (!(std::cin >> updated_generation) || updated_generation <= 0)
            {
                std::cout << "Invalid input! Enter a valid availibility: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }

            if (dynamic_cast<iPad *>(product))
            {
                dynamic_cast<iPad *>(product)->set_generation(updated_generation);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }
        case 11:
        {
            std::string updated_processor;
            std::cin.ignore();
            std::cout << "Enter updated processor: ";
            std::getline(std::cin, updated_processor);

            if (dynamic_cast<iPad *>(product))
            {
                dynamic_cast<iPad *>(product)->set_processor(updated_processor);
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 12:
        {
            char updated_Apple_pencil;
            std::cout << "Enter wireless Apple_pencil [y/n]: ";
            std::cin >> updated_Apple_pencil;
            if (dynamic_cast<iPad *>(product))
            {
                dynamic_cast<iPad *>(product)->set_Apple_pencil(updated_Apple_pencil == 'y' || updated_Apple_pencil == 'Y');
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }
        case 13:
        {
            char updated_magic_keyboard;
            std::cout << "Enter magic keyboard [y/n]: ";
            std::cin >> updated_magic_keyboard;
            if (dynamic_cast<iPad *>(product))
            {
                dynamic_cast<iPad *>(product)->set_magic_keyboard(updated_magic_keyboard == 'y' || updated_magic_keyboard == 'Y');
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }
        case 14:
        {
            char updated_touch_bar;
            std::cout << "Enter touch bar [y/n]: ";
            std::cin >> updated_touch_bar;
            if (dynamic_cast<MacBook *>(product))
            {
                dynamic_cast<MacBook *>(product)->set_touch_bar(updated_touch_bar == 'y' || updated_touch_bar == 'Y');
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        case 15:
        {
            char updated_mag_safe;
            std::cout << "Enter magsafe [y/n]: ";
            std::cin >> updated_mag_safe;
            if (dynamic_cast<MacBook *>(product))
            {
                dynamic_cast<MacBook *>(product)->set_mag_safe(updated_mag_safe == 'y' || updated_mag_safe == 'Y');
            }

            std::cout << "Product information updated successfully" << std::endl;
            break;
        }

        default:
            invalidInput();
            break;
        }

        initializeInventory(current_user_name);
        break;
    }
    case 2: // update quantity
    {
        int productIndex = 0;

        std::cout << "Enter the product index you want to update availability: ";
        while (!(std::cin >> productIndex) || productIndex <= 0 || productIndex > Apple_products.size())
        {
            std::cout << "Invalid input! Enter a valid product index: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        int updated_availability;

        std::cout << "Enter new updated quantity: ";
        while (!(std::cin >> updated_availability) || updated_availability < 0)
        {
            std::cout << "Invalid input! Enter a valid availability: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        Apple_products[productIndex]->set_availability(updated_availability);
        std::cout << "Product quantity updated successfully" << std::endl;
        initializeInventory(current_user_name);
    }

    default:
        invalidInput();
        break;
    }
}
