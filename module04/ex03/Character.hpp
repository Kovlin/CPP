/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:53:55 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 17:26:16 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define	CHARACTER_H

#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter{

public:

	Character();
	Character(std::string name);
	Character(Character const &rhs);
	virtual ~Character();

	Character&	operator=(Character const &rhs);
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

protected:

	std::string name;

};

#endif