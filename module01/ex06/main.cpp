/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:54:19 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 22:21:56 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Karen karen;
	karen.complain(argv[argc - 1]);
	return (0);
}