/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convScal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:27:02 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/13 19:04:16 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convScal.hpp"


ConvScal::ConvScal(){
	return ;
}

ConvScal::ConvScal(std::string value): _value(value){
	return ;
}

ConvScal::ConvScal(ConvScal const & rhs): _value(rhs._value){
	return ;
}
ConvScal::~ConvScal(){
	return ;
}

ConvScal&	ConvScal::operator=(ConvScal const & rhs){
	this->_value = rhs._value;
	return (*this);
}


bool	ConvScal::isChar(){
	std::string	tmp = this->_value;
	if (tmp.length() == 3 && tmp[0] == '\'' && tmp[2] == '\'')
		return (true);
	return (false);
}

bool	ConvScal::isInt(){
	try{
		std::stoi(this->_value);
		int i = 0;
		while (this->_value.c_str()[i])
		{
			while(this->_value[i] == '+' || this->_value[i] == '-')
				i++;
			if (this->_value.c_str()[i] < '0' || this->_value.c_str()[i] > '9' )
			{
				return (false);
			}
			i++;
		}
		return (true);
	}
	catch (std::exception& e)
	{
		return (false);
	}
}

bool	ConvScal::isFloat(){
	try{
		std::stof(this->_value);
		int i = 0;
		while (this->_value.c_str()[i])
		{
			while(this->_value[i] == '+' || this->_value[i] == '-')
				i++;
			if ((this->_value.c_str()[i] < '0' || this->_value.c_str()[i] > '9') && this->_value.c_str()[i] != '.')
			{
				if (this->_value.find("nan") == std::string::npos && this->_value.find("inf") == std::string::npos)
				{
					if (i != static_cast<int>(this->_value.length() -1))
						return (false);
					else if (this->_value[this->_value.length() - 1] != 'f')
						return (false);
				}
			}
			i++;
		}
		if (this->_value[this->_value.length() - 1] != 'f')
			return (false);
		return (true);
	}
	catch (std::exception& e)
	{
		return (false);
	}
}

bool	ConvScal::isDouble(){
	try{
		std::stod(this->_value);
		int i = 0;
		while (this->_value.c_str()[i])
		{
			while(this->_value[i] == '+' || this->_value[i] == '-')
				i++;
			if ((this->_value.c_str()[i] < '0' || this->_value.c_str()[i] > '9') && this->_value.c_str()[i] != '.')
			{
				if (this->_value.find("nan") == std::string::npos && this->_value.find("inf") == std::string::npos)
					return (false);
			}
			i++;
		}
		return (true);
	}
	catch (std::exception& e)
	{
		return (false);
	}
}

int		ConvScal::toInt(){
	return (std::stoi(this->_value));
}

float	ConvScal::toFloat(){
	return (std::stof(this->_value));
}

double	ConvScal::toDouble(){
	return (std::stod(this->_value));
}

char	ConvScal::toChar(){
	return (this->_value[1]);
}