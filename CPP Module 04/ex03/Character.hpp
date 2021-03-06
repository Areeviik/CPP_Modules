#ifndef Character_HPP
#define Character_HPP

#include "ICharacter.hpp"

class Character:public ICharacter
{
    private:
        static const int size = 4;
        std::string name;
        AMateria *inventory[size];
    public:
        Character();
        Character(const std::string name);
        Character(const Character &oth);
        virtual ~Character();
        Character &operator=(const Character &val);
        const std::string& getName() const;
        void equip(AMateria *m);
        void unequip(int i);
        void use(int i, ICharacter& target);
};

#endif