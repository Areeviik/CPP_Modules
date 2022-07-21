#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &oth)
{
    *this = oth;
}

Intern::~Intern(){}

Intern &Intern::operator=(const Intern &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

static Form	*Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static Form	*Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*President(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string names[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential pardon"};
    Form *(*forms[])(std::string target) = {&Shrubbery, &Robotomy, &President};
    Form *f = NULL;

    int i = 0;
    while (i < 3)
    {
        if (names[i] == name)
        {   
            f = forms[i](target);
        }
        i++;
    }
    if (f)
        std::cout<<"Intern creates" << target <<std::endl;
    else if (!f)
        std::cout<<"Form name doesn't exist\n";
    return f;
}