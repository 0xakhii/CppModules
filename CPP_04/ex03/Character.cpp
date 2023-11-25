#include "Character.hpp"

Character::Character()
{
    this->_name = "default";
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_saveInventory[i] = NULL;
    }
}

Character::Character(const Character& Character)
{
    this->_name = Character._name;
    for (int i = 0; i < 4; i++)
    {
        if (Character._inventory[i])
            this->_inventory[i] = Character._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
        this->_saveInventory[i] = this->_inventory[i];
    }
}

Character &Character::operator=(const Character& Character)
{
    if (this != &Character)
    {
        this->_name = Character._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (Character._inventory[i])
                this->_inventory[i] = Character._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
            this->_saveInventory[i] = this->_inventory[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
        else if (this->_inventory[i] == NULL && this->_saveInventory[i])
            delete this->_saveInventory[i];
    }
}

Character::Character(std::string const & name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_saveInventory[i] = NULL;
    }
}

std::string const & Character::getName() const { return (this->_name); }

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m->clone();
            if (this->_saveInventory[i])
                delete this->_saveInventory[i];
            this->_saveInventory[i] = this->_inventory[i];
            return ;
        }
    }
    delete m;
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 4; i++)
    {
        if (i == idx)
        {
            this->_inventory[i]->use(target);
            return ;
        }
    }
}