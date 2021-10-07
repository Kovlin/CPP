/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:37:17 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 12:52:14 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{

public:
	
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &claptrap);
	virtual ~ClapTrap();

	ClapTrap&  operator=(ClapTrap const &rhs);

	std::string	getName() const;
	int			getDamage() const;
	int			getEnergy() const;
	int			getHit() const;
	void		setName(std::string name);
	void		setDamage(int amount);
	void		setEnergy(int amount);
	void		setHit(int amount);
	void		attack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected:
	
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif