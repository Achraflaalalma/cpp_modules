/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:32:51 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/20 16:18:16 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    
    Harl        harl2_0;
    std::string prompt;

    if (ac != 2) {
        std::cout << RED << "Invalid -> " << RESET << " arguments" << std::endl;
        return (EXIT_FAILURE);
    }
    harl2_0.complain(av[1]);
    return (EXIT_SUCCESS);   
}