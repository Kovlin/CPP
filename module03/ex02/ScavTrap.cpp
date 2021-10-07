/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:27:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 13:12:46 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(){
	std::cout << this->getName() << " ___SC4444V DEFAULLLLLLTTTTT!!!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->setEnergy(50);
	this->setDamage(20);
	this->setHit(100);
	std::cout << this->getName() << " ___SC4444V INIIIITIALIZEDDDD!!!!!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs): ClapTrap(rhs.getName()){
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	this->setHit(rhs.getHit());
	std::cout << this->getName() << " ___SC4444V INIIIITIALIZEDDDD TO BE A CLONE OF " << rhs.getName() << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << this->getName() << " ___SC4444V BEING DESTRROOYYyyyyedddd...." << std::endl;
}

void	ScavTrap::attack(std::string const &target) const{
	std::cout << this->getName() << " SC444VASAAULT on " << target << " to deal " << this->getDamage() << " damages!" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << this->getName() << " G4TE KEEPER MODE ACTIVATED!" << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const &rhs){
	this->setName(rhs.getName());
	this->setHit(rhs.getHit());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return (*this);
}