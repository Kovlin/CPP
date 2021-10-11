/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:25:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 15:36:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{

	std::cout << std::endl << "-----Working Bureaucrat-----" << std::endl << std::endl;
	try
	{
		Bureaucrat a("Jean", 10);
		Bureaucrat b("Philippe", 150);
		Bureaucrat c("John", 1);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		c = b;
		std::cout << "bureaucrat " << c.getName() << " equals to bureaucrat " << b.getName() << " now" << std::endl;
		std::cout << c << std::endl;
		c.improveGrade();
		c.improveGrade();
		c.improveGrade();
		std::cout << c << std::endl;
		c.decreaseGrade();
		std::cout << c << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Creation Too High-----" << std::endl << std::endl;
	try{
		Bureaucrat e("Georges", 0);
		std::cout << e << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Creation Too Low-----" << std::endl << std::endl;
	try{
		Bureaucrat d("Max", 151);
		std::cout << d << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Decrease Too low-----" << std::endl << std::endl;
	try{
		Bureaucrat b("Philippe", 150);
		std::cout << b << std::endl;
		b.decreaseGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Improve Too high-----" << std::endl << std::endl;
	try{
		Bureaucrat c("John", 1);
		std::cout << c << std::endl;
		c.improveGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form creation to sign too high-----" << std::endl << std::endl;
	try
	{
		Form test("testForm", 0, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form creation to sign too low-----" << std::endl << std::endl;
	try
	{
		Form test("testForm", 151, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form creation to exec too high-----" << std::endl << std::endl;
	try
	{
		Form test("testForm", 10, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form creation to exec too low-----" << std::endl << std::endl;
	try
	{
		Form test("testForm", 10, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form test-----" << std::endl << std::endl;
	try
	{
		Form test("testForm", 10, 23);
		std::cout << test << std::endl;

		Bureaucrat a("Johnny", 10);
		Bureaucrat b("Jill", 84);
		
		test.beSigned(a);
		std::cout << test << std::endl;	
		test.beSigned(b);
		std::cout << std::endl;
		std::cout << test << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "-----Form basic test-----" << std::endl << std::endl;
	try{
		Form test("testForm", 10, 23);
		std::cout << test << std::endl;

		Bureaucrat a("Johnny", 10);
		Bureaucrat b("Jill", 84);
		
		b.signForm(test);
		std::cout << std::endl;
		a.signForm(test);
		std::cout << std::endl;
		std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}