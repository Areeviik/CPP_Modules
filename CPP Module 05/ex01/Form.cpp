#include "Form.hpp"

Form::Form(): name("no name"), sign_grade(1), exec_grade(1), is_signed(false){}

Form::Form(std::string n, int signGrade, int execGrade): name(n), sign_grade(signGrade), exec_grade(execGrade)
{
	this->is_signed = false;
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(){}

Form::Form(const Form &oth):name(oth.name), sign_grade(oth.sign_grade), exec_grade(oth.exec_grade)
{
    *this = oth;
}

Form &Form::operator=(const Form &val)
{
	if (this != &val)
	{
		this->is_signed = val.is_signed;
	}
	return *this;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSigned()const
{
    return this->is_signed;
}
		
int Form::getSignGrade() const
{
    return this->sign_grade;
}

int Form::getExecGrade() const
{
    return this->exec_grade;
}

void Form::beSigned(Bureaucrat bur)
{
    if (bur.getGrade() < this->sign_grade)
        this->is_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	o << "Form: "<<form.getName()<<std::endl;
    o << "Signed: "<<form.getSigned()<<std::endl;
    o <<"Grade to sign: "<<form.getSignGrade()<<std::endl;
    o<<"Grade to execute: "<<form.getExecGrade()<<std::endl;
	return o;
}