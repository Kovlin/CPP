/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:59:11 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/15 21:14:07 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array{

public:

	Array<T>(): _array(new T[0]), _size(0){};

	Array<T>(unsigned int n): _array(new T[n]()), _size(static_cast<size_t>(n)){
	}

	virtual ~Array<T>(){
		delete [] this->_array;
	}

	Array<T>(Array<T> const & rhs){
		this->_array = new T[rhs.size()];
		for (size_t i = 0; i < rhs.size(); i++)
		{
			this->_array[i] = rhs._array[i];
		}
		this->_size = rhs.size();
	}
	
	Array<T>&	operator=(Array<T> const & rhs){
		delete [] this->_array;
		this->_array = new T[rhs.size()];
		for (size_t i = 0; i < rhs.size(); i++)
		{
			this->_array[i] = rhs._array[i];
		}
		this->_size = rhs.size();
	}

	T&			operator[](size_t index){
		if (index < 0 || index >= this->_size)
			throw(ExceptionNotInArrayLimits());
		return this->_array[index];
	}

	size_t	size() const{
		return this->_size;
	}

	class ExceptionNotInArrayLimits : public std::exception{
		virtual const char* what() const throw(){
			return ("Out of the array limits");
		}
	};

private:

	T*		_array;
	size_t	_size;

};

#endif