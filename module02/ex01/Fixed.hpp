/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:47 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/05 15:31:41 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &FPoint);
	Fixed(const int);
	Fixed(const float);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed&	operator=(Fixed const &rhs);

private:

	int					_fixedPointValue;

	//_bits_number is the number of fractional bits
	static int const	_bits_number;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs);

#endif