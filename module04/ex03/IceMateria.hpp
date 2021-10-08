/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceMateria.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:43 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 16:06:31 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICEMATERIA_H
#define ICEMATERIA_H

#include "AMateria.hpp"

class IceMateria : public AMateria{

public:
	
	IceMateria();
	IceMateria(IceMateria const &rhs);
	virtual ~IceMateria();
	
	IceMateria&	operator=(IceMateria const &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif