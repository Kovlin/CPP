/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:53:00 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/07 17:31:09 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{

public:
	
	Cat();
	Cat(Cat const &rhs);
	virtual	~Cat();

	Cat&		operator=(Cat const &rhs);

	virtual void	makeSound() const;
};

#endif