/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:54:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 18:07:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	return ;
}

AMateria::~AMateria(){
	return ;
}

AMateria::AMateria(std::string const & type): type(type){
	return ;
}

AMateria::AMateria(AMateria const &rhs){
	this->type = rhs.getType();
}

std::string const & AMateria::getType() const{
	return (this->type);
}

void	AMateria::use(ICharacter& target){
	(void)target;
	return ;
}