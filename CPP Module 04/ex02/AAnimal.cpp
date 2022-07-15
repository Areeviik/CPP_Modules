#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout<<"Default constructor of AAnimal class is called"<<std::endl;
}

AAnimal::AAnimal(std::string name)
{
    this->type = name;
    std::cout<<"Constructor with parameter of AAnimal class is called"<<std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout<<"Copy ctor of AAnimal class is called"<<std::endl;
    *this = obj;
}

AAnimal &AAnimal::operator=(AAnimal const &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of AAnimal class is called"<<std::endl;
        this->type = value.type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout<<"Destructor of AAnimal class is called"<<std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

void AAnimal::makeSound() const
{
    std::cout<<"What does the "<<type<< "says?"<<std::endl;
}