/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:54:47 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/19 10:50:43 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& rhs) {
    *this = rhs;
}

Intern& Intern::operator=(const Intern& rhs) {
    (void)rhs;
    return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string formNames[3] = {"Shrubbery request", "Robotomy request", "Presidential request"};
    int index = -1;
    AForm *form = NULL;

    for (int i = 0; i < 3; i++)
    {
        if (name == formNames[i])
            index = i;
    }
    
    switch (index)
    {
    case 0:
        std::cout << "Intern created " << name << std::endl;
        try {
            form = new ShrubberyCreationForm(target);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        break;
    case 1:
        std::cout << "Intern creates " << name << std::endl;
        try {
            form = new RobotomyRequestForm(target);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        break;
    case 2:
        std::cout << "Intern creates " << name << std::endl;
        try {
            form = new PresidentialPardonForm(target);
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
        break;
    default:
        std::cerr << "Form name not found" << std::endl;
        break;
    }
    return form;
}