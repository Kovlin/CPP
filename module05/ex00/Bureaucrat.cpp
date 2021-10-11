/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:27:32 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 13:46:24 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const int Bureaucrat::_maxGrade = 1;
const int Bureaucrat::_minGrade = 150;

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade){
	if (grade > Bureaucrat::_minGrade)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < Bureaucrat::_maxGrade)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs): name(rhs.getName()){
	this->grade = rhs.getGrade();
}

Bureaucrat::~Bureaucrat(){
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &rhs){
	this->grade = rhs.getGrade();
	return (*this);
}

std::string		Bureaucrat::getName() const{
	return (this->name);
}

int				Bureaucrat::getGrade() const{
	return (this->grade);
}

void			Bureaucrat::improveGrade(){
	if (this->grade > Bureaucrat::_maxGrade)
		this->grade--;
		else
			throw(Bureaucrat::GradeTooHighException());
}

void			Bureaucrat::decreaseGrade(){
		if (this->grade < Bureaucrat::_minGrade)
		this->grade++;
		else
			throw(Bureaucrat::GradeTooLowException());
		
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}