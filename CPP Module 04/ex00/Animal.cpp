#include "Animal.hpp"

Animal::Animal()
{
    this->type = "No type";
    std::cout<<"Default constructor of Animal class is called"<<std::endl;
}

Animal::Animal(std::string name)
{
    this->type = name;
    std::cout<<"Constructor with parameter of Animal class is called"<<std::endl;
}

Animal::Animal(Animal &obj)
{
    std::cout<<"Copy ctor of Animal class is called"<<std::endl;
    this->type = obj.type;
}

Animal &Animal::operator=(Animal const &value)
{
    std::cout<<"Assignment operator of Animal class is called"<<std::endl;
    this->type = value.type;
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

void Animal::makeSound()
{
    std::cout<<"What does the "<<type<< "says?"<<std::endl;
}