#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &oth);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator =(const RobotomyRequestForm &val);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif