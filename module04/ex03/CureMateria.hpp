/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureMateria.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:41 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 16:06:11 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUREMATERIA_H
#define CUREMATERIA_H

#include "AMateria.hpp"

class CureMateria : public AMateria{

public:
	
	CureMateria();
	CureMateria(CureMateria const &rhs);
	virtual ~CureMateria();
	
	CureMateria&	operator=(CureMateria const &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	
};

#endif