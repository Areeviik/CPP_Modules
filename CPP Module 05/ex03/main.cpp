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
		rrf = someRandomIntern.makeForm("presidential pardon", "JOhnny");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}