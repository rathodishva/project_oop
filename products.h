// products.h

#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <string>

class Products {
public:
    Products();

    int get_product_type_id() const;
    int get_availability() const;
    int get_price() const;
    const std::string& get_condition() const;
    int get_battery_health() const;
    const std::string& get_software_generation() const;
    int get_storage_size() const;
    const std::string& get_colours() const;

    void set_product_type_id(int val);
    void set_availability(int val);
    void set_price(int val);
    void set_condition(const std::string& val);
    void set_battery_health(int val);
    void set_software_generation(const std::string& val);
    void set_storage_size(int val);
    void set_colours(const std::string& val);

private:
    int product_type_id;
    int availability;
    int price;
    std::string condition;
    int battery_health;
    std::string software_generation;
    int storage_size;
    std::string colours;
};

#endif // PRODUCTS_H
