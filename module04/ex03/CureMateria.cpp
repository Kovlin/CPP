/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:45 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 17:03:10 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureMateria.hpp"

CureMateria::CureMateria(): AMateria("ice"){
	return ;
}

CureMateria::CureMateria(CureMateria const &rhs): AMateria(rhs.getType()){
	return ;
}

CureMateria::~CureMateria(){
	return ;
}

CureMateria&	CureMateria::operator=(CureMateria const &rhs){
	return (*this);
}

AMateria* CureMateria::clone() const{
	AMateria*	ret = new CureMateria(*this);
	return (ret);
}
void CureMateria::use(ICharacter& target){
	return ;
}