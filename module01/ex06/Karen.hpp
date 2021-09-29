/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 20:54:15 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/29 22:21:05 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class Karen {

public:

	Karen(void);
	~Karen(void);
	
	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	/**
	 * Structure servant à faire correspondre
	 * le level à la bonne fonction membre pointée
	**/
	typedef struct cmdLst {
		std::string level;
		void (Karen::*f)(void);
	}cmdLst;
	cmdLst	cmd[4];
};

#endif