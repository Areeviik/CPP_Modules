#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &oth);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator =(const ShrubberyCreationForm &val);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif