/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:49:28 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 18:23:44 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

public:

	Intern();
	Intern(Intern const &);
	virtual ~Intern();

	Intern&	operator=(Intern const &);

	Form*	makeForm(std::string formName, std::string formTarget);

	class UnknownFormException : public std::exception{
		virtual const char* what() const throw(){
			return ("I'm just an intern, I don't know this kind of form!");
		}
	};

private:

	typedef struct sKnownForm{
		std::string formName;
		Form* (*f)(std::string target);
	}tKnownForm;

};

#endif