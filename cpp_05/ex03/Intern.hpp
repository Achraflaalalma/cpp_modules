/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:48:26 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/19 10:44:18 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& rhs);
        Intern& operator=(const Intern& rhs);
        ~Intern();

        AForm* makeForm(std::string name, std::string target);
};
