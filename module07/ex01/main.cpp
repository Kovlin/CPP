/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:57:45 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/15 19:44:58 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	const int	arraySize = 6;
	int			a[arraySize] = {0, 1, 2, 3, 4, 5};
	float		b[arraySize] = {0.1f, 1.2f, 2.3f, 3.4f, 4.5f, 5.6f};
	std::string	c[arraySize] = {"Hi ", "How ", "are ", "you ", "today ", "?"};


	std::cout << "------INT------" << std::endl;
	std::cout << "------INT PRINT------" << std::endl;
	::iter(a, arraySize, ::print);
	
	std::cout << "------INT INC------" << std::endl;
	::iter(a, arraySize, ::inc);

	for (size_t i = 0; i < arraySize; i++)
	{
		std::cout << a[i] << std::endl;
	}
	std::cout << std::endl;


	std::cout << "------FLOAT------" << std::endl;
	std::cout << "------FLOAT PRINT------" << std::endl;
	::iter(b, arraySize, ::print);
	
	std::cout << "------FLOAT INC------" << std::endl;
	::iter(b, arraySize, ::inc);

	for (size_t i = 0; i < arraySize; i++)
	{
		std::cout << b[i] << std::endl;
	}
	std::cout << std::endl;


	std::cout << "------STRING------" << std::endl;
	std::cout << "------STRING PRINT------" << std::endl;
	::iter(c, arraySize, ::print);
	std::cout << std::endl;

	return (0);
}