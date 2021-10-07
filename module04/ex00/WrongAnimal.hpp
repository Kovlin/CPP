/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:36:54 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:43:41 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal{

public:
	
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &rhs);
	virtual ~WrongAnimal();

	WrongAnimal&		operator=(WrongAnimal const &rhs);

	std::string	getType() const;
	void		setType(std::string const &type);
	void		makeSound() const;

protected:

	std::string	type;
};

#endif