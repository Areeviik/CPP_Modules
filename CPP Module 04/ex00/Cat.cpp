#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
    std::cout<<"Default constructor of Cat class is called"<<std::endl;
}

Cat::Cat(Cat &obj)
{
    std::cout<<"Copy ctor of Cat class is called"<<std::endl;
    *this = obj;
}

Cat &Cat::operator=(Cat const &value)
{
    std::cout<<"Assignment operator of Cat class is called"<<std::endl;
    *this = value;
    return *this;
}

Cat::~Cat()
{
    std::cout<<"Destructor of Cat class is called"<<std::endl;
}

void Cat::makeSound()
{
    std::cout<<"meow"<<std::endl;
}