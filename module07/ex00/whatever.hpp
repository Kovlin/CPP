/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:59:11 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/15 17:05:53 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T const &	max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif