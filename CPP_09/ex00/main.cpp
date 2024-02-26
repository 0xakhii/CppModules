#include "BitcoinExchange.hpp"

void	parse_data(std::string FileContent){
	std::cout << FileContent << std::endl;
}

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 0;
	}
	else{
		std::string FileName = av[1];
		if (!(FileName.substr(FileName.find_last_of(".") + 1) == "csv")){
			std::cout << "Error: Invalid file format" << std::endl;
			return 0;
		}
		std::fstream in_file(av[1]);
		if (!in_file.is_open()){
			std::cout << "Error: Invalid file" << std::endl;
			return 0;
		}
		else{
			std::string	FileContent;
			getline(in_file, FileContent);
			while(getline(in_file, FileContent))
				parse_data(FileContent);
			in_file.close();
		}
	}
}