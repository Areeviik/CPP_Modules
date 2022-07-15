#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout <<"Def ctor of Cure class"<<std::endl;
}

Cure::~Cure(){}

Cure::Cure(const Cure &oth) :AMateria(oth){};

Cure &Cure::operator=(const Cure &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout <<" * heals" <<target.getName()<<"'s wounds *"<<std::endl;
}

