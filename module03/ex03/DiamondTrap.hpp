/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:32:54 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 13:46:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONTRAP_H
#define _DIAMONTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap{
	
public:

	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &rhs);
	virtual ~DiamondTrap();

	DiamondTrap&  operator=(DiamondTrap const &rhs);

	std::string	getName() const;
	void	attack(std::string const &target);
	void	whoAmI();
	using	ScavTrap::attack;

private:
	DiamondTrap();
	std::string	_name;
	using	FragTrap::_hitPoints;
	using	ScavTrap::_energyPoints;
	using	FragTrap::_attackDamage;
};

#endif