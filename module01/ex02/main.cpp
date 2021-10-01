/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:22:36 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 19:03:57 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

    std::cout << "Adress of str in memory:           " << &str << std::endl;
    std::cout << "Adress of str in memory by strPtr: " << strPtr << std::endl;
    std::cout << "Adress of str in memory by strRef: " << &strRef << std::endl;
    std::cout << std::endl;
    std::cout << "Str by ptr: " << *strPtr << std::endl;
    std::cout << "Str by ref: " << strRef << std::endl;
	return (0);	
}
