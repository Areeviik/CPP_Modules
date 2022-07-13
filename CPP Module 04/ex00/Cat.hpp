#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    public:
        Cat();
        Cat(std::string name);
        Cat(Cat &oth);
        ~Cat();
        Cat &operator=(Cat const &value);
        void makeSound();
};

#endif