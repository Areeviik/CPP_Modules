#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
	try
	{
		rrf = someRandomIntern.makeForm("Presidential Pardon", "JOhnny");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		rrf = someRandomIntern.makeForm("Hola, como estas?", "spanish");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}