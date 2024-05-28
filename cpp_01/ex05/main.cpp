/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:51 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/20 15:37:05 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl        harl2_0;
    std::string prompt;

    do {
        std::cout << BLUE << "Enter " << RESET << "level: " << std::endl;
        std::cin >> prompt;
        clear_input();
        clear_screen();
        harl2_0.complain(prompt);
    } while (prompt != "exit" && prompt != "EXIT");
}