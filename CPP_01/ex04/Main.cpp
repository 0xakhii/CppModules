#include "Sed.hpp"

void Sed::replace(){
    std::string NewFileName = FileName + ".replace";
    std::ifstream FileToRead(FileName.c_str());
    std::ofstream FileToWrite(NewFileName.c_str());
    if (!FileToRead.is_open() || !FileToWrite.is_open()) {
        std::cout << "failed to open the file" << std::endl;
		std::remove(NewFileName.c_str());
        return;
    }
    std::string Line;
	getline(FileToRead, Line, '\0');
	size_t pos = Line.find(StringToReplace);
	if (pos == std::string::npos) {
		std::cout << "String not found" << std::endl;
		std::remove(NewFileName.c_str());
		return;
	}
	while (pos != std::string::npos) {
		Line.erase(pos, StringToReplace.length());
		Line.insert(pos, StringToReplaceWith);
		pos = Line.find(StringToReplace, pos + StringToReplaceWith.length());
	}
	FileToWrite << Line;
    FileToRead.close();
    FileToWrite.close();
}


int main(int ac, char **av){
	if (ac != 4) {
		std::cout << "<Usage>: ./Sed <FileName> <String you want to replace> <String you want to replace with>" << std::endl;
		return 1;
	}else{
		Sed _sed(av[1], av[2], av[3]);
		if (av[2][0] == '\0' || av[3][0] == '\0'){
			std::cout << "Empty string" << std::endl;
			return 1;
		}
		else
			_sed.replace();
	}
	return 0;
}