/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 02:12:17 by shovsepy          #+#    #+#             */
/*   Updated: 2022/07/22 19:09:52 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main()
{
	Bureaucrat		Odin("Odin", 1);
	Bureaucrat		Thor("Thor", 40);
	Bureaucrat		Loki("Loki", 150);
	Form			*form = NULL;

	srand(time(NULL));
	try
	{
		form = new PresidentialPardonForm("28Z");
		form->execute(Odin);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	try
	{
		form = new PresidentialPardonForm("28A");
		form->beSigned(Odin);
		form->execute(Odin);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		form = new RobotomyRequestForm("28B");
		Odin.signForm(*form);
		std::cout << std::endl;
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		Thor.executeForm(*form);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		form = new ShrubberyCreationForm("28C");
		Odin.signForm(*form);
		Thor.executeForm(*form);
		Loki.executeForm(*form);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
