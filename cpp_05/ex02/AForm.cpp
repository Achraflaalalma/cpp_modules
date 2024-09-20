/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:57:15 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/13 17:57:15 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm() : name("default"), isSigned(false), signGrade(1), execGrade(1) {}

AForm::~AForm() {}

AForm::AForm(std::string   name, bool isSigned, int signGrade, int execGrade) : 
            name(name),
            isSigned(isSigned),
            signGrade(signGrade),
            execGrade(execGrade) {
                if (signGrade < 1 || execGrade < 1)
                    throw AForm::GradeTooHighException();
                if (signGrade > 150 || execGrade > 150)
                    throw AForm::GradeTooLowException();
            }

AForm::AForm(const AForm& rhs) : 
            name(rhs.name),
            isSigned(rhs.isSigned),
            signGrade(rhs.signGrade),
            execGrade(rhs.execGrade) {}

AForm& AForm::operator=(const AForm& rhs) {
    if (this != &rhs) {
        this->isSigned = rhs.isSigned;
    }
    return *this;
}

std::string AForm::getName() const {
    return name;
}

bool AForm::getIsSigned() const {
    return isSigned;
}

int AForm::getsignGrade() const {
    return signGrade;
}

int AForm::getexecGrade() const {
    return execGrade;
}

void AForm::beSigned(Bureaucrat& rhs) {
    if (rhs.getGrade() > signGrade)
        throw AForm::GradeTooLowException();
    std::cout << rhs.getName() << " signed " << name << std::endl;
    isSigned = true;
}

void AForm::signAForm(Bureaucrat& rhs) {
    try {
        beSigned(rhs);
    } catch (std::exception& e) {
        std::cout << rhs.getName() << " couldn’t sign " << name << " because " << e.what() << std::endl;
    }
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& os, AForm& rhs) {
    os << "AForm: " << rhs.getName() << " is signed: " << rhs.getIsSigned() 
       << " requires sign grade: " << rhs.getsignGrade()
       << " requires exec grade: " << rhs.getexecGrade();
    return os;
}