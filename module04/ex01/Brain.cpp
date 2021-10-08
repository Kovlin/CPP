/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:54:02 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 13:42:59 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){	
	std::cout << "Brain constructor called" << std::endl;
	return ;
}
Brain::Brain(Brain const &rhs){

	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdeas()[i];
	return ;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain&	Brain::operator=(Brain const &rhs){

	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdeas()[i];
	return (*this);
}

void	Brain::setIdeas(int at, std::string idea){
	this->_ideas[at] = idea;
	return ;
}

const std::string*	Brain::getIdeas(void) const{
	return this->_ideas;
}