/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:37:57 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:44:06 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_H
#define WrongCat_H

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
	
	WrongCat();
	WrongCat(WrongCat const &rhs);
	virtual	~WrongCat();

	WrongCat&		operator=(WrongCat const &rhs);

	virtual void	makeSound() const;
};

#endif