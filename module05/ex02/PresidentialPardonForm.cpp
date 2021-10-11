/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:40:43 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 17:22:58 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form(){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, "PresidentialPardonForm", 25, 5){
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs): Form(rhs.getTarget(), rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToSign()){
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs){
	this->setSign(rhs.getSign());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	this->Form::execute(executor);
	std::cout << this->getTarget() << " was granted a presidential pardon by the great Zafod Beeblerox!" << std::endl;
}