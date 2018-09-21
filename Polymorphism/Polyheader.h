#pragma once
#include <String>

// This is the character class and it has the methodss for setting
// the health and name
// Also, the Player and Zombie classes derive from this class
class Character {




public:
	std::string name;
	//Health
	int health;
	Character();
	Character(std::string n, int h);

	virtual void setCharacterName(std::string _name);

	std::string getCharacterName();


	virtual void setHealth(int h);

	virtual int getHealth();

	virtual void printInfo();

};


// This is a zombie class that inherits the Character class
// In this class, we have the bool canAttacl and the int baseHeight.
class Zombie :Character {
private:
	bool canAttack;
	int baseHeight;

public:
	Zombie();
	Zombie(bool c, int b);

	void setCanAttack(bool c);

	bool getCanAttack();

	virtual void setHealth(int h);
	void setBaseHeight(int h);

	int getBaseHeight();

	void setCharacterName(std::string _name) {
		Character::setCharacterName(_name);
	}
	void printInfo();

};


// This is called Player and it inherits the Character class
// There is the isDeveloper bool and the int baseSpeed
class Player :Character {
private:
	bool isDeveloper;
	int baseSpeed;

public:
	
	Player();
	Player(bool i, int b);

	void setIsDeveloper(bool i);

	bool getIsDeveloper();

	
	void setBaseSpeed(int b);

	int getBaseSpeed();

	void setHealth(int h) {
		Character::setHealth(h);
	}


};