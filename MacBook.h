#ifndef MACBOOK_H
#define MACBOOK_H

#include "iPad.h"  // Include the iPad class header file to inherit.

class MacBook : public iPad {
private:
    bool touch_bar;  //   variable to store whether the MacBook has a touch bar.
    bool mag_safe;   //   variable to store whether the MacBook has a MagSafe connector.

public:
    MacBook();  // Constructor for the MacBook class.

    bool check_touch_bar() const;  //  to check if the MacBook has a touch bar.
    bool check_mag_safe() const;  //   to check if the MacBook has a MagSafe connector.

    void set_touch_bar(bool val);  //  function to set whether the MacBook has a touch bar.
    void set_mag_safe(bool val);   //  function to set whether the MacBook has a MagSafe connector.
};

#endif 
