/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:14:14 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 16:35:59 by rlinkov          ###   ########.fr       */
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
	Form(std::string target, std::string name, int gradeToSign, int gradeToExec);
	Form(Form const &rhs);
	virtual ~Form();

	Form&	operator=(Form const &rhs);

	bool				getSign() const;
	void				setSign(bool sign);
	int					getGradeToSign() const;
	int					getGradeToExec() const;
	std::string			getName() const;
	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const = 0;
	std::string			getTarget() const;

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

	class NotSignedException : public std::exception{
		virtual const char* what() const throw(){
			return ("This form is not signed!");
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExec;
	const std::string	_target;

	static const int	_maxGrade;
	static const int	_minGrade;

};

std::ostream&	operator<<(std::ostream &o, Form const &rhs);

#endif