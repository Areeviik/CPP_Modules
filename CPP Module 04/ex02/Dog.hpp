#ifndef Dog_HPP
#define Dog_HPP

#include "AAnimal.hpp"

class Dog:public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string name);
        Dog(Dog &oth);
        ~Dog();
        Dog &operator=(Dog const &value);
        virtual void makeSound();
        Brain *getBrain(void)const;
};

#endif