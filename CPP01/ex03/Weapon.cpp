#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}

const std::string&	Weapon::getType(void) const
{
	return _type;
}
