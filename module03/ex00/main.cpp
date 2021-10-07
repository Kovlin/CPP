/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:37:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 17:38:24 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("TRAP_ATrap42");
	a.attack("Obisvously vicious CL4PTR4P");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << std::endl;

	ClapTrap b(a);
	a.attack("Obisvously vicious CL4PTR4P");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << std::endl;

	
	return (0);
}