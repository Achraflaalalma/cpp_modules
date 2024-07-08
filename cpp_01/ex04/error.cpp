/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:57:15 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/08 16:56:55 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int     handle_error(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << RED << "Usage: " << av[0] << " filename s1 s2" << RESET << std::endl;
        return (0);
    }

    if (std::string(av[1]).empty() || std::string(av[2]).empty()) {
        std::cerr << RED << "Arguments cannot be empty" << RESET << std::endl;
        return (0);
    }
    return (1);
}