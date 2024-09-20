/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:08:53 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/19 09:18:35 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm(rhs), target(rhs.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this == &rhs)
        return *this;
    AForm::operator=(rhs);
    target = rhs.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!getIsSigned() || executor.getGrade() > getexecGrade())
        throw GradeTooLowException();
    std::cout << "Bzzzzzz" << std::endl;
    std::srand(static_cast<unsigned int>(std::time(0)));
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " robotomization failed" << std::endl;
}