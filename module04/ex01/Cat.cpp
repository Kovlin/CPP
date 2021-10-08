/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:52:56 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 15:15:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs){
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(rhs.getType());
	this->_brain = new Brain(*rhs.getBrain());
}

Cat::~Cat(){
	delete (this->_brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat&		Cat::operator=(Cat const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Miaou!" << std::endl;
}

Brain*	Cat::getBrain() const{
	return (this->_brain);
}