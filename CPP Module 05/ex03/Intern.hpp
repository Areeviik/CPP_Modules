#ifndef Intern_HPP
#define Intern_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &oth);
	~Intern(void);
	Intern	&operator =(const Intern &val);
	Form	*makeForm(std::string name, std::string target);
};

#endif