#include "player.hpp"

bool Player::hasItem(std::string item) {
	bool exist = false;
	auto check = [&exist, item](Item i) { exist = (item == i.GetName()); };
	std::for_each(this->inventory.begin(), this->inventory.end(), check);
	return exist;
}
