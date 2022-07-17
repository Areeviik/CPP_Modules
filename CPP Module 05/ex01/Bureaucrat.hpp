#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include "Form.hpp"
#include <iostream>

class Bureaucrat
{
	private:
		std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string n, int g);
		Bureaucrat(const Bureaucrat &oth);
		Bureaucrat &operator=(const Bureaucrat &val);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incGrade(void);
		void decGrade(void);
		void signForm(Form form);
		class GradeTooHighException:public std::exception
		{
			public:
				virtual const char* what()const throw()
				{
					return "Grade is too high";
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade is too low";
				}
		};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bur);

#endif