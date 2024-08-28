#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string brain;

	brain =  "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout <<&brain <<std::endl;
	std::cout <<stringPTR <<std::endl;
	std::cout <<&stringREF <<std::endl;

	std::cout <<brain <<std::endl;
	std::cout <<*stringPTR <<std::endl;
	std::cout <<stringREF <<std::endl;
}