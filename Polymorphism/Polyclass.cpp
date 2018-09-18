#include "Polyheader.h"



std::string Character::getCharacterName() { // This returns the characters's name
	return name;
}


void Character::setCharacterName(std::string n) { // Thos sets the Character's name
	n = name;
}

void Character::setHealth(int h) { // This sets the health of the Character
	h = health;
}

int Character::getHealth() { // This gets the health of the Character
	return health;
}



void Zombie::setCanAttack(bool c) { // This is where we set the bool to say if the zombie can attack
	canAttack = c;
}

bool Zombie::getCanAttack() { // this is where we set the bool to tell if we have the ability to attack the player
	return canAttack;
}

void Zombie::setBaseHeight(int h) { // this sets the base height
	/// This sets the base height

	baseHeight = h;
}

int Zombie::getBaseHeight() { // this returns the Zombie's base height
	return baseHeight;
}


bool Player::getIsDeveloper() { // This returns the player's isDeveloper bool
	return isDeveloper;
}

void Player::setIsDeveloper(bool i) { // this sets the isDeveloper bool
	isDeveloper = i;

}

void Player::setBaseSpeed(int b) { // this sets the baseSpeed int
	baseSpeed = b;
}

int Player::getBaseSpeed() { // this gets the baseSpeed int
	return baseSpeed;
}