#include "MutantStack.hpp"

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }

int main(){
	MutantStack<int> _stack;
	std::cout << "empty stack: " << (_stack.empty() ? "true" : "false") << std::endl;
	for(int i = 0; i < 10; i++)
		_stack.push(i);
	std::cout << "empty stack: " << (_stack.empty() ? "true" : "false") << std::endl;
	MutantStack<int>::iterator it = _stack.begin();
	MutantStack<int>::iterator ite = _stack.end();
	std::cout << "stack content: ";
	while (it != ite)
	{
		std::cout << *it << ", ";
		++it;
	}
	std::cout << "\nstack size: " << _stack.size() << std::endl;
	std::cout << "top element: " << _stack.top() << std::endl;
	_stack.pop();
	std::cout << "top element after pop: " << _stack.top() << std::endl;
}