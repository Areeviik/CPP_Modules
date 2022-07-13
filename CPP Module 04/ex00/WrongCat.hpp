#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string name);
        WrongCat(WrongCat &oth);
        ~WrongCat();
        WrongCat &operator=(WrongCat const &value);
        void makeSound();
};

#endif