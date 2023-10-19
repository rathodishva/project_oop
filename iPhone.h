#ifndef IPHONE_H
#define IPHONE_H

#include "Products.h" // Include the parent class header file

class iPhone : public Products {  // create a child class from the parent class claled iphone
public:
    std::string model;  // sting varible to idenify model
    
    iPhone(); // iphone constructor 
    
    // get model for iphone class
    std::string get_model() const; 

    // set model for iphone class
    void set_model(const std::string& val);
    
    // function to check if wireless charging is applicalbe for this phone
    bool check_wireless_charging() const;
    void set_wireless_charging(bool val);
    
private:
    // memeber variable for wireless charaging
    bool wireless_charging;
};

#endif 
