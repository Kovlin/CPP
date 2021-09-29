/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:07:33 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:38:09 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _weapon(weapon){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}