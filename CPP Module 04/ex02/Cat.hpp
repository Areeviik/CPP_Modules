#ifndef Cat_HPP
#define Cat_HPP

#include "AAnimal.hpp"

class Cat:public AAnimal
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
        Brain *getBrain(void)const;
};

#endif