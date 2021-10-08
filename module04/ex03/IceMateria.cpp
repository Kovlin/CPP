/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:51 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 16:45:21 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceMateria.hpp"

IceMateria::IceMateria(): AMateria("ice"){
	return ;
}

IceMateria::IceMateria(IceMateria const &rhs): AMateria(rhs.getType()){
	return ;
}

IceMateria::~IceMateria(){
	return ;
}

IceMateria&	IceMateria::operator=(IceMateria const &rhs){
	return (*this);
}

AMateria* IceMateria::clone() const{
	AMateria*	ret = new IceMateria(*this);
	return (ret);
}
void IceMateria::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}