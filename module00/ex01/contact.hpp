/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:26:02 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/27 20:38:40 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact{

public:

	Contact(void);
	~Contact(void);

	void		fillContact(void);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	void		showContact(void) const;

private:
	
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif