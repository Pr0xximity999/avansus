#ifndef ROOM_HPP
#define ROOM_HPP
#include "../item/item.h"
#include <string>

class Room {
private:
	std::string Name;
	std::string Description;
	std::vector<std::string> Exits;
	std::vector<Item> Items = *(new std::vector<Item>());
	std::vector<Room> connectedRooms = *(new std::vector<Room>());
public:
	std::string getName();
	std::string getDescription();
	std::vector<std::string> getExits();
	//std::vector<Item> getItems();
	void showMap();
	void getConnectedRooms();
};

#endif // ROOM_HPP
