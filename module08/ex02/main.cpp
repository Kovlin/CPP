/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:10:15 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/16 19:22:31 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <fstream>

void	display(int &x)
{
	std::cout << x << " ";
}

void	displayFile(std::vector<int> v)
{
	std::ofstream ofs("numbers.out", std::ios_base::app);
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	{
		ofs << "'" << *i << "'";
	}
	ofs.close();
}

int main()
{
	srand(time(NULL));

	std::cout << "=========== TEST FROM THE SUBJECT ==========" << std::endl;
	
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "=========== CUSTOM TEST ==========" << std::endl << std::endl;
	std::cout << "=========== ADD EXCEPTION BY N ==========" << std::endl << std::endl;
	try{
		sp.addNumber(11);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=========== ADD EXCEPTION BY ITER ==========" << std::endl << std::endl;
	try{
		int n = 10;

		Span sp = Span(n);
		std::vector<int> v;

		for (int i = 0; i < n; i++)
			v.push_back(rand() % 100);

		sp.addNumber(v.begin(), v.end());
		sp.addNumber(v.begin(), v.end());
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=========== ADD EXCEPTION BY ITER THEN N ==========" << std::endl << std::endl;
	try{
		int n = 10;

		Span sp = Span(n);
		std::vector<int> v;

		for (int i = 0; i < n; i++)
			v.push_back(rand() % 100);

		sp.addNumber(v.begin(), v.end());
		sp.addNumber(11);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=========== 10 NUMBERS TEST ==========" << std::endl;
	{
		int n = 10;

		Span sp = Span(n);
		std::vector<int> v;

		for (int i = 0; i < n; i++)
			v.push_back(rand() % 100);

		sp.addNumber(v.begin(), v.end());

		std::cout << "Numbers: ";
		for_each(v.begin(), v.end(), display);
		std::cout << std::endl;

		std::cout << "Shortest span: "  << sp.shortestSpan() << std::endl;
		std::cout << "Longest  span: "  << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=========== 25 000 NUMBERS TEST ==========" << std::endl;
	{
		int n = 25000;

		Span sp = Span(n);
		std::vector<int> v;

		for (int i = 0; i < n; i++)
			v.push_back(rand() % 100000);

		sp.addNumber(v.begin(), v.end());
		displayFile(v);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest  span: " << sp.longestSpan() << std::endl;
	}
	return 0;
}
