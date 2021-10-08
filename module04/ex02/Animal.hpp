/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:45:31 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 15:31:31 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{

public:
	
	Animal();
	Animal(std::string type);
	Animal(Animal const &rhs);
	virtual	~Animal();

	Animal&		operator=(Animal const &rhs);

	virtual	std::string	getType() const;
	virtual	void		setType(std::string const &type);
	virtual void		makeSound() const = 0;

protected:

	std::string	type;
};

#endif