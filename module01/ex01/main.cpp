/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:36 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 17:58:12 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	std::string names[8];

	names[0] = "Walker";
	names[1] = "Geek";
	names[2] = "Lurker";
	names[3] = "Emptie";
	names[4] = "Biter";
	names[5] = "Creeper";
	names[6] = "Roamer";
	names[7] = "The Infected";

	std::cout << std::endl << "----- Allocation of the Horde -----" << std::endl << std::endl;
	Zombie* horde = zombieHorde(8, "Creeper");
	delete [] horde;
	return (0);	
}