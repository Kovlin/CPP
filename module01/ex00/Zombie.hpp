/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:34 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 16:59:53 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void) const;

private:

	std::string	_name;
};

#endif