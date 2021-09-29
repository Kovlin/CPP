/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:07:35 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:46:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():_type("None"){
	return ;
}

Weapon::Weapon(std::string type):_type(type){
	return ;
}

Weapon::~Weapon(){
	return ;
}

void	Weapon::setType(std::string type){
	this->_type = type;
}

std::string	const& Weapon::getType(void) const{
	return (this->_type);
}