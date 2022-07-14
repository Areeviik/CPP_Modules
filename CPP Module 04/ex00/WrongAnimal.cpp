#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "No type";
    std::cout<<"Default constructor of WrongAnimal class is called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    this->type = name;
    std::cout<<"Constructor with parameter of WrongAnimal class is called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &obj)
{
    std::cout<<"Copy ctor of WrongAnimal class is called"<<std::endl;
    this->type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of WrongAnimal class is called"<<std::endl;
        this->type = value.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Destructor of WrongAnimal class is called"<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout<<"I don't have a sound"<<std::endl;
}