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