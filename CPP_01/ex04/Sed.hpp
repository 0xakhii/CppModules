#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <fstream>

class Sed{
	private:
		std::string FileName;
		std::string StringToReplace;
		std::string StringToReplaceWith;
	public:
		Sed(std::string FileName, std::string StringToReplace, std::string StringToReplaceWith);
		void	replace();
		~Sed();
};

#endif