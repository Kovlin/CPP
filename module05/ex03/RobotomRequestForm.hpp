/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:40:37 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 17:07:27 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMREQUESTFORM_H
#define ROBOTOMREQUESTFORM_H

#include "Form.hpp"
#include <time.h>
#include <stdlib.h>

class RobotomRequestForm : public Form {

public:

	RobotomRequestForm();
	RobotomRequestForm(std::string target);
	RobotomRequestForm(RobotomRequestForm const &rhs);
	virtual ~RobotomRequestForm();

	RobotomRequestForm& operator=(RobotomRequestForm const &rhs);

	virtual void	execute(Bureaucrat const &executor) const;

};

#endif