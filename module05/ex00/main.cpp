/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:25:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 15:00:39 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

	return (0);
}