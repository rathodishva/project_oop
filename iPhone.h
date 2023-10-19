#ifndef IPHONE_H
#define IPHONE_H

#include "Products.h" // Include the base class header file

class iPhone : public Products {
public:
    std::string model;
    
    iPhone(); // Constructor
    
    std::string get_model() const;
    void set_model(const std::string& val);
    
    bool check_wireless_charging() const;
    void set_wireless_charging(bool val);
    
private:
    bool wireless_charging;
};

#endif // IPHONE_H
