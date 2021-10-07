/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:25:12 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 18:31:10 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(){
	std::cout << this->getName() << " ___FR4444G DEFAULLLLLLTTTTT!!!!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
	this->setEnergy(100);
	this->setDamage(30);
	this->setHit(100);
	std::cout << this->getName() << " ___FR4444G INIIIITIALIZEDDDD!!!!!!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs): ClapTrap(rhs.getName()){
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	this->setHit(rhs.getHit());
	std::cout << this->getName() << " ___FR4444G INIIIITIALIZEDDDD TO BE A CLONE OF " << rhs.getName() << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << this->getName() << " ___FR4444G BEING DESTRROOYYyyyyedddd...." << std::endl;
}

void	FragTrap::highFiveGuys(){
	std::cout << this->getName() << " HIGH FIVE FOR ALL MY FRIIIEEENDSS!!!!" << std::endl;
}

FragTrap&  FragTrap::operator=(FragTrap const &rhs){
	this->setName(rhs.getName());
	this->setHit(rhs.getHit());
	this->setEnergy(rhs.getEnergy());
	this->setDamage(rhs.getDamage());
	return (*this);
}