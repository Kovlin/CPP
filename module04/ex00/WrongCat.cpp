/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:37:37 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:41:49 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs){
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->setType(rhs.getType());
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&		WrongCat::operator=(WrongCat const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << "Miaou!" << std::endl;
}