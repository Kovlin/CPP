/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:25:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 17:41:44 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Form basic test-----" << std::endl << std::endl;
	try{
		Form* a = new ShrubberyCreationForm("Home");
		std::cout << *a << std::endl;

		Form* b = new RobotomRequestForm("Home");
		std::cout << *b << std::endl;

		Form* c = new PresidentialPardonForm("Home");
		std::cout << *c << std::endl;

		Bureaucrat e("John", 150);

		e.executeForm(*a);
		e.signForm(*a);
		e.executeForm(*a);

		delete(a);
		delete(b);
		delete(c);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form basic test 2-----" << std::endl << std::endl;
	try{
		Form* a = new ShrubberyCreationForm("Home");
		std::cout << *a << std::endl;

		Form* b = new RobotomRequestForm("Home");
		std::cout << *b << std::endl;

		Form* c = new PresidentialPardonForm("Home");
		std::cout << *c << std::endl;

		Bureaucrat e("John", 140);

		e.executeForm(*a);
		e.signForm(*a);
		e.executeForm(*a);

		delete(a);
		delete(b);
		delete(c);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form basic test 3-----" << std::endl << std::endl;
	try{
		Form* a = new ShrubberyCreationForm("Home");
		std::cout << *a << std::endl;

		Bureaucrat b("John", 120);

		b.executeForm(*a);
		b.signForm(*a);
		b.executeForm(*a);

		delete(a);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form basic test 3-----" << std::endl << std::endl;
	try{
		Form* a = new RobotomRequestForm("LazyBureaucrat");
		std::cout << *a << std::endl;

		Bureaucrat b("John", 45);

		b.executeForm(*a);
		b.signForm(*a);
		b.executeForm(*a);

		delete(a);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form basic test 4-----" << std::endl << std::endl;
	try{
		Form* a = new PresidentialPardonForm("LazyBureaucrat");
		std::cout << *a << std::endl;

		Bureaucrat b("John", 5);

		b.executeForm(*a);
		b.signForm(*a);
		b.executeForm(*a);

		delete(a);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}