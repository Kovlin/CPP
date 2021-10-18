/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:46:36 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/18 14:42:11 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{

public:

	MutantStack<T>();
	MutantStack<T>(MutantStack<T> const &);
	virtual ~MutantStack<T>();

	MutantStack<T>&	operator=(MutantStack<T> const &);

	/* 
	**	typedef is used to define a new type
	**	typename is used to tell the compiler that we're only defining a type and not a static member of the class
	**	typename is mandatory here because we're using a templated class
	*/

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator				begin();
	const_iterator 			cbegin() const;
	reverse_iterator		rbegin();
	const_reverse_iterator 	crbegin() const;
	iterator				end();
	const_iterator 			cend() const;
	reverse_iterator		rend();
	const_reverse_iterator 	crend() const;
	
};

#include "mutantstack.cpp"

#endif