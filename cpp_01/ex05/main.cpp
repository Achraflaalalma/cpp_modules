/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:51 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:26:08 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl        harl2_0;
    std::string prompt;

    if (ac != 1)
    {
        std::cout << RED << "Usage: " << RESET << av[0] << std::endl;
        return (1);
    }
    
    do {
        std::cout << BLUE << "Enter " << RESET << "level: " << std::endl;
        std::cin >> prompt;
        clear_input();
        clear_screen();
        harl2_0.complain(prompt);
    } while (prompt != "exit" && prompt != "EXIT");
}