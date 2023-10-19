#ifndef MACBOOK_H
#define MACBOOK_H

#include "iPad.h"

class MacBook : public iPad {
private:
    bool touch_bar;
    bool mag_safe;
    
public:
    MacBook(); // Constructor
    
    bool check_touch_bar() const;
    bool check_mag_safe() const;
    
    void set_touch_bar(bool val);
    void set_mag_safe(bool val);
};

#endif // MACBOOK_H
