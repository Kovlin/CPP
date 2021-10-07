/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:32:48 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 13:55:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << this->getName() << " |||||DI44MOND DEFAULLLLLLTTTTT!!!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name){
	this->ClapTrap::_name = name + "_clap_name";
	this->DiamondTrap::_name = name;
	this->setHit(100);
	this->setEnergy(50);
	this->setDamage(30);
	std::cout << this->getName() << " |||||DI44MOND INIIIITIALIZEDDDD!!!!!!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs): ClapTrap(rhs.getName()), FragTrap(rhs.getName()), ScavTrap(rhs.getName()){
	this->ClapTrap::_name = rhs.ClapTrap::getName();
	this->DiamondTrap::_name = rhs.getName();
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	this->setHit(rhs.getHit());
	std::cout << this->getName() << " |||||DI44MOND INIIIITIALIZEDDDD TO BE A CLONE OF " << rhs.getName() << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << this->getName() << " |||||DI44MOND BEING DESTRROOYYyyyyedddd...." << std::endl;
}

std::string	DiamondTrap::getName() const{
	return (this->DiamondTrap::_name);
}

void	DiamondTrap::attack(std::string const &target){
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "Who am I ?? Am I " << this->DiamondTrap::_name << " or " << this->ClapTrap::_name << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(DiamondTrap const &rhs){
	this->setName(rhs.getName());
	this->setHit(rhs.getHit());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return (*this);
}