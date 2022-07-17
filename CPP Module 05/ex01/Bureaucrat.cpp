#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("no name"), grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade < 1)
		Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &oth)
{
	*this = oth;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &val)
{
	if (this != &val)
	{
		this->grade = val.grade;
		this->name = val.name;
	}
	return *this;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

std::string Bureaucrat::getName() const
{
	return this->name;
}

void Bureaucrat::incGrade()
{
	this->grade += 1;
	if (grade < 1)
		Bureaucrat::GradeTooHighException();
	this->grade -= 1;	
}

void Bureaucrat::decGrade()
{
	this->grade -= 1;
	if (grade > 150)
		Bureaucrat::GradeTooLowException();
	this->grade += 1;
}


std::ostream &operator<<(std::ostream &o, const Bureaucrat &bur)
{
	o << bur.getName() <<", bureaucrat grade " << bur.getGrade() << "."<<std::endl;
	return o;
}

void Bureaucrat::signForm(Form form)
{
	try
	{
		form.beSigned(*this);
		std::cout <<this->name<<" signed "<<form.getName()<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form.getExecGrade() < 1)
	{
		Bureaucrat::GradeTooHighException();
		std::cout<<this->name<<" couldn't sign "<<form.getName()<<" because grade is too high"<<std::endl;
	}	
	else if (form.getExecGrade() > 150)
	{
		Bureaucrat::GradeTooLowException();
		std::cout<<this->name<<" couldn't sign "<<form.getName()<<" because grade is too low"<<std::endl;
	}
}