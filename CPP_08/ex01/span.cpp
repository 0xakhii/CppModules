#include "span.hpp"

Span::Span():Size(0){}

Span::Span(unsigned int N): Size(N){}

Span::Span(const Span &copy){
	*this = copy;
}

Span::~Span(){
	Container.erase(Container.begin(), Container.end());
}

Span&	Span::operator=(const Span &copy){
	if (this == &copy)
		return *this;
	Size = copy.Size;
	return *this;			
}

unsigned int Span::getSize()const{
	return Size;
}

const std::vector<int> &Span::getContainer()const{
	return Container;
}

void	Span::addNumber(int number){
	if (Container.size() >= Size)
		throw "Can't Add Numbers Container is Full";
	else
		Container.push_back(number);
}

int Span::shortestSpan() const {
    if (Container.size() < 2)
        throw "Cannot find shortest span";
    std::vector<int> copy(Container.begin(), Container.end());
    std::sort(copy.begin(), copy.end());
    int shortestDiff = std::abs(copy[1] - copy[0]);
    for (size_t i = 1; i < copy.size() - 1; ++i) {
        int currentDiff = std::abs(copy[i + 1] - copy[i]);
        if (currentDiff < shortestDiff) {
            shortestDiff = currentDiff;
        }
    }
    return shortestDiff;
}

int		Span::longestSpan()const{
	if (Container.size() < 2)
		throw "Cannot find shortest span";
	return (*std::max_element(Container.begin(), Container.end())
		- *std::min_element(Container.begin(), Container.end()));
}

std::ostream&	operator<<(std::ostream &out, Span &span){
	out << "size of the container: " << span.getSize() << std::endl;
	const std::vector<int> vect = span.getContainer();
	out << "Container Elements\n"; 
	for (size_t i = 0; i < vect.size(); i++){
		out << vect[i];
		if (i != vect.size() - 1)
			out << ", ";
	}
	out << std::endl;
	return out;
}