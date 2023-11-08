#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed{
	private:
		std::string FileName;
		std::string Stringtoreplace;
		std::string Stringtoreplacewith;
	public:
		Sed(std::string FileName, std::string Stringtoreplace, std::string Stringtoreplacewith);
		~Sed();
};

#endif