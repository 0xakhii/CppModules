#include "PmergeMe.hpp"

int main(int ac, char **av){
	if(ac < 2){
		std::cout << "Error: bad arguments" << std::endl;
		return 1;
	}
	else{
		std::vector<int> vectContainer;
		std::deque<int> deqContainer;
		for (int i = 1; i <= ac; i++){
			if (av[i]){
				for(int j = 0; av[i][j]; j++){
					if (!std::isdigit(av[i][j])){
						std::cout << "Error: Invalid argument: " << av[i] << std::endl;
						return 1;
					}
				}
				vectContainer.push_back(std::atoi(av[i]));
				deqContainer.push_back(std::atoi(av[i]));
			}
		}
		sortvect(vectContainer, ac - 1);
		sortdeq(deqContainer, ac - 1);
	}
}
