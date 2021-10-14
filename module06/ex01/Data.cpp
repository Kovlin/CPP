/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:36:57 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/14 15:18:53 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){
	return ;
}

Data::Data(int a, int b): _a(a), _b(b){
	return ;
}
Data::Data(Data const & rhs): _a(rhs._a), _b(rhs._b){
	return ;
}
Data::~Data(){
	return ;
}

Data&	Data::operator=(Data const &rhs){
	this->_a = rhs._a;
	this->_b = rhs._b;
	return (*this);
}

int		Data::getA() const{
	return (this->_a);
}
int		Data::getB() const{
	return (this->_b);
}