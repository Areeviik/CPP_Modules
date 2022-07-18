#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Default ctor of Brain class is called"<<std::endl;
}

Brain::Brain(const Brain &oth)
{
    std::cout <<"Ctor with param of Brain class is called"<<std::endl;
    *this = oth;
}

Brain::~Brain(void)
{
    std::cout<<"Destructor of Brain class is called"<<std::endl;
}

Brain &Brain::operator=(const Brain &value)
{
    if (this != &value)
    {
        std::cout<<"Assignment operator of Brain class is called"<<std::endl;
        *this->ideas = *value.ideas;
    }
    return *this;
}

std::string Brain::getIdeas(int i)const
{
    return this->ideas[i];
}

void Brain::setIdeas(std::string idea, int i)
{
    this->ideas[i] = idea;
}
