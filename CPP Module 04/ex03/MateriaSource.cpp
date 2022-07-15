#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i =0;
    while (i < size)
    {
        this->m[i] = NULL;
        i++;
    }
};

MateriaSource::MateriaSource(const MateriaSource &oth)
{
    *this = oth;
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < size)
    {
        if (this->m[i])
            delete this->m[i];
        i++;
    }
};

MateriaSource &MateriaSource::operator=(const MateriaSource &val)
{
    if (this != &val)
    {
        int i = 0;
        while (i < size)
        {
            if (this->m[i])
                delete this->m[i];
            if (val.m[i])
                this->m[i] = val.m[i]->clone();
            else
                this->m[i] = NULL;
            i++;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    while (i < size)
    {
        this->m[i] = m;
        i++;
    }

}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    int i = 0;
    while (i < size)
    {
        if (this->m[i] != NULL && this->m[i]->getType() == type)
            return this->m[i]->clone();
        else
        {
            std::cout<<"Type is unknown"<<std::endl;
            return 0;
        }
        i++;
    }
}