// products.cpp

#include "products.h"

Products::Products()
    : product_type_id(0),
      availability(0),
      price(0),
      condition(""),
      battery_health(0),
      software_generation(""),
      storage_size(0),
      colours("") {
}

int Products::get_product_type_id() const {
    return product_type_id;
}

int Products::get_availability() const {
    return availability;
}

int Products::get_price() const {
    return price;
}

const std::string& Products::get_condition() const {
    return condition;
}

int Products::get_battery_health() const {
    return battery_health;
}

const std::string& Products::get_software_generation() const {
    return software_generation;
}

int Products::get_storage_size() const {
    return storage_size;
}

const std::string& Products::get_colours() const {
    return colours;
}

void Products::set_product_type_id(int val) {
    product_type_id = val;
}

void Products::set_availability(int val) {
    availability = val;
}

void Products::set_price(int val) {
    price = val;
}

void Products::set_condition(const std::string& val) {
    condition = val;
}

void Products::set_battery_health(int val) {
    battery_health = val;
}

void Products::set_software_generation(const std::string& val) {
    software_generation = val;
}

void Products::set_storage_size(int val) {
    storage_size = val;
}

void Products::set_colours(const std::string& val) {
    colours = val;
}
