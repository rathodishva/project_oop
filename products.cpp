// products.cpp

#include "products.h"
// defult constructor
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

// implementtion of getter functions 
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

// implemention of setter functions

void Products::set_product_type_id(int product_type_id) {
    this->product_type_id = product_type_id;
}

void Products::set_availability(int availability) {
    this->availability = availability;
}

void Products::set_price(int price) {
    this->price = price;
}

void Products::set_condition(const std::string& condition) {
    this->condition = condition;
}

void Products::set_battery_health(int battery_health) {
    this->battery_health = battery_health;
}

void Products::set_software_generation(const std::string& software_generation) {
    this->software_generation = software_generation;
}

void Products::set_storage_size(int storage_size) {
    this->storage_size = storage_size;
}

void Products::set_colours(const std::string& colours) {
    this->colours = colours;
}
