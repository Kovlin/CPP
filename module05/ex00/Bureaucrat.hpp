/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:25:43 by rlinkov           #+#    #+#             */
/*   Updated: 2021/10/11 13:46:16 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat{

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &rhs);
	virtual ~Bureaucrat();

	Bureaucrat&	operator=(Bureaucrat const &rhs);

	std::string		getName() const;
	int				getGrade() const;
	void			improveGrade();
	void			decreaseGrade();

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Grade is too high!");
			}
	};

	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Grade is too low!");
			}
	};

protected:

	const std::string	name;
	int					grade;

private:

	static const int	_maxGrade;
	static const int	_minGrade;

};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif