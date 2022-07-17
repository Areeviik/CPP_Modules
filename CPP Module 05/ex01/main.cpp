#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat low_grade_brcrt = Bureaucrat("Johnny", 150);
	Bureaucrat high_grade_brcrt = Bureaucrat ("Smith", 1);
	Bureaucrat normal_brcrt = Bureaucrat ("Nicole", 23);

	Form form1 = Form("form1", 23, 1);
	Form form2 = Form("form2", 42, 1);
	Form form3 = Form("form3", 34, 1);
	try
	{
		low_grade_brcrt.decGrade();
	}
	catch(const std::exception& e)
	{
		std::cout<<"Exception catched"<<std::endl;
		std::cerr << e.what() << '\n';
	}
	try
	{
		high_grade_brcrt.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cout<<"Exception catched"<<std::endl;
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		normal_brcrt.incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Form f4 = Form("F4", 0, 177);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout<<"Nicole's sign form: "<<std::endl;
		normal_brcrt.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout<<"Nicole signed form2";
		form2.beSigned(normal_brcrt);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}