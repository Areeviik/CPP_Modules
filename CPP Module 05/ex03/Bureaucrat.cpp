#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("no name"), grade(150){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;	
}

void Bureaucrat::decGrade()
{
	this->grade -= 1;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}


std::ostream &operator<<(std::ostream &o, const Bureaucrat &bur)
{
	o << bur.getName() <<", bureaucrat grade " << bur.getGrade() << "."<<std::endl;
	return o;
}

void Bureaucrat::signForm(Form &Form)
{
	try
	{
		Form.beSigned(*this);
		std::cout <<this->name<<" signed "<<Form.getName()<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (Form.getExecGrade() < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		std::cout<<this->name<<" couldn't sign "<<Form.getName()<<" because grade is too high"<<std::endl;
	}	
	else if (Form.getExecGrade() > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		std::cout<<this->name<<" couldn't sign "<<Form.getName()<<" because grade is too low"<<std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	if (this->grade < form.getExecGrade())
		std::cout<<name<<" executed "<< form.getName() <<std::endl;
	else
		throw GradeTooLowException();
}

