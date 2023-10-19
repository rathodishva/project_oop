#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <string>

class Products {
public:
    Products();
    virtual ~Products() = default;

    int get_product_type_id() const;
    int get_availability() const;
    double get_price() const;
    const std::string& get_condition() const;
    double get_battery_health() const;
    const std::string& get_software_generation() const;
    int get_storage_size() const;
    const std::string& get_colours() const;

    void set_product_type_id(int val);
    void set_availability(int val);
    void set_price(double val);
    void set_condition(const std::string& val);
    void set_battery_health(double val);
    void set_software_generation(const std::string& val);
    void set_storage_size(int val);
    void set_colours(const std::string& val);

private:
    int product_type_id;
    int availability;
    double price;
    std::string condition;
    double battery_health;
    std::string software_generation;
    int storage_size;
    std::string colours;
};

#endif // PRODUCTS_H
