#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string name);
        AAnimal(const AAnimal &oth);
        virtual ~AAnimal();
        AAnimal &operator=(AAnimal const &value);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const = 0;
};

#endif