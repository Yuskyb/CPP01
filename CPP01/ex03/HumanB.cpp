#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) \
			: _name(name) {};

void	HumanB::attack(void)
{
	std::cout<<_name<<"attacks with their"<<_weapon->getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}