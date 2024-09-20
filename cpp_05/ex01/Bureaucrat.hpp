/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:18:30 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/01 19:21:40 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Form;
class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string   name, int grade);
        Bureaucrat(const Bureaucrat& rhs);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        ~Bureaucrat();

        const   std::string& getName() const;
        int     getGrade() const;

        void    incrementGrade();
        void    decrementGrade();


        void signForm(Form& rhs);

        // Custom exceptions
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
    };

 };
 std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);