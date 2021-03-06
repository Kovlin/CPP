/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:37:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/14 15:15:36 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

class Data{

public:
	
	Data();
	Data(int a, int b);
	Data(Data const &);
	virtual ~Data();

	Data&	operator=(Data const &rhs);

	int		getA() const;
	int		getB() const;

private:

	int _a;
	int _b;

};

#endif