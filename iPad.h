#ifndef IPAD_H
#define IPAD_H

#include "iPhone.h"

class iPad : public iPhone {
public:
    int generation;
    std::string processor;
    
    iPad(); // Constructor
    
    int get_generation() const;
    std::string get_processor() const;
    bool check_Apple_pencil() const;
    bool check_magic_keyboard() const;
    
    void set_generation(int val);
    void set_processor(const std::string& val);
    void set_Apple_pencil(bool val);
    void set_magic_keyboard(bool val);
    
protected:
    bool Apple_pencil;
    
private:
    bool magic_keyboard;
};

#endif // IPAD_H
