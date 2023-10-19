#ifndef IPAD_H
#define IPAD_H

#include "iPhone.h"  // Include the iPhone class header file to inherit its functionality.

class iPad : public iPhone {
public:
    int generation;        // Public member variable to store the iPad generation.
    std::string processor; // Public member variable to store the iPad processor type.

    iPad(); // Constructor for the iPad class.

    // Member fucntions to get iPad variables
    int get_generation() const;          
    std::string get_processor() const; 
    bool check_Apple_pencil() const;     
    bool check_magic_keyboard() const; 

    // Member fucntions to set iPad variables
    void set_generation(int val);         
    void set_processor(const std::string& val);  
    void set_Apple_pencil(bool val);   
    void set_magic_keyboard(bool val); 

protected:
    bool Apple_pencil;  // member variable to store information about Apple Pencil 

private:
    bool magic_keyboard;  // member variable to store information about Magic Keyboard support.
};

#endif 
