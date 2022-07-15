#include "Character.hpp"

Character::Character(): name("no name")
{
    int i = 0;
    while (i < this->size)
    {
        this->inventory[i] = NULL;
        i++;
    }
}

Character::Character(const std::string name)
{
    this->name=name;
    int i = 0;
    while (i < this->size)
    {
        this->inventory[i] = NULL;
        i++;
    }
}

Character::Character(const Character &oth)
{
    *this = oth;
}

Character &Character::operator=(const Character &val)
{
    if (this != &val)
    {
        this->name = val.name;
        int i = 0;
        while (i < this->size)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (val.inventory[i])
                this->inventory[i] = val.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
            i++;
        }
    }
    return *this;
}

Character::~Character()
{
    int i = 0;
    while (i < this->size)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        i++;
    }
};

std::string Character::getName(void)const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (i < this->size)
    {
        if (this->inventory[i] == NULL)
            this->inventory[i] = m;
        i++;
    }
}

void Character::unequip(int i)
{
    if (i >= 0 && i < this->size)
        this->inventory[i] = NULL;
}

void Character::use(int i, ICharacter &target)
{
    if (this->inventory[i] && i >= 0 && i < this->size)
        this->inventory[i]->use(target);
}