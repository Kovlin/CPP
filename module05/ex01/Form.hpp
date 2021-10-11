/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:14:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 15:11:14 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:

	Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(Form const &rhs);
	virtual ~Form();

	Form&	operator=(Form const &rhs);

	bool		getSign() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	std::string getName() const;
	void		beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception{
		virtual const char * what() const throw(){
			return ("Grade too high!");
		}
	};

	class GradeTooLowException : public std::exception{
		virtual const char * what() const throw(){
			return ("Grade too low!");
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;

	static const int	_maxGrade;
	static const int	_minGrade;

};

std::ostream&	operator<<(std::ostream &o, Form const &rhs);

#endif