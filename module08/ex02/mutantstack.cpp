/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:46:26 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/18 14:42:55 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & rhs): std::stack<T>(rhs){
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack<T>(){
	return ;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack<T> const & rhs){
	this->c = rhs.c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const{
	return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(){
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator 	MutantStack<T>::crbegin() const{
	return (this->c.crbegin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator 			MutantStack<T>::cend() const{
	return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend(){
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator 	MutantStack<T>::crend() const{
	return (this->c.rend());
}