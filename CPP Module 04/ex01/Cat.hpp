#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat:public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(std::string name);
        Cat(const Cat &oth);
        ~Cat();
        Cat &operator=(Cat const &value);
        virtual void makeSound();
};

#endif