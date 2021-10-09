/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:28:22 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 17:56:45 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (size_t i = 0; i < 4; i++)
	{
		this->source[i] = nullptr;
	}
}

MateriaSource::MateriaSource(MateriaSource const &rhs){
	for (size_t i = 0; i < 4; i++)
	{
		this->source[i] = nullptr;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs.source[i] != nullptr)
			this->source[i] = rhs.source[i]->clone();
	}
}

MateriaSource::~MateriaSource(){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->source[i] != nullptr)
			delete(this->source[i]);
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &rhs){
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs.source[i] != nullptr)
		{
			delete(this->source[i]);
			this->source[i] = rhs.source[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->source[i] == nullptr)
		{
			this->source[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (size_t i = 0; i < 4; i++)
	{
		if (this->source[i]->getType() == type)
			return (this->source[i]->clone());
	}
	return (nullptr);
}
