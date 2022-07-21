#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void): Form("Robotomy Request", 75, 45), _target("No target"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    :Form("Robotomy Request", 75, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &oth)
    :Form("Robotomy Request", 75, 45), _target(oth._target + "_copy")
{
    *this = oth;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm & RobotomyRequestForm:: operator=(const RobotomyRequestForm &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(std::time(0));
	int rand = 1 + std::rand()/((RAND_MAX + 1u)/2);
    if (rand == 1)
        std::cout <<this ->_target << " has been robotimized successfully"<<std::endl;
    else
        std::cout<<"Robotimization failed\n";
}