#ifndef Materia_HPP
#define Materia_HPP

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
    protected:
        static const int size;
        AMateria *m[size];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &oth);
        MateriaSource &operator=(const MateriaSource &val);

        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const & type);
};

#endif