/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:39:30 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 17:05:43 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form(){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, "ShrubberyCreationForm", 145, 137){
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs): Form(rhs.getTarget(), rhs.getName(), rhs.getGradeToSign(), rhs.getGradeToSign()){
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	this->setSign(rhs.getSign());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	this->Form::execute(executor);

	std::ofstream ofs(this->getTarget() + "_shrubbery");
	if (ofs.fail())
	{
		std::cerr << "Error while trying to create the file 'TargetName_shrubbery'" << std::endl;
		return ;
	}
	ofs << "........................................" << std::endl;
    ofs << ". .    .      .     #       .          ." << std::endl;
    ofs << ".        .         ###            .    ." << std::endl;
    ofs << ".      .   *#:. .:##*##:. .:#*  .      ." << std::endl;
    ofs << ".   .      . *####*###*####*  .        ." << std::endl;
    ofs << ".      *#:.    .:#*###*#:.    .:#*  .  ." << std::endl;
	ofs << ".         *#########*#########*        ." << std::endl;
    ofs << ".      *#:.  *####*###*####*  .:#*   . ." << std::endl;
    ofs << ". .  .  *#######*##*##*#######*        ." << std::endl;
    ofs << ".         .*##*#####*#####*##*     .   ." << std::endl;
   	ofs << ". .*#:. ....:##*###*###*###:.... .:#*  ." << std::endl;
    ofs << ".     *#######*##*#####*##*#######*  . ." << std::endl;
  	ofs << ". . .     *#####*#######*#####*    .   ." << std::endl;
    ofs << ".     .     *      000      *    .     ." << std::endl;
    ofs << ".          .   .   000     .        .  ." << std::endl;
	ofs << "..................O000O................." << std::endl;
	ofs.close();
}