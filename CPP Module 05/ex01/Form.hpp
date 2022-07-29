#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;
class Form
{
	private:
		std::string name;
		bool is_signed;
		const int sign_grade;
		const int exec_grade; 
	public:
		Form();
		~Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &oth);
		Form &operator=(const Form &val);
		void beSigned(Bureaucrat bur);
		std::string getName() const;
		bool getSigned()const;
		int getSignGrade() const;
		int getExecGrade() const;
		class GradeTooHighException:public std::exception
		{
			public:
				virtual const char* what()const throw()
				{
					return "Form grade is out of bounds";
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Form grade is out of bounds";
				}
		};

};

std::ostream &operator<<(std::ostream &o, Form &form);

#endif