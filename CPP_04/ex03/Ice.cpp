#include "Ice.hpp"

Ice::Ice(){
    this->_type = "ice";
}

Ice::Ice(const Ice& Ice) : AMateria(Ice) {}

Ice &Ice::operator=(const Ice& Ice){
    this->_type = Ice._type;
    return (*this);
}

Ice::~Ice() {}

Ice::Ice(std::string const & type) : AMateria(type) {}

AMateria* Ice::clone() const{
    return (new Ice());
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}