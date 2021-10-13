/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:50:41 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/13 20:08:23 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<int &>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data*	a = new Data();
	std::cout << "& de a : " << a << std::endl;
	double	n = serialize(a);
	Data*	b;
	std::cout << "& de b : " << b << std::endl;
	b = deserialize(n);
	std::cout << "& de b : " << b << std::endl;

	delete(a);
	return (0);
}