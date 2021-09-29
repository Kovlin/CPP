/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:36 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 17:59:01 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int	main()
{
	std::string names[8];
	int			i = 0;

	names[0] = "Walker";
	names[1] = "Geek";
	names[2] = "Lurker";
	names[3] = "Emptie";
	names[4] = "Biter";
	names[5] = "Creeper";
	names[6] = "Roamer";
	names[7] = "The Infected";

	std::cout << std::endl << "----- Allocation on the heap -----" << std::endl << std::endl;
	while (i < 8)
	{
		Zombie* z = new Zombie(names[i]);
		delete(z);
		i++;
	}
	std::cout << std::endl << "----- Allocation on the stack -----" << std::endl << std::endl;
	i = 0;
	while (i < 8)
	{
		randomChump(names[i]);
		i++;
	}
	return (0);	
}