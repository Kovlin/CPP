/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:47 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/05 17:43:04 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <limits>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &FPoint);
	Fixed(const int);
	Fixed(const float);
	~Fixed(void);

	Fixed&	operator=(Fixed const &rhs);
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);


	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed const&	min(Fixed const& lhs, Fixed const& rhs);
	static Fixed const&	max(Fixed const& lhs, Fixed const& rhs);
	static Fixed&	min(Fixed& lhs, Fixed& rhs);
	static Fixed&	max(Fixed& lhs, Fixed& rhs);

private:

	int					_fixedPointValue;

	//_bits_number is the number of fractional bits
	static int const	_bits_number;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs);

#endif