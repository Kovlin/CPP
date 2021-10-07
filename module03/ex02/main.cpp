/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:37:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 19:05:03 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	FragTrap c("__FR44G__21__");
	std::cout << std::endl;
	std::cout << a.getName() << " STATS : " << a.getDamage() << " | " << a.getHit() << " | " << a.getEnergy() << std::endl;
	std::cout << c.getName() << " STATS : " << c.getDamage() << " | " << c.getHit() << " | " << c.getEnergy() << std::endl;
	
	std::cout << std::endl;
	FragTrap d(c);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;
	d.highFiveGuys();

	std::cout << std::endl;
	d.attack("Some random TR4PS");
	d.takeDamage(4);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;
	d.beRepaired(3);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " | " << d.getHit() << " | " << d.getEnergy() << std::endl;

	return (0);
}