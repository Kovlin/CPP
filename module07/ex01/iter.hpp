/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:59:11 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/15 19:45:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void	iter(T *ptr, size_t len, void(*func)(T const &x))
{
	for (size_t i = 0; i < len; i++)
	{
		(func)(ptr[i]);
	}
}

template<typename T>
void	print(T const &toPrint)
{
	std::cout << toPrint << std::endl;
}

template<typename T>
void	inc(T const &toInc)
{
	T &to = const_cast<T &>(toInc);
	to++;
}

#endif