#include "iPhone.h"

// Constructor
iPhone::iPhone() {
    // Initialize the base class constructor if needed
}

std::string iPhone::get_model() const {
    return model;
}

void iPhone::set_model(const std::string& val) {
    model = val;
}

bool iPhone::check_wireless_charging() const {
    return wireless_charging;
}

void iPhone::set_wireless_charging(bool val) {
    wireless_charging = val;
}
