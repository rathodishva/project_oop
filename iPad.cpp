#include "iPad.h"

// Constructor
iPad::iPad() {
    // Initialize the base class constructor if needed
}

int iPad::get_generation() const {
    return generation;
}

std::string iPad::get_processor() const {
    return processor;
}

bool iPad::check_Apple_pencil() const {
    return Apple_pencil;
}

bool iPad::check_magic_keyboard() const {
    return magic_keyboard;
}

void iPad::set_generation(int val) {
    generation = val;
}

void iPad::set_processor(const std::string& val) {
    processor = val;
}

void iPad::set_Apple_pencil(bool val) {
    Apple_pencil = val;
}

void iPad::set_magic_keyboard(bool val) {
    magic_keyboard = val;
}
