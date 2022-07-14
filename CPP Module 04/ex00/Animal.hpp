#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string name);
        Animal(const Animal &oth);
        virtual ~Animal();
        Animal &operator=(Animal const &value);
        std::string getType() const;
        void setType(std::string type);
        virtual void makeSound() const;
};

#endif