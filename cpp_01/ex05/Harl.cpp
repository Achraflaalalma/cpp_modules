/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:31:49 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:24:50 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my " 
              << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. " 
              << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
    
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. " 
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
    
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    
}

void Harl::complain(std::string level) {
    
    ComplaintHandler handler[] = { &Harl::debug,
                                          &Harl::info,
                                          &Harl::warning,
                                          &Harl::error};
                                          
    std::string param[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (int i = 0; i < 4; i++)
    {
        if (param[i] == level)
        {
            (this->*handler[i])();
            return ;
        }
    }
    if (index == -1)
    {
        std::cout << RED << "Unknown complaint level" << RESET << std::endl;
        return;
    }
}

Harl::Harl(){}
Harl::~Harl(){}

void    clear_screen(void)
{
    std::cout << CLEAR_SCREEN;
}

void    clear_input(void)
{
    std::cout << MOVE_CURSOR_UP << CLEAR_LINE;
}