/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:45:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 15:28:09 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Just one simple animal"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type){
	std::cout << "Animal parametric constructor called" << std::endl;
}

Animal::Animal(Animal const &rhs){
	std::cout << "Animal copy constructor called" << std::endl;
	this->setType(rhs.getType());
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal&		Animal::operator=(Animal const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

std::string	Animal::getType() const{
	return (this->type);
}
void		Animal::setType(std::string const &type){
	this->type = type;
}

void	Animal::makeSound() const{
	std::cout << "I'm an animal and I make some sound, trust me dude!" << std::endl;
}