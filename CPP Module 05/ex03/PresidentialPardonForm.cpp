#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Presidential Pardon", 25, 5), _target("No target"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    :Form("Presidential Pardon", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &oth)
    :Form("Presidential Pardon", 25, 5), _target(oth._target + "_copy")
{
    *this = oth;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm:: operator=(const PresidentialPardonForm &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"<<std::endl;
}

