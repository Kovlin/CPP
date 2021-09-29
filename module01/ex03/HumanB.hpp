/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:07:24 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:43:37 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_B_H
#define _HUMAN_B_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB{

public:
	
	HumanB(std::string name);
	~HumanB();

	void	attack(void);
	void	setWeapon(Weapon& weapon);

private:

	std::string _name;
	Weapon*		_weapon;
	
};

#endif