/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:50:41 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/14 19:36:56 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits.h>
#include <math.h>
#include "convScal.hpp"

void	printCastChar(char c)
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
}

void	printCastInt(int n)
{
	std::cout << "char: ";
	if (n < 0 || n > 255)
		std::cout << "impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(n) << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << static_cast<float>(n) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(n) << ".0" <<std::endl;
}

void	printCastFloat(float f)
{
	std::cout << "char: ";
	if (f < 0 || f > 255 || isnan(f))
		std::cout << "impossible" << std::endl;
	else if (f < 32 || f > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(f) << std::endl;
	if (f > INT32_MAX || f < INT32_MIN || isnan(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" <<std::endl;
	std::cout << "double:" << static_cast<double>(f) << std::endl;
}

void	printCastDouble(double d)
{
	std::cout << "char: ";
	if (d < 0 || d > 255 || isnan(d))
		std::cout << "impossible" << std::endl;
	else if (d < 32 || d > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
	if (d > INT32_MAX || d < INT32_MIN || isnan(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
		std::cout << "float: impossible";
	else
		std::cout << "float: " <<  static_cast<double>(d) << "f" <<std::endl;
	std::cout << "double:" << d << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: wrong number of argument" << std::endl;
		return (1);
	}
	if (!av[1][0])
	{
		std::cout << "Error: empty argument" << std::endl;
		return (1);
	}

	//======TEST======//

	ConvScal a(av[1]);

	if (a.isChar())
		printCastChar(a.toChar());
	else if (a.isInt())
		printCastInt(a.toInt());
	else if (a.isFloat())
		printCastFloat(a.toFloat());
	else if (a.isDouble())
		printCastDouble(a.toDouble());
	else
	{
		std::cout << "Impossible to identify the type of the argument" << std::endl;
		return (1);
	}
	return (0);
}