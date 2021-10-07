/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:27:15 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 13:12:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &rhs);
	virtual ~ScavTrap();

	ScavTrap&  operator=(ScavTrap const &rhs);

	void	guardGate();
	void	attack(std::string const &target) const;

protected:

	ScavTrap();
};

#endif