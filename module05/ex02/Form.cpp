/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:14:06 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 16:39:58 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const int Form::_maxGrade = 1;
const int Form::_minGrade = 150;

Form::Form(): _name("UNKNOWN"), _signed(false), _gradeToSign(1), _gradeToExec(1){
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (gradeToSign > Form::_minGrade || gradeToExec > Form::_minGrade)
		throw (Form::GradeTooLowException());
	if (gradeToSign < Form::_maxGrade || gradeToExec < Form::_maxGrade)
		throw (Form::GradeTooHighException());
}

Form::Form(std::string target, std::string name, int gradeToSign, int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _target(target){
	if (gradeToSign > Form::_minGrade || gradeToExec > Form::_minGrade)
		throw (Form::GradeTooLowException());
	if (gradeToSign < Form::_maxGrade || gradeToExec < Form::_maxGrade)
		throw (Form::GradeTooHighException());
}

Form::Form(Form const &rhs): _name(rhs.getName()), _signed(rhs.getSign()), _gradeToSign(rhs.getGradeToSign()), _gradeToExec(rhs.getGradeToExec()), _target(rhs.getTarget()){
	return ;
}
Form::~Form(){
	return ;
}

Form&	Form::operator=(Form const &rhs){
	this->_signed = rhs.getSign();
	return (*this);
}

bool		Form::getSign() const{
	return (this->_signed);
}
void		Form::setSign(bool sign){
	this->_signed = sign;
}

int			Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int			Form::getGradeToExec() const{
	return (this->_gradeToExec);
}
std::string Form::getName() const{
	return (this->_name);
}

void		Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		this->_signed = true;	
}

void		Form::execute(Bureaucrat const &executor) const{
	if (!this->getSign())
		throw(Form::NotSignedException());
	if (executor.getGrade() > this->getGradeToExec())
		throw(Form::GradeTooLowException());
}

std::string			Form::getTarget() const{
	return (this->_target);
}

std::ostream&	operator<<(std::ostream &o, Form const &rhs){
	o << rhs.getName() << " is a form that can be signed by a bureaucrat ranked " << rhs.getGradeToSign() << " or above";
	o << " and that can be execute by a bureaucrat ranked " << rhs.getGradeToExec() << " or above.";
	if (rhs.getSign() == true)
		o << "It is already signed.";
	else
		o << " It is not already signed.";
	return (o);
}