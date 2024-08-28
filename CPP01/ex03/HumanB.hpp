#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>

class HumanB {
	private:
		std::string _name;
		Weapon	*_weapon;
	
	public:
		HumanB(const std::string& name);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif