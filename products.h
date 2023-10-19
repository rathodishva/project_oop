// products.h

#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <string>

class Products {
protected:
    int product_type_id;
    int availability;
    int price;
    std::string condition;
    int battery_health;
    std::string software_generation;
    int storage_size;
    std::string colours;
public:
    //constructor
    Products();
    Products(int availability, int price, const std::string& model,
            int storage_size, const std::string& colours);

    //getter funcitons 
    int get_product_type_id() const;
    int get_availability() const;
    int get_price() const;
    const std::string& get_condition() const;
    int get_battery_health() const;
    const std::string& get_software_generation() const;
    int get_storage_size() const;
    const std::string& get_colours() const;
    
    // setter functions
    void set_product_type_id(int product_type_id);
    void set_availability(int availability);
    void set_price(int price);
    void set_condition(const std::string& model);
    void set_battery_health(int battery_health);
    void set_software_generation(const std::string& software_generation);
    void set_storage_size(int storage_size);
    void set_colours(const std::string& colours);


};

#endif // PRODUCTS_H


