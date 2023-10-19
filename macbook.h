#ifndef MACBOOK_H
#define MACBOOK_H

#include "iPad.h" // Include the base class header

class MacBook : public iPad {
public:
    MacBook(); // Constructor
    bool check_touch_bar() const;
    bool check_mag_safe() const;
    void set_touch_bar(bool val);
    void set_mag_safe(bool val);

private:
    bool touch_bar;
    bool mag_safe;
};

#endif
