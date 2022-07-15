#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout <<"Def ctor of Ice class"<<std::endl;
}

Ice::~Ice(){}

Ice::Ice(const Ice &oth) :AMateria(oth){};

Ice &Ice::operator=(const Ice &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

Ice *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout <<" * shoots an ice bolt at" <<target.getName()<<" *"<<std::endl;
}

