/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:37:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 18:19:31 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a("TRAP_ATrap42");
	a.attack("Obisvously vicious CL4PTR4P");
	a.takeDamage(3);
	a.beRepaired(3);

	std::cout << std::endl;

	ClapTrap b(a);
	a.attack("Obisvously malicious CL4PTR4P");
	a.takeDamage(3);
	a.beRepaired(3);

	ScavTrap c("__SC444V__19__");
	std::cout << std::endl;
	std::cout << a.getName() << "STATS : " << a.getDamage() << " | " << a.getHit() << " | " << a.getEnergy() << std::endl;
	std::cout << c.getName() << "STATS : " << c.getDamage() << " | " << c.getHit() << " | " << c.getEnergy() << std::endl;
	
	std::cout << std::endl;
	ScavTrap d(c);
	std::cout << d.getName() << "STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;
	d.guardGate();

	std::cout << std::endl;
	d.attack("Some random TR4PS");
	d.takeDamage(4);
	std::cout << d.getName() << "STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;
	d.beRepaired(3);
	std::cout << d.getName() << "STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;

	return (0);
}