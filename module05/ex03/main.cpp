/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:25:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 18:42:43 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Intern basic test 1 -----" << std::endl << std::endl;
	Intern someRandomIntern;
	Form* rrf;

	try{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Intern basic test 2 -----" << std::endl << std::endl;
	try{
		rrf = someRandomIntern.makeForm("RRF", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete(rrf);

	std::cout << std::endl << "-----Intern basic test 3 -----" << std::endl << std::endl;
	try{
		rrf = someRandomIntern.makeForm("SCF", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete(rrf);

	std::cout << std::endl << "-----Intern basic test 4 -----" << std::endl << std::endl;
	try{
		rrf = someRandomIntern.makeForm("PPF", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete(rrf);

	std::cout << std::endl << "-----Intern basic test 5 -----" << std::endl << std::endl;
	try{
		rrf = someRandomIntern.makeForm("PPF", "Bender");
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try{
		Bureaucrat boss("The boss", 1);
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete(rrf);

	return (0);
}