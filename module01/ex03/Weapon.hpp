/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 19:07:30 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:46:24 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
#define _WEAPON_H

#include <string>

class	Weapon{

public:
	
	Weapon();
	Weapon(std::string type);
	~Weapon();

	std::string const& getType(void) const;
	void		setType(std::string type);

private:

	std::string _type;
};

#endif