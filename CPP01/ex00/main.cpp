#include "Zombie.hpp"

int main(int ac, char **av)
{
	std::string ZombieName;
	if (ac != 2)
		return (0);
	ZombieName = std::string(av[1]);
	Zombie *zombie = newZombie(ZombieName);
	randomChump(ZombieName);
	delete zombie;
	return (0);
}