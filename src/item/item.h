//
// Created by tomsom999 on 10/1/25.
//
#ifndef WORKSHOP_ITEM_H
#define WORKSHOP_ITEM_H
#include <functional>
#include <string>


class Item {
    std::string _name;
    std::string _description;
    int _charges;
    std::function<void()> _useFunc;

public:
    // Default constructor
    Item(const std::string &name, const std::string &description, int charges, const std::function<void()> &useFunc);

    // Copy constructor
    Item(const Item& other) = default;

    // Copy assignment
    Item& operator=(const Item& other) = default;

    // Move constructor
    Item(Item&& other) noexcept :
    _name(std::move(other._name)),
    _description(std::move(other._description)),
    _charges(std::move(other._charges)),
    _useFunc(std::move(other._useFunc)){}

    // Move assignment
    Item& operator=(Item&& other) noexcept {
        std::swap(_name, other._name);
        std::swap(_description, other._description);
        std::swap(_charges, other._charges);
        std::swap(_useFunc, other._useFunc);
        return *this;
    }

    std::string GetName();
    std::string GetDescription() const;
    int GetCharges() const;

    void Use();
    void Destroy() const;
};


#endif //WORKSHOP_ITEM_H