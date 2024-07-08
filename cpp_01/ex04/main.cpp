/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:35:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/08 16:56:24 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char **av)
{

    if (!handle_error(ac, av))
        return (EXIT_FAILURE);
        
    std::string     filename = av[1];
    std::string     s1 = av[2], s2 = av[3], line;
    std::ifstream   inFile(filename);
    std::ofstream   outFile(filename + ".replace");

    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << RED << "Failed to open file" << RESET << std::endl;
        return (EXIT_FAILURE);
    }
    while (std::getline(inFile, line) && s1 != s2) {
            replace_if_found(line, s1, s2);
            if (inFile.eof())
                outFile << line;
            else
                outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
    return 0;
}