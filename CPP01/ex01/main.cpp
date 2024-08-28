#include "Zombie.hpp"

int main(int ac, char **av)
{
	std::string name;
	if (ac == 0)
		return (0);
	name = std::string(av[1]);
	Zombie *zombie = zombieHorde(5, name);
	delete[] zombie;
	return (0);
}