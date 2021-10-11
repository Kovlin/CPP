/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:49:19 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 18:35:43 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	return ;
}
Intern::Intern(Intern const &){
	return ;
}
Intern::~Intern(){
	return ;
}

Intern&	Intern::operator=(Intern const &){
	return (*this);
}

Form* makeShrubberyForm(std::string target){
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

Form* makeRobotomForm(std::string target){
	std::cout << "Intern creates RobotomRequestForm" << std::endl;
	return (new RobotomRequestForm(target));
}

Form* makePresidentialForm(std::string target){
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string formName, std::string formTarget){
	const int nbKnownForm = 3;
	tKnownForm knownForm[nbKnownForm] = {
		{"SCF", &makeShrubberyForm},
		{"RRF", &makeRobotomForm},
		{"PPF", &makePresidentialForm}
	};

	for (int i = 0; i < nbKnownForm; i++)
	{
		if (knownForm[i].formName == formName)
			return (knownForm[i].f)(formTarget);
	}
	throw(UnknownFormException());
}