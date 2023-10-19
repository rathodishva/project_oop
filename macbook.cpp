#include "MacBook.h"

// Constructor
MacBook::MacBook() : touch_bar(false), mag_safe(false) {
    // Initialize other properties here if needed
}

bool MacBook::check_touch_bar() const {
    return touch_bar;
}

bool MacBook::check_mag_safe() const {
    return mag_safe;
}

void MacBook::set_touch_bar(bool val) {
    touch_bar = val;
}

void MacBook::set_mag_safe(bool val) {
    mag_safe = val;
}
