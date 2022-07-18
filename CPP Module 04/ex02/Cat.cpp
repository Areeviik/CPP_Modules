#include "Cat.hpp"

Cat::Cat()
{
    AAnimal::type = "Cat";
    std::cout<<"Default constructor of Cat class is called"<<std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout<<"Copy ctor of Cat class is called"<<std::endl;
    *this = obj;
}

Cat &Cat::operator=(Cat const &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of Cat class is called"<<std::endl;
        *this = value;
    }
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

Brain *Cat::getBrain(void)const
{
    return this->brain;
}