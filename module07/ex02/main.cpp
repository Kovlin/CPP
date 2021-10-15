/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:57:45 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/15 21:18:15 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	try {
		std::cout << "========MY TEST FOR ARRAY========" << std::endl;
		std::cout << "========MY TEST FOR ARRAY<int>========" << std::endl;
		unsigned int const size = 3;
		Array<int> a(size);
		for (size_t i = 0; i < size; i++)
		{
			a[i] = i;
			std::cout << "a[" << i << "] " << a[i] << std::endl;
		}
		std::cout << std::endl;
		Array<int> b(a);
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "b[" << i << "] " << b[i] << std::endl;
		}
		std::cout << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			a[i]++;
			std::cout << "a[" << i << "] " << a[i] << std::endl;
		}
		std::cout << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "b[" << i << "] " << b[i] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "========MY TEST FOR ARRAY<std::string>========" << std::endl;
		unsigned int const size = 3;
		Array<std::string> a(size);
		Array<std::string> temp(3);
		temp[0] = "Hello";
		temp[1] = "it";
		temp[2] = "works!";
		Array<std::string> temp2(3);
		temp2[0] = "I think";
		temp2[1] = "it definitely";
		temp2[2] = "works like expected!";
		for (size_t i = 0; i < size; i++)
		{
			a[i] = temp[i];
			std::cout << "a[" << i << "] " << a[i] << std::endl;
		}
		std::cout << std::endl;
		Array<std::string> b(a);
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "b[" << i << "] " << b[i] << std::endl;
		}
		std::cout << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			a[i] = temp2[i];
			std::cout << "a[" << i << "] " << a[i] << std::endl;
		}
		std::cout << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "b[" << i << "] " << b[i] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}
