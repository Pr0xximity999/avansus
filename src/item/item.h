//
// Created by tomsom999 on 10/1/25.
//

#ifndef WORKSHOP_ITEM_H
#define WORKSHOP_ITEM_H
#include <functional>
#include <string>


class Item {
private:
    std::string _description;
    std::string _name;
    std::function<void()> _useFunc;
public:
    Item(std::string name, std::string description, std::function<void()> useFunc);

    void Use() const;
    void Destroy();
};


#endif //WORKSHOP_ITEM_H