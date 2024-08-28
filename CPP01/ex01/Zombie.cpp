#include "Zombie.hpp"

Zombie::Zombie() : name("UnnamedZombie") {};

Zombie::Zombie(const std::string& ZombieName) : name(ZombieName) {};
void	Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i] = Zombie(name);
		zombie[i].announce();
	}
	return (zombie);
}