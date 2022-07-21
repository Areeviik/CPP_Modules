#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &oth);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator =(const PresidentialPardonForm &val);
        virtual void execute(Bureaucrat const & executor) const; 
};

#endif