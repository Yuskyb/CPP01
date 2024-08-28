#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	std::string filename = std::string(av[1]);
	std::string s1 = std::string(av[2]);
	std::string	s2 = std::string(av[3]);
	std::string	line;
	size_t		pos;

	std::ifstream infile(filename);
	if (!infile.is_open()) {
		std::cerr << "Error"<<std::endl;
		return (0);
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open()) {
		std::cerr << "Error"<<std::endl;
		return (0);
	}
	while (std::getline(infile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos,s2);
			pos += s2.length();
		}
		outfile<<line<<std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
