/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:54:37 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/08 14:40:58 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain{

public:

	Brain();
	Brain(Brain const &rhs);
	virtual ~Brain();

	Brain&	operator=(Brain const &rhs);

	void				setIdeas(int at, std::string idea);
	const std::string*	getIdeas(void) const;

private:

	std::string _ideas[100];
	
};

#endif