#pragma once

# include <deque>
# include <iostream> 
# include <stack>
# include <iterator>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		MutantStack(MutantStack const &other) : std::stack<T>(other) {}
		MutantStack &operator = (MutantStack const &other) {
			std::stack<T>::operator=(other);
			return *this;
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};
