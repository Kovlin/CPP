/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:31:30 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/28 17:33:17 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iomanip>
#include <iostream>
#include "contact.hpp"

class Phonebook{

public:

	Phonebook(void);
	~Phonebook(void);

	void	add(void);
	void	search(void) const;

private:

	int			nb_contact;
	Contact		list_contact[8];
	
	void	print_contact(void) const;
};

#endif