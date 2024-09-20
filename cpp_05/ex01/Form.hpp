/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:18:42 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/01 19:21:58 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int execGrade;
public:
    Form();
    Form(std::string   name, bool isSigned, int signGrade, int execGrade);
    Form(const Form& rhs);
    Form& operator=(const Form& rhs);
    ~Form();

    std::string getName() const;
    bool getIsSigned() const;
    int getsignGrade() const;
    int getexecGrade() const;

    void beSigned(Bureaucrat& rhs);

    class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, Form& rhs);