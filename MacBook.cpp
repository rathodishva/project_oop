#include "MacBook.h"  // Include the MacBook class header file 

// Constructor for the MacBook class
MacBook::MacBook() {
}

bool MacBook::check_touch_bar() const {
    return touch_bar;  //  function to check if the MacBook has a touch bar.
}

bool MacBook::check_mag_safe() const {
    return mag_safe;  //  function to check if the MacBook has a MagSafe connector.
}

void MacBook::set_touch_bar(bool val) {
    touch_bar = val;  //  function to set whether the MacBook has a touch bar.
}

void MacBook::set_mag_safe(bool val) {
    mag_safe = val;  //  function to set whether the MacBook has a MagSafe connector.
}
