/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:32 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 18:06:01 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("DefaultZombie"){
	return ;
}

Zombie::Zombie(std::string name): _name(name){
	this->announce();
	return ;
}

Zombie::~Zombie(void){
	std::cout << "<" << this->_name << ">" << " was brutally killed" << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}