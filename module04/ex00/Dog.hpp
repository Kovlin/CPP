/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:53:07 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:31:20 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{

public:
	
	Dog();
	Dog(Dog const &rhs);
	virtual	~Dog();

	Dog&		operator=(Dog const &rhs);

	virtual void	makeSound() const;
};

#endif