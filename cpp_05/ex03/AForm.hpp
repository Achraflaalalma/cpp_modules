/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:17:32 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/19 10:44:56 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
	const		std::string name;
	bool		isSigned;
	const int	signGrade;
	const int	execGrade;
public:
	AForm();
	AForm(std::string   name, bool isSigned, int signGrade, int execGrade);
	AForm(const AForm& rhs);
	AForm& operator=(const AForm& rhs);
	virtual ~AForm();

	std::string getName() const;
	bool getIsSigned() const;
	int getsignGrade() const;
	int getexecGrade() const;

	void beSigned(Bureaucrat& rhs);
	void signAForm(Bureaucrat& rhs);

	virtual void    execute(const Bureaucrat& executor ) const = 0;

	// Exeception classes
	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, AForm& rhs);