#pragma once
#include "item.h"
#include <string>
#include <vector>
class Player {
private: 
	/// <summary>
	/// the name of the player
	/// </summary>
	std::string name = "";
	/// <summary>
	/// the position of the player refers to an index on the room list
	/// </summary>
	int position = 0; 
	std::vector<item> inventory = new();
};
