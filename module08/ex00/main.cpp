/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:10:15 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/16 15:44:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <vector>
#include <list>
#include <map>


int main()
{
	std::cout << "========== TEST VECTOR ==========" << std::endl << std::endl;
	try
	{
		std::vector<int> v;
		v.push_back(42);
		std::cout << "Find: " << *easyFind(v, 100) << " at pos: " << easyFind(v, 100) - v.begin() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int> v(10,100);
		std::cout << "Find: " << *easyFind(v, 100) << " at pos: " << easyFind(v, 100) - v.begin() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "========== TEST LIST ==========" << std::endl << std::endl;
	try
	{
		std::list<int> l;
		l.push_back(42);
		std::cout << "Find: " << *easyFind(l, 100) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::list<int> l;
		l.push_back(12);
		std::cout << "Find: " << *easyFind(l, 12) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "========== TEST EMPTY LIST ==========" << std::endl << std::endl;
	try
	{
		std::list<int> l;
		std::cout << *easyFind(l, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}