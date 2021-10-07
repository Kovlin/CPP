/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:52:56 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:31:15 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &rhs){
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(rhs.getType());
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat&		Cat::operator=(Cat const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Miaou!" << std::endl;
}