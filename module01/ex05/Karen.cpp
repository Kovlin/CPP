/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:54:17 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 21:59:38 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void){

	this->cmd[0].level = "DEBUG";
	this->cmd[0].f = &Karen::debug;
	this->cmd[1].level = "INFO";
	this->cmd[1].f = &Karen::info;
	this->cmd[2].level = "WARNING";
	this->cmd[2].f = &Karen::warning;
	this->cmd[3].level = "ERROR";
	this->cmd[3].f = &Karen::error;
}

Karen::~Karen(void){
	return;
}

void	Karen::complain(std::string level){
	for (int i = 0; i < 4; i++)
	{
		if (this->cmd[i].level == level)
			(this->*cmd[i].f)();
	}
}

void	Karen::debug(void){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void	Karen::info(void){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void	Karen::warning(void){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void	Karen::error(void){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}