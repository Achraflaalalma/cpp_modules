/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:16:50 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/14 09:50:18 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);
    ~ShrubberyCreationForm();

    void execute(const Bureaucrat& executor) const;
};