// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Polyheader.h"
int main()
{

	Character character("John", 10);
	character.printInfo();

	Zombie zombie;
	zombie.setHealth(1);
	zombie.setCharacterName("Name");
	zombie.printInfo();

	Player player;
	
}
