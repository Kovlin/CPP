/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:56:03 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 17:25:30 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("Default"){
	return ;
}
Character::Character(std::string name): name(name){
	return ;
}
Character::Character(Character const &rhs){
	this->name = rhs.getName();
}
Character::~Character(){
	return ;
}

Character&	Character::operator=(Character const &rhs){
	this->name = rhs.getName();
}

std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria* m){
	
}

void Character::unequip(int idx){
	
}
void Character::use(int idx, ICharacter& target){
	
}