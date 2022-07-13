#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(WrongAnimal &oth);
        ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &value);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound();
};

#endif