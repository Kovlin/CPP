/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:36:20 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:36:27 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Just one simple WrongAnimal"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type){
	std::cout << "WrongAnimal parametric constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->setType(rhs.getType());
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const &rhs){
	this->setType(rhs.getType());
	return (*this);
}

std::string	WrongAnimal::getType() const{
	return (this->type);
}
void		WrongAnimal::setType(std::string const &type){
	this->type = type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "I'm an WrongAnimal and I make some sound, trust me dude!" << std::endl;
}