#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <fstream>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warinig(void);
		void	error(void);
	
	public:
		void	complain(std::stringlevel);
}

#endif