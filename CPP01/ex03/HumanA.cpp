#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) \
			: _name(name), _weapon(weapon) {};

void	HumanA::attack(void)
{
	std::cout<<_name<<"attacks with their"<<_weapon.getType()<<std::endl;
}
