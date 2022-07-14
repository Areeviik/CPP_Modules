#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(std::string name);
        Cat(const Cat &oth);
        ~Cat();
        Cat &operator=(Cat const &value);
        virtual void makeSound();
};

#endif