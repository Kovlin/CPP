/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convScal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:27:22 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/13 16:43:18 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVSCAL_H
#define CONVSCAL_H

#include <iostream>

class ConvScal{

public:

	ConvScal(std::string value);
	ConvScal(ConvScal const &);
	virtual ~ConvScal();
	
	ConvScal&	operator=(ConvScal const &);

	bool	isInt();
	bool	isFloat();
	bool	isDouble();
	bool	isChar();

	char	toChar();
	int		toInt();
	float	toFloat();
	double	toDouble();

private:

	ConvScal();
	std::string	_value;

};

#endif