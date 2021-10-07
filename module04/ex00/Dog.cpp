/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:53:05 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:31:24 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs){
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(rhs.getType());
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog&		Dog::operator=(Dog const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}