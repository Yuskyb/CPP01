#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>

class HumanA {
	private:
		std::string _name;
		Weapon	_weapon;
	
	public:
		HumanA(const std::string& name, Weapon& weapon);
		const std::string& getType();
		void	attack(void);
};

#endif