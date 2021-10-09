/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:56:03 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 17:23:08 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("Default"){
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}
Character::Character(std::string name): name(name){
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}
Character::Character(Character const &rhs){
	this->name = rhs.getName();
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs.inventory[i] != NULL)
			this->inventory[i] = rhs.inventory[i]->clone();
	}
	
}
Character::~Character(){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			delete(this->inventory[i]);
		}
	}
}

Character&	Character::operator=(Character const &rhs){
	this->name = rhs.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs.inventory[i] != NULL)
		{
			delete(this->inventory[i]);
			this->inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria* m){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx){
	if (this->inventory[idx] == NULL || idx > 3)
		return ;
	this->inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter& target){
	if (this->inventory[idx] == NULL || idx > 3)
		return ;
	this->inventory[idx]->use(target);
	this->inventory[idx]->AMateria::use(target);
}