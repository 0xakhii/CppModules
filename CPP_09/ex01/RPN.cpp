#include "RPN.hpp"

RPN::RPN(){}

bool	is_op(char op){
	return (op == '+' || op == '/' || op == '*' || op == '-');
}

RPN::RPN(std::string input){
	int i = 0;
	while (input[i] == ' ' || input[i] == '\t')
		i++;
	for(int i = 0; input[i]; i++){
		if(input[i] == ' ')
			i++;
		if (isdigit(input[i]))
			_stack.push(input[i] - '0');
		else if (is_op(input[i])){
			if (_stack.size() < 2)
				throw "Error: you cant do operation with less than 2 nummbers";
			int Firstnum = _stack.top();
			_stack.pop();
			switch (input[i]){
				case '+':
					_stack.top() += Firstnum;
					break;
				case '-':
					_stack.top() -= Firstnum;
					break;
				case '/':
					if (Firstnum == 0)
						throw "Error div by 0 is impossible";
					_stack.top() /= Firstnum;
					break;
				case '*':
					_stack.top() *= Firstnum;
					break;
				default:
					throw "Operation Error";
					break;
			}
		}
		else
			throw "Error: bad input";
	}
	if (_stack.size() != 1)
		throw "Error: Stack not empty";
	else
		std::cout << _stack.top() << std::endl;
}

RPN::RPN(RPN const &copy){
	*this = copy;
}

RPN&	RPN::operator=(RPN const &copy){
	if (this != &copy){
		_stack = copy._stack;
	}
	return *this;	
}

RPN::~RPN(){
	for(size_t i = 0; i <= _stack.size(); i++)
		_stack.pop();
}