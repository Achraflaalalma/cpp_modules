/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:20:51 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/11 15:18:20 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1][0])
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}