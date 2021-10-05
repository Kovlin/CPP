/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:47 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/04 17:12:57 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &FPoint);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed&	operator=(Fixed const &rhs);

private:

	int					_fixedPointValue;
	static int const	_bits_number;
};

#endif