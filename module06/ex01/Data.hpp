/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:37:25 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/13 20:04:41 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

class Data{

public:
	
	Data();
	Data(Data const &);
	virtual ~Data();

	Data&	operator=(Data const &rhs);

};

#endif