/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:39 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/04 17:16:19 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits_number = 8;

Fixed::Fixed(void): _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &FPoint): _fixedPointValue(FPoint._fixedPointValue){
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const{
	std::cout << "GetRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}
void	Fixed::setRawBits(int const raw){
	std::cout << "SetRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed&	Fixed::operator=(Fixed const &rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}