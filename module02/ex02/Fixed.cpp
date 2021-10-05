/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:15:39 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/05 17:41:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits_number = 8;

Fixed::Fixed(void): _fixedPointValue(0){
	return ;
}

Fixed::Fixed(Fixed const &FPoint): _fixedPointValue(FPoint._fixedPointValue){
	return ;
}

Fixed::Fixed(int const number){
	this->_fixedPointValue = number << Fixed::_bits_number;
	return ;
}

Fixed::Fixed(float const number){

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
	return ;
}

int		Fixed::getRawBits(void) const{
	return (this->_fixedPointValue);
}
void	Fixed::setRawBits(int const raw){
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
	this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs){
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const &rhs) const{
	return (this->getRawBits() > rhs.getRawBits());
}
bool	Fixed::operator<(Fixed const &rhs) const{
	return (this->getRawBits() < rhs.getRawBits());
}
bool	Fixed::operator>=(Fixed const &rhs) const{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool	Fixed::operator<=(Fixed const &rhs) const{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool	Fixed::operator==(Fixed const &rhs) const{
	return (this->getRawBits() == rhs.getRawBits());
}
bool	Fixed::operator!=(Fixed const &rhs) const{
	return (this->getRawBits() != rhs.getRawBits());
}
Fixed	Fixed::operator+(Fixed const &rhs){
	Fixed val(*this);
	val.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (val);
}
Fixed	Fixed::operator-(Fixed const &rhs){
	Fixed val(*this);
	val.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (val);
}
Fixed	Fixed::operator*(Fixed const &rhs){

	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)rhs.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << Fixed::_bits_number));
	return (val);
}
Fixed	Fixed::operator/(Fixed const &rhs){

	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)rhs.getRawBits());
	val.setRawBits((tmp1 * (1 << Fixed::_bits_number)) / tmp2);
	return (val);
	
}
Fixed&	Fixed::operator++(){
	this->_fixedPointValue++;
	return (*this);
}
Fixed	Fixed::operator++(int){

	//Dans ce cas on incremente aussi la valeur de fixed_point
	//Mais on renvoie la valeur précédente car c'est le post increment
	
	Fixed old_fixed(*this);
	this->_fixedPointValue++;
	return (old_fixed);
}
Fixed&	Fixed::operator--(){
	this->_fixedPointValue--;
	return (*this);
}
Fixed	Fixed::operator--(int){
	Fixed old_fixed(*this);
	this->_fixedPointValue--;
	return (old_fixed);
}

Fixed const&	Fixed::min(Fixed const& lhs, Fixed const& rhs){
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}
Fixed const&	Fixed::max(Fixed const& lhs, Fixed const& rhs){
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs){
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}
Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs){
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}