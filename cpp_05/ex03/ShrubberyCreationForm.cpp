/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:18:59 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/14 10:31:19 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", false, 145, 137), target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm(rhs) {
    this->target = rhs.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
    if (this != &rhs) {
        this->target = rhs.target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned() || executor.getGrade() > getexecGrade())
        throw AForm::GradeTooLowException();
    std::ofstream inFile(target + "_shrubbery");
    if (inFile.is_open()) {
            inFile << "                 #\n";
            inFile << "                ###\n";
            inFile << "               #####\n";
            inFile << "              #######\n";
            inFile << "             #########\n";
            inFile << "            ###########\n";
            inFile << "           #############\n";
            inFile << "          ###############\n";
            inFile << "         #################\n";
            inFile << "        ###################\n";
            inFile << "       #####################\n";
            inFile << "      #######################\n";
            inFile << "     #########################\n";
            inFile << "    ###########################\n";
            inFile << "   #############################\n";
            inFile << "  ###############################\n";
            inFile << " ###############################\n";
            inFile << "###############################\n";
            inFile << "              |||\n";
            inFile << "              |||\n";
            inFile << "              |||\n";
            inFile << "             =====\n";
    inFile.close();
    }
}