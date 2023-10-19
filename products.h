#include <string>

class Products {
private:
    int product_type_id;
    int availability;
    int price;
    std::string condition;
    int battery_health;
    std::string software_generation;
    int storage_size;
    std::string colours;

public:
    Products();
    int get_product_type_id();
    int get_availability();
    int get_price();
    std::string get_condition();
    int get_battery_health();
    std::string get_software_generation();
    int get_storage_size();
    std::string get_colours();

    void set_product_type_id(int val);
    void set_availability(int val);
    void set_price(int val);
    void set_condition(const std::string& val);
    void set_battery_health(int val);
    void set_software_generation(const std::string& val);
    void set_storage_size(int val);
    void set_colours(const std::string& val);
};
