/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:53:05 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 15:23:35 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain()){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &rhs){
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(rhs.getType());
	this->_brain = new Brain(*rhs.getBrain());
}

Dog::~Dog(){
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog&		Dog::operator=(Dog const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}

Brain*	Dog::getBrain() const{
	return (this->_brain);
}