#ifndef IPHONE_H
#define IPHONE_H

#include "Products.h" // Include the base class header

class iPhone : public Products {
public:
    iPhone(); // Constructor
    std::string get_model() const;
    void set_model(const std::string& val);
    bool check_wireless_charging() const;
    void set_wireless_charging(bool val);

private:
    std::string model;
    bool wireless_charging;
};

#endif
