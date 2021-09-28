/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:06:12 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/27 19:28:43 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int argc, char **argv)
{
	std::string str;
	int			i;
	int			j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			j = 0;
			while (j < (int)str.size())
			{
				str[j] = std::toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}