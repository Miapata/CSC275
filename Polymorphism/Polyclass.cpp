#include "pch.h"
#include "Polyheader.h"
#include <iostream>


std::string Character::getCharacterName() { // This returns the characters's name
	return name;
}


void Character::setCharacterName(std::string n) { // This sets the Character's name
	name = n;
}

void Character::setHealth(int h) { // This sets the health of the Character
	if (h >= 0) {
		health = h;
	}
	else {
		std::cout << "Error: Negative value not valid for health.\n\n";
	}
}

int Character::getHealth() { // This gets the health of the Character
	return health;
}

void Character::printInfo() {
	std::cout << "Character with name " << name << " and has " << health << " health." << std::endl << std::endl;
}

Character::Character() {

}

Character::Character(std::string n, int h) {
	setCharacterName(n);
	setHealth(h);
}



void Zombie::setCanAttack(bool c) { // This is where we set the bool to say if the zombie can attack
	canAttack = c;
}

bool Zombie::getCanAttack() { // this is where we set the bool to tell if we have the ability to attack the player
	return canAttack;
}
void Zombie::setCharacterName() {

}
void Zombie::setHealth(int h)
{
	Character::setHealth(h);
}

void Zombie::setBaseHeight(int h) { // this sets the base height
	/// This sets the base height

	baseHeight = h;
}

int Zombie::getBaseHeight() { // this returns the Zombie's base height
	return baseHeight;
}

void Zombie::printInfo() {
	Character::printInfo();
}
Zombie::Zombie() {

}

Zombie::Zombie(bool c, int b) {
	setCanAttack(c);
	setBaseHeight(b);
}

bool Player::getIsDeveloper() { // This returns the player's isDeveloper bool
	return isDeveloper;
}
int Player::getBaseSpeed() { // this gets the baseSpeed int
	return baseSpeed;
}
void Player::setIsDeveloper(bool i) { // this sets the isDeveloper bool
	isDeveloper = i;

}

void Player::setBaseSpeed(int b) { // this sets the baseSpeed int
	baseSpeed = b;
}



Player::Player() {

}

Player::Player(bool i, int b) {
	setIsDeveloper(i);
	setBaseSpeed(b);

}