#include "span.hpp"

int main(){
	std::cout << "first test: \n\n";
	{
		Span container(10);
		for (int i = 0; i < 10; i++)
			container.addNumber(i);
		std::cout << container;
	}
	std::cout << "\n\nsecond test: \n\n";
	{
		try{
			Span container(10);
			for (int i = 0; i <= 10; i++)
				container.addNumber(i);
			std::cout << container;
		}
		catch(const char *msg){
			std::cout << msg << std::endl;
		}
	}
	std::cout << "\n\nthird test: \n\n";
	{
		Span container(10);
		srand(time(0));
		for(int i = 0; i < 10; i++)
			container.addNumber(rand() % 101);
		std::cout << container;
		std::cout << "max element: " << *std::max_element(container.getContainer().begin(), container.getContainer().end()) << std::endl;
		std::cout << "min element: " << *std::min_element(container.getContainer().begin(), container.getContainer().end()) << std::endl;
		std::cout << "longest span: " << container.longestSpan() << std::endl;
		std::cout << "shortest span: " << container.shortestSpan() << std::endl;
	}
	std::cout << "\n\nforth test: \n\n";
	{
		try{
			int int_array[] = {8,2,4,5,5,05,7,2,6,8,1,2,8,7,115,8,12,4,84,584,51,84,51};
			std::vector<int> vect(int_array, int_array + sizeof(int_array) / sizeof(int_array[0]));
			Span Container(vect.size());
			Container.LotOfNumbers(vect.begin(), vect.end());
			std::cout << Container;
		}
		catch(const char *msg){
			std::cout << msg << std::endl;
		}
	}
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// }