#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout <<"Def ctor of AMateria class"<<std::endl;
}

AMateria::AMateria(std::string const &type)
{
    std::cout<<"Ctor with param of AMateria class"<<std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &oth)
{
    *this = oth;
}

AMateria::~AMateria()
{
    std::cout<<"Destructor of AMateria class"<<std::endl;
}

AMateria &AMateria::operator=(const AMateria &value)
{
    if (this != &value)
        this->type = value.type;
    std::cout<<"ASsignment operator of Amateria class"<<std::endl;
    return *this;
}

std::string const &AMateria::getType()const 
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    std::cout<<"Virtual use() function of AMateria class"<<std::endl;
}
