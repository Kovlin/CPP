/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:36:56 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 17:53:23 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << this->_name << "DEFAULLLLLLTTTTT!!!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10),_energyPoints(10), _attackDamage(0){
	std::cout << this->_name << " INIIIITIALIZEDDDD!!!!!!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap):_name(claptrap._name), _hitPoints(claptrap._hitPoints),_energyPoints(claptrap._energyPoints), _attackDamage(claptrap._attackDamage){
	std::cout << this->_name << " INIIIITIALIZEDDDD TO BE A CLONE OF " << claptrap._name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << " BEING DESTRROOYYyyyyedddd...." << std::endl;
}

std::string	ClapTrap::getName() const{
	return (this->_name);
}
int			ClapTrap::getDamage() const{
	return (this->_attackDamage);
}

int			ClapTrap::getEnergy() const{
	return (this->_energyPoints);
}

int			ClapTrap::getHit() const{
	return (this->_hitPoints);
}

void		ClapTrap::setName(std::string name){
	this->_name = name;
}
void		ClapTrap::setDamage(int amount){
	this->_attackDamage = amount;
}

void		ClapTrap::setEnergy(int amount){
	this->_energyPoints = amount;
}

void		ClapTrap::setHit(int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::attack(std::string const &target) const{
	std::cout << this->getName() << " assault on " << target << " to deal " << this->getDamage() << " damages!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	this->setEnergy(this->getEnergy() - amount);
	std::cout << this->getName() << " is under attack and take " << amount << " points of damage, what a shame!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	this->setEnergy(this->getEnergy() + amount);
	std::cout << this->getName() << " is surprisingly repairing himself by " << amount << " points, Wow, Such Amazing!" << std::endl;
}

ClapTrap&  ClapTrap::operator=(ClapTrap const &rhs){
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHit();
	this->_energyPoints = rhs.getEnergy();
	this->_attackDamage = rhs.getDamage();
	return (*this);
}