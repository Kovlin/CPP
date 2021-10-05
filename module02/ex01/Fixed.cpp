/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:39 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/05 17:43:16 by rlinkov          ###   ########.fr       */
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

Fixed::Fixed(int const number){
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = number << Fixed::_bits_number;
	return ;
}

Fixed::Fixed(float const number){
	std::cout << "Float constructor called" << std::endl;

	/*
	** To convert floating point to fixed point representation we have to follow this algorithm :
	** 1. Calculate x = floating_input * 2^(fractional_bits)
	** 2. Round x to the nearest whole number (e.g. round(x))
	** 3. Store the rounded x in an integer container
	*/	
	
	this->_fixedPointValue = (int)roundf( number * ( 1 << Fixed::_bits_number));
	return ;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const{
	return (this->_fixedPointValue);
}
void	Fixed::setRawBits(int const raw){
	std::cout << "SetRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const{

	/*
	** To convert fixed point to floating point representation we have to :
	** divide the number by 2^fractionals_bits
	*/

	return ((float)this->_fixedPointValue / (float)(1 << Fixed::_bits_number));
}

int		Fixed::toInt(void) const{
	return (this->_fixedPointValue >> Fixed::_bits_number);
}

Fixed&	Fixed::operator=(Fixed const &rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs){
	o << rhs.toFloat();
	return (o);
}