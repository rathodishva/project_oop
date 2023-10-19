#include "iPhone.h" // access the iphone header

iPhone::iPhone() { // constructor for iphone class 
}


std::string iPhone::get_model() const {
    return model;  // Member function to get the iPhone model.
}

void iPhone::set_model(const std::string& val) {
    model = val;  // Member function to set the iPhone model to the provided value.
}

bool iPhone::check_wireless_charging() const {
    return wireless_charging;  // Member function to check if the iPhone has wireless charging.
}

void iPhone::set_wireless_charging(bool val) {
    wireless_charging = val;  // Member function to set the wireless charging status of the iPhone.
}