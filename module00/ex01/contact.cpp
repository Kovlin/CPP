/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:25:53 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/27 21:21:42 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void): firstName("NONE"), lastName("NONE"), nickname("NONE"), phone_number("NONE"), darkest_secret("NONE"){
	return ;
}

Contact::~Contact(void){
	return ;
}

void	Contact::fillContact(void){
	std::cout << "First name : ";
	std::getline(std::cin, this->firstName);
	std::cout << "Last name : ";
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->darkest_secret);
}

std::string	Contact::getFirstName(void) const{
	std::string ret;
	ret = this->firstName.substr(0, 10);
	if ((int)this->firstName.size() > 10)
		ret.at(9) = '.';
	return (ret);
}

std::string	Contact::getLastName(void) const{
	std::string ret;
	ret = this->lastName.substr(0, 10);
	if ((int)this->lastName.size() > 10)
		ret.at(9) = '.';
	return (ret);
}

std::string	Contact::getNickName(void) const{
	std::string ret;
	ret = this->nickname.substr(0, 10);
	if ((int)this->nickname.size() > 10)
		ret.at(9) = '.';
	return (ret);
}

void	Contact::showContact(void) const{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
	return ;
}