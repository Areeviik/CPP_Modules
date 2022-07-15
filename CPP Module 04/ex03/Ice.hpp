#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"

class Ice:public AMateria
{
    // private:
    //     std::string name;
    public:
        Ice();
        ~Ice();
        // Ice(const std::string name);
        Ice(const Ice &other);
        Ice &operator=(const Ice &val);
        Ice *clone() const;
        void use(ICharacter &targer);
};

#endif