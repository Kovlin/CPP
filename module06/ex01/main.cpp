/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:50:41 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/14 15:40:16 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data*	a = new Data(19, 42);
	std::cout << "& de a : " << a << std::endl;
	std::cout << "a.a: " << a->getA() << " | a.b: " << a->getB() << std::endl;
	
	uintptr_t n = serialize(a);
	
	Data*	b = deserialize(n);
	std::cout << "& de b : " << b << std::endl;
	std::cout << "b.a: " << b->getA() << " | b.b: " << b->getB() << std::endl;

	delete(a);
	// delete(b); //ne fonctionne pas car il pointe sur la même adresse que a
	return (0);
}