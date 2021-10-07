/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:25:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 20:39:10 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	virtual ~FragTrap();

	FragTrap&  operator=(FragTrap const &rhs);

	void	highFiveGuys();
};

#endif