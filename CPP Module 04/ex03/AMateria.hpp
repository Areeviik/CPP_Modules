#ifndef AMateria_HPP
#define AMateria_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    
    public:
        AMateria();
        AMateria(const AMateria &oth);
        AMateria(std::string const &type);
        AMateria &operator=(const AMateria &value);
        ~AMateria();
        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif