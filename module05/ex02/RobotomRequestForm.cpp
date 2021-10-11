/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomrequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:40:39 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 17:45:49 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomRequestForm.hpp"

RobotomRequestForm::RobotomRequestForm(): Form(){
	return ;
}

RobotomRequestForm::RobotomRequestForm(std::string target): Form(target, "RobotomRequestForm", 72, 45){
	return ;
}

RobotomRequestForm::RobotomRequestForm(RobotomRequestForm const &rhs): Form(rhs.getTarget(), rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToSign()){
	return ;
}

RobotomRequestForm::~RobotomRequestForm(){
	return ;
}

RobotomRequestForm& RobotomRequestForm::operator=(RobotomRequestForm const &rhs){
	this->setSign(rhs.getSign());
	return (*this);
}

void	RobotomRequestForm::execute(Bureaucrat const &executor) const{
	this->Form::execute(executor);

	srand(time(NULL));
	int randomValue =  rand() % 2;
	std::cout << "Crash!, Bang!, Doiiing!, Crac! Bunk!, Klon! Bing!, Chtonk!, Paf!" << std::endl;
	if (randomValue)
		std::cout << this->getTarget() << " has been successfully robotomized! ʘ‿ʘ" << std::endl;
	else
		std::cout << this->getTarget() << " has not been robotomized! ಠ_ಠ " << std::endl;
}