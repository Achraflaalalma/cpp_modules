/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:25:04 by alaalalm          #+#    #+#             */
/*   Updated: 2024/09/20 17:58:11 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), signGrade(1), execGrade(1) {}

Form::~Form() {}

Form::Form(std::string   name, bool isSigned, int signGrade, int execGrade) : 
            name(name),
            isSigned(isSigned),
            signGrade(signGrade),
            execGrade(execGrade) {
                if (signGrade < 1 || execGrade < 1)
                    throw Form::GradeTooHighException();
                if (signGrade > 150 || execGrade > 150)
                    throw Form::GradeTooLowException();
            }

Form::Form(const Form& rhs) : 
            name(rhs.name),
            isSigned(rhs.isSigned),
            signGrade(rhs.signGrade),
            execGrade(rhs.execGrade) {}

Form& Form::operator=(const Form& rhs) {
    if (this != &rhs) {
        this->isSigned = rhs.isSigned;
    }
    return *this;
}

std::string Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getsignGrade() const {
    return signGrade;
}

int Form::getexecGrade() const {
    return execGrade;
}

void Form::beSigned(Bureaucrat& rhs) {
    if (rhs.getGrade() > signGrade)
        throw Form::GradeTooLowException();
    std::cout << rhs.getName() << " signed " << name << std::endl;
    isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}
std::ostream& operator<<(std::ostream& os, Form& rhs) {
    os << "Form: " << rhs.getName() << " is signed: " << rhs.getIsSigned() 
       << " requires sign grade: " << rhs.getsignGrade()
       << " requires exec grade: " << rhs.getexecGrade();
    return os;
}