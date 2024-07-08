/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:31:49 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/08 09:29:25 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]"
              << std::endl
              << "I love having extra bacon for my " 
              << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" 
              << std::endl
              << "I cannot believe adding extra bacon costs more money. " 
              << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
              << std::endl;
    
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" 
              << std::endl
              << "I think I deserve to have some extra bacon for free. " 
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
    
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" 
              << std::endl 
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
    
}

void Harl::complain(std::string level) {
    
    ComplaintHandler handler[] = { &Harl::debug,
                                            &Harl::info,
                                            &Harl::warning,
                                            &Harl::error};
    std::string param[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (int i = 0; i < 4; ++i) {
        if (level == param[i])
            index = i;
    }
    
    if (index == -1) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return;
    }
  
    switch (index) {
        case 0:
            (this->*handler[0])();
        case 1:
            (this->*handler[1])();
        case 2:
            (this->*handler[2])();
        case 3:
            (this->*handler[3])();
    }  
}

Harl::Harl(){}
Harl::~Harl(){}