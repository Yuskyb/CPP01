#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(const std::string& ZombieName);
		void	announce();
};

Zombie *newZombie(const std::string& ZombieName);
void	randomChump(const std::string& ZombieName);
Zombie* zombieHorde( int N, std::string name );

#endif