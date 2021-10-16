/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:21:18 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/16 19:23:19 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){
	return ;
}

Span::Span(unsigned int n): _storage(new std::vector<int>()), _size(n){
	return ;
}

Span::Span(Span const & rhs){
	this->_size = rhs._size;
	this->_storage = new std::vector<int>(*rhs._storage);
}

Span::~Span(){
	delete this->_storage;
}

Span&	Span::operator=(Span const & rhs){
	this->_size = rhs._size;
	delete this->_storage;
	this->_storage = new std::vector<int>(*rhs._storage);
	return (*this);
}

void	Span::addNumber(int n){
	if (this->_size == this->_storage->size())
		throw (AddNumberException());
	this->_storage->push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (static_cast<int>(end - begin) > static_cast<int>(this->_size - this->_storage->size()))
		throw (AddNumberException());
	for (; begin != end; ++begin)
	{
		this->_storage->push_back(*begin);
	}
}

int		Span::shortestSpan() const{
	if (this->_storage->size() <= 1)
		throw(NoSpanException());
	std::vector<int>::iterator itMin = std::min_element(this->_storage->begin(), this->_storage->end());
	int min = *std::min_element(this->_storage->begin(), this->_storage->end());
	int minSnd = *std::max_element(this->_storage->begin(), this->_storage->end());
	for (std::vector<int>::iterator begin = this->_storage->begin(); begin != this->_storage->end(); ++begin)
	{
		if (begin == itMin)
			continue ;
		if (*begin <= minSnd)
			minSnd = *begin;
	}
	return (minSnd - min);
}

int		Span::longestSpan() const{
	if (this->_storage->size() <= 1)
		throw(NoSpanException());
	int max = *std::max_element(this->_storage->begin(), this->_storage->end());
	int min = *std::min_element(this->_storage->begin(), this->_storage->end());
	return (max - min);
}