/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:37:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/06 20:48:57 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap c("__DI44MOND__84__");
	std::cout << std::endl;
	std::cout << c.getName() << " STATS : " << c.getDamage() << " D| " << c.getHit() << " H|E " << c.getEnergy() << std::endl;
	
	std::cout << std::endl;
	DiamondTrap d(c);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " D| " << d.getHit() << " H|E " << d.getEnergy() << std::endl;
	
	std::cout << std::endl;
	d.highFiveGuys();
	d.guardGate();
	std::cout << std::endl;
	
	d.attack("Some random TR4PS");
	d.takeDamage(4);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " D| " << d.getHit() << " H|E " << d.getEnergy() << std::endl;
	d.beRepaired(3);
	std::cout << d.getName() << " STATS : " << d.getDamage() << " D| " << d.getHit() << " H|E " << d.getEnergy() << std::endl;

	std::cout << std::endl;
	d.whoAmI();
	std::cout << std::endl;

	return (0);
}