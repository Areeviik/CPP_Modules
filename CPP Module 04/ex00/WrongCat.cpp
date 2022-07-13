#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    WrongAnimal::type = "WrongCat";
    std::cout<<"Default constructor of WrongCat class is called"<<std::endl;
}

WrongCat::WrongCat(WrongCat &obj)
{
    std::cout<<"Copy ctor of WrongCat class is called"<<std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(WrongCat const &value)
{
    std::cout<<"Assignment operator of WrongCat class is called"<<std::endl;
    *this = value;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout<<"Destructor of WrongCat class is called"<<std::endl;
}

void WrongCat::makeSound()
{
    std::cout<<"Mrrr~"<<std::endl;
}