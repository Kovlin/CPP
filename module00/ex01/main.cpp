/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:54:18 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/28 16:39:51 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int	main(void)
{
	std::string strStart;
	std::string strInput;
	Phonebook	myPhonebook;
	
	strInput = "";
	strStart = "ENTER 'ADD', 'SEARCH' OR 'EXIT' TO CONTINUE...";
	while (strInput.compare("EXIT") != 0)
	{
		std::cout << strStart << std::endl;
		std::getline(std::cin, strInput);
		if (strInput.compare("ADD") == 0)
			myPhonebook.add();
		else if (strInput.compare("SEARCH") == 0)
			myPhonebook.search();
		else
			std::cout << "Cannot process input, try again" << std::endl;
	}
	return (0);
}