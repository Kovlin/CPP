/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:45 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 16:09:05 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

CureMateria::CureMateria(): AMateria("cure"){
	return ;
}

CureMateria::CureMateria(CureMateria const &rhs): AMateria(rhs.getType()){
	return ;
}

CureMateria::~CureMateria(){
	return ;
}

CureMateria&	CureMateria::operator=(CureMateria const &rhs){
	this->type = rhs.getType();
	return (*this);
}

AMateria* CureMateria::clone() const{
	AMateria*	ret = new CureMateria(*this);
	return (ret);
}
void CureMateria::use(ICharacter& target){
	std::cout << "* heals  " << target.getName() << "'s wounds" << std::endl;
	return ;
}