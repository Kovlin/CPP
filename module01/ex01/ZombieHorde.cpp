/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:29 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 18:08:42 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie*	zombieHorde(int N, std::string name){
	Zombie* zombie_list = new Zombie[N];

	while (N > 0)
	{
		zombie_list[N - 1].setName(name);
		zombie_list[N - 1].announce();
		N--;
	}
	return (zombie_list);
}