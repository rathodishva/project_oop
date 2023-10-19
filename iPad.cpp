#include "iPad.h"  // Include the iPad class header 

// Constructor for the iPad class
iPad::iPad() {
}

int iPad::get_generation() const {
    return generation;  // Member function to get the iPad generation.
}

std::string iPad::get_processor() const {
    return processor;  // Member function to get the iPad processor type.
}

bool iPad::check_Apple_pencil() const {
    return Apple_pencil;  // Member function to check if the iPad supports the Apple Pencil.
}

bool iPad::check_magic_keyboard() const {
    return magic_keyboard;  // Member function to check if the iPad supports the Magic Keyboard.
}

void iPad::set_generation(int val) {
    generation = val;  // Member function to set the iPad generation to the provided value.
}

void iPad::set_processor(const std::string& val) {
    processor = val;  // Member function to set the iPad processor type to the provided string value.
}

void iPad::set_Apple_pencil(bool val) {
    Apple_pencil = val;  // Member function to set whether the iPad supports the Apple Pencil.
}

void iPad::set_magic_keyboard(bool val) {
    magic_keyboard = val;  // Member function to set whether the iPad supports the Magic Keyboard.
}
