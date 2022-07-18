#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &oth);
        virtual ~Brain();
        Brain &operator=(const Brain &value);
        std::string getIdeas(int i) const;
        void setIdeas(std::string idea, int i);
};

#endif