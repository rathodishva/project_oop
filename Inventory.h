#ifndef INVENTORY_H
#define INVENTORY_H

#include "Products.h"
#include "iPhone.h"
#include "MacBook.h"
#include "iPad.h"
#include "Utils.h"
#include <vector>
#include <string>

class Inventory {
public:
    Inventory();
    void display_Apple_products();
    void search_products(const std::string& value);
    void autofill_inventory();
    void add_products();
    void remove_products();
    void update_products(int updateType);

private:
    std::vector<Products*> Apple_products;
};

#endif // INVENTORY_H
