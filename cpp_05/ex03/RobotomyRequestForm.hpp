/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:08:17 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/14 10:14:19 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &rhs);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const &executor) const;
};