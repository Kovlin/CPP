/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:11:07 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/05 17:42:53 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c(23);
	Fixed d(2);
	Fixed e(2);

	Fixed f(2.3001f);
	Fixed g(2.3001f);

	std::cout << c/d << std::endl;
	std::cout << d/c << std::endl;
	std::cout << c*d << std::endl;

	std::cout << Fixed::min(c, d) << std::endl;

	if (c < d)
		std::cout << "c < d" << std::endl;
	if (d < c)
		std::cout << "c < d" << std::endl;
	
	if (c > d)
		std::cout << "c > d" << std::endl;
	if (d > c)
		std::cout << "c > d" << std::endl;

	if (d == e)
		std::cout << "d == e" << std::endl;
	if (f == g)
		std::cout << "f == g" << std::endl;
	if (d != c)
		std::cout << "c != d" << std::endl;

	std::cout << "f + g : " << f + g << std::endl;
	std::cout << "f - g : " << f - g << std::endl;

	return 0;
}