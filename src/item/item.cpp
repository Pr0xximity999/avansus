#include "item.h"

#include <iostream>
#include <sstream>

Item::Item(const std::string &name, const std::string &description, const int charges, const std::function<void()> &useFunc) {
    _name = name;
    _description = description;
    _charges = charges;
    _useFunc = useFunc;
}

std::string Item::GetName() {
    return _name;
}

std::string Item::GetDescription() const {
    // Using a string stream to add numbers
    std::stringstream text;
    text << _description << "\n" << _charges << "   Charges left.\n";
    return text.str();
}

int Item::GetCharges() const {
    return _charges;
}

void Item::Use() {
    // Use item, remove a charge
    std::cout << "Using" << _name;
    _useFunc();
    _charges--;

    // Remove item if no charges left
    std::cout << _name << " has " << _charges << " charges left.\n";
    if (_charges == 0) {
        Destroy();
    }
}

void Item::Destroy() const{
    std::cout << _name << " has been destroyed.\n";
}
