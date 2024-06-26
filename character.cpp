#include "character.h"
#include <iostream>

Character::Character(std::string n, int h) : name(n), health(h) {}

// Display the character's stats
void Character::display() const {
	std::cout << "Name: " << name << ", Health: " << health << std::endl;
}

// Get the character's name
std::string Character::getName() const {
	return name;
}

// Getter for health
int Character::getHealth() const {
	return health;
}

// Setter for health
void Character::setHealth(int h) {
	health = h;
}

