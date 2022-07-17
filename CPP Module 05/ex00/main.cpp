#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat low_grade_brcrt = Bureaucrat("Johnny", 150);
	Bureaucrat high_grade_brcrt = Bureaucrat ("Smith", 1);
	Bureaucrat normal_brcrt = Bureaucrat ("Nicole", 23);
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
	
	return 0;
}