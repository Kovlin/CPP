/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:10:22 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/16 14:49:21 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

class ExceptionEasyFind : public std::exception{
public:
	virtual const char* what() const throw (){
		return ("Cannot find the occurence in the container.");
	}
};

class ExceptionEmptyContainer : public std::exception{
public:
	virtual const char* what() const throw (){
		return ("EmptyContainer");
	}
};

template<typename T>
typename T::iterator	easyFind(T &container, int toFind)
{
	if (container.empty())
		throw(ExceptionEmptyContainer());
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), toFind);
	if (it != container.end())
		return (it);
	throw (ExceptionEasyFind());
}

#endif