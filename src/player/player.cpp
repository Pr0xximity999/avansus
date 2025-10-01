#include "player.hpp"

bool Player::hasItem(std::string item) {
	bool exist = false;
	auto check = [&exist](Item i) { exist = (item == i.getName()); };
	std::for_each(this->inventory.begin(), this->inventory.end(), check);
	return exist;
}
