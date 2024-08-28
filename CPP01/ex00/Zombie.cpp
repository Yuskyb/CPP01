#include "Zombie.hpp"

Zombie::Zombie() : name("UnnamedZombie") {};

Zombie::Zombie(const std::string& ZombieName) : name(ZombieName) {};
void	Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie *newZombie(const std::string& ZombieName)
{
	return new Zombie(ZombieName);
}

void	randomChump(const std::string& ZombieName)
{
	Zombie zombie(ZombieName);
	zombie.announce();
}