/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:50:41 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/14 16:19:22 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <stdlib.h>

std::ostream&	operator<<(std::ostream &o, A const &)
{
	o << "A" << std::endl;
	return o;
}

std::ostream&	operator<<(std::ostream &o, B const &)
{
	o << "B" << std::endl;
	return o;
}

std::ostream&	operator<<(std::ostream &o, C const &)
{
	o << "C" << std::endl;
	return o;
}

Base*	generate(void)
{
	srand(time(NULL));
	int	i = rand() % 3;
	switch (i)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	default:
		return (new C());
	}
}

void	identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
	{
		std::cout << *a;
		return ;
	}
	if ((b = dynamic_cast<B *>(p)))
	{
		std::cout << *b;
		return ;
	}
	if ((c = dynamic_cast<C *>(p)))
	{
		std::cout << *c;
		return ;
	}
}

void	identify(Base& p)
{

	try{
		A &a = dynamic_cast<A &>(p);
		std::cout << a;
		return ;
	}
	catch(std::exception& e)
	{
		// std::cout << "NOT A" << std::endl;
	}
	try{
		B &b = dynamic_cast<B &>(p);
		std::cout << b;
		return ;
	}
	catch(std::exception& e)
	{
		// std::cout << "NOT B" << std::endl;
	}
	try{
		C &c = dynamic_cast<C &>(p);
		std::cout << c;
		return ;
	}
	catch(std::exception& e)
	{
		// std::cout << "NOT C" << std::endl;
	}
}

int	main()
{
	Base* a = generate();
	identify(a);
	identify(*a);
	return (0);
}