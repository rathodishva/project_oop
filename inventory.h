// inventory.h

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
#include "products.h"  // Include the products header

class Inventory {
public:
    Inventory();
    void display_Apple_products();
    void search_products(const std::string& value);
    void autofill_inventory();

    void add_products();

   private:
    std::vector<Products*> Apple_products;
};

#endif // INVENTORY_H
