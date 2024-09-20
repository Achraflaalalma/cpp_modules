/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:58:49 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/01 19:44:45 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat b1("b1", 1);

        ShrubberyCreationForm s1("s1");
        s1.beSigned(b1);
        b1.executeForm(s1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b2("b2", 1);

        RobotomyRequestForm r1("r1");
        r1.beSigned(b2);
        b2.executeForm(r1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b3("b3", 1);

        PresidentialPardonForm p1("p1");
        p1.beSigned(b3);
        b3.executeForm(p1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
