#include "room.hpp"
#include <iostream>
#include <algorithm>
/// <summary>
/// Getter for Room Name
/// </summary>
/// <returns></returns>
std::string Room::getName() {
	return Room::Name;
}

/// <summary>
/// Getter for Room Description
/// </summary>
/// <returns></returns>
std::string Room::getDescription() {
	return Room::Description;
}

/// <summary>
/// Getter for Room Exits
/// </summary>
/// <returns></returns>
std::vector<std::string> Room::getExits() {
	return Room::Exits;
}

/// <summary>
/// Shows the layout of the map
/// </summary>
void Room::showMap() {
	std::cout << R"(
								______
								|	 |
								|	 | -- (northeast) --> [Canteen]
[Lecture Hall]  <--  (west)  --	|Hall|
								|	 |
								|	 | -- (east) --> [Library]
								|____|
								   
								  |

								(south)

								  |

							[Server Room]
)" << '\n';
}

/// <summary>
/// Getter for all Rooms connected to current Room
/// </summary>
/// <returns></returns>
std::vector<Room&> Room::getConnectedRooms() {
	auto print = [](Room& r) {std::cout << r.getName() << ' ';};

	std::for_each(Room::connectedRooms.cbegin(), Room::connectedRooms.cend(), print);
}