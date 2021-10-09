/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:27:09 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/09 17:47:35 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{

public:

	MateriaSource();
	MateriaSource(MateriaSource const &rhs);
	virtual ~MateriaSource();

	MateriaSource&	operator=(MateriaSource const &rhs);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

private:
	
	AMateria*	source[4];
};

#endif