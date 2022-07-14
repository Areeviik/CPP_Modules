#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog:public Animal
{
    public:
        Dog();
        Dog(std::string name);
        Dog(Dog &oth);
        ~Dog();
        Dog &operator=(Dog const &value);
        virtual void makeSound();
};

#endif