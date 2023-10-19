#ifndef IPHONE_H
#define IPHONE_H
#include <string>

#include "Products.h" // Include the parent class header

class iPhone : public Products {
public:
    iPhone(); // Constructor
    std::string model;

    // getter functioins 
    std::string get_model() const;

    // setter function
    void set_model(const std::string& val);
    

private:
    
    bool wireless_charging;

    // Getter functions
    bool check_wireless_charging() const;

    // Setter function for wireless charging
    void set_wireless_charging(bool wireless_charging);
};

#endif

