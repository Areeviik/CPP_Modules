#ifndef Cure_HPP
#define Cure_HPP

#include "AMateria.hpp"

class Cure:public AMateria
{
    // private:
    //     std::string name;
    public:
        Cure();
        ~Cure();
        // Cure(const std::string name);
        Cure(const Cure &other);
        Cure &operator=(const Cure &val);
        Cure *clone() const;
        void use(ICharacter &targer);
};

#endif