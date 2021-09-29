/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:07:28 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:24:41 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_A_H
#define _HUMAN_A_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA{

public:
	
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack(void);

private:

	std::string _name;
	Weapon&		_weapon;
	
};

#endif