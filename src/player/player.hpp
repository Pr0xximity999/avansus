#pragma once
#include "../item/item.h"
#include <string>
#include <vector>
#include <algorithm>
class Player {
private: 
	std::string name = "";
	int position = 0; 
	std::vector<Item> inventory = *(new std::vector<Item>());
	int actions = 0;

public:
	Player(std::string name, std::vector<Item> inventory) {
		this->name = name;
	}
	//getters
	/// <summary>
	/// returns the name of the player
	/// <summary>
	std::string getName() { return name; }
	/// <summary>
	/// return the current position of the player as an index
	/// </summary>
	/// <returns>int representing the index position of the player</returns>
	int getPosition() { return position; }
	/// <summary>
	/// return the current amount of actions taken
	/// </summary>
	/// <returns>actions as an int</returns>
	int getActions() { return actions; }
	/// <summary>
	/// returns a reference to the inventory vector
	/// </summary>
	/// <returns>the pointer to inventory</returns>
	std::vector<Item>* getInventoryPTR() { return &inventory; }
	/// <summary>
	/// returns a copy of the inventory
	/// </summary>
	/// <returns>vector of items which is a copy of inventory</returns>
	std::vector<Item> getInventory() { return inventory; }

	//setters
	
	/// <summary>
	/// sets the name of the player to the name you give
	/// </summary>
	/// <param name="name">a string that is the name of the player</param>
	void setName(std::string name) { this->name = name; }
	/// <summary>
	/// sets the position of the player to an int 
	/// </summary>
	/// <param name="position"></param>
	void setPosition(int position) { this->position = position; }
	
	void setActions(int actions) { this->actions = actions; }

	void addItem(Item item) { inventory.push_back(item); }

	/// <summary>
	/// returns wether or not an item exists
	/// </summary>
	/// <param name="itemName">the name of the item</param>
	/// <returns>returns true if the player has an item false otherwise</returns>
	bool hasItem(std::string itemName);
	
};
