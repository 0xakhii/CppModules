#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_saveInventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& MateriaSource){
    for (int i = 0; i < 4; i++)
    { 
        if (MateriaSource._inventory[i])
            this->_inventory[i] = MateriaSource._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
        this->_saveInventory[i] = this->_inventory[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource& MateriaSource){
    if (this != &MateriaSource)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (MateriaSource._inventory[i])
                this->_inventory[i] = MateriaSource._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
            this->_saveInventory[i] = this->_inventory[i];
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        if (this->_saveInventory[i])
            delete this->_saveInventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return ;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] && this->_inventory[i]->getType() == type)
        {
            this->_saveInventory[i] = this->_inventory[i]->clone();
            return this->_saveInventory[i];
        }
    }
    return 0;
}