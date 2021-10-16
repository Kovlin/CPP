/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:21:16 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/16 18:56:16 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

class Span {

public:
	
	Span(unsigned int n);
	Span(Span const &);
	virtual ~Span();

	Span&	operator=(Span const &);

	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan() const;
	int		longestSpan() const;
	

	class AddNumberException : public std::exception{
		virtual const char * what() const throw() {
			return ("Span is already full of number(s)!");
		}
	};

	class NoSpanException : public std::exception{
		virtual const char * what() const throw() {
			return ("Span is empty or contain only one number!");
		}
	};

private:

	Span();
	std::vector<int> 	*_storage;
	unsigned int		_size;
};

#endif