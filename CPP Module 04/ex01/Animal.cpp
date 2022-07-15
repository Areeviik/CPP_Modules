#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout<<"Default constructor of Animal class is called"<<std::endl;
}

Animal::Animal(std::string name)
{
    this->type = name;
    std::cout<<"Constructor with parameter of Animal class is called"<<std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout<<"Copy ctor of Animal class is called"<<std::endl;
    *this = obj;
}

Animal &Animal::operator=(Animal const &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of Animal class is called"<<std::endl;
        this->type = value.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout<<"Destructor of Animal class is called"<<std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout<<"What does the "<<type<< "says?"<<std::endl;
}