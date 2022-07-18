#include "Dog.hpp"

Dog::Dog()
{
    AAnimal::type = "Dog";
    std::cout<<"Default constructor of Dog class is called"<<std::endl;
}

Dog::Dog(Dog &obj)
{
    std::cout<<"Copy ctor of Dog class is called"<<std::endl;
    *this = obj;
}

Dog &Dog::operator=(Dog const &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of Dog class is called"<<std::endl;
        *this = value;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout<<"Destructor of Dog class is called"<<std::endl;
}

void Dog::makeSound()
{
    std::cout<<"wouf"<<std::endl;
}

Brain *Dog::getBrain()const
{
    return this->brain;
}