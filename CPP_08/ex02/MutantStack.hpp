#pragma once

# include <iostream> 
# include <stack>
# include <vector>
# include <iterator>
# include <deque>
# include <algorithm>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack() {}
		MutantStack(MutantStack const &other) : std::stack<T, Container>(other) {}
		MutantStack &operator = (MutantStack const &other) {
			std::stack<T, Container>::operator=(other);
			return *this;
		}
		~MutantStack() {}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};
