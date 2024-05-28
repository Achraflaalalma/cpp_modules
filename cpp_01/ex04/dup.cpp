/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:45 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/21 22:33:57 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void    copy_to_NewFile(std::string filename) {
    
    std::ofstream   outFile(filename);
    std::ifstream   inFile("tmp.txt");
    std::string     line;

    if (outFile.fail() || inFile.fail()) {
        std::cerr << RED << "Failed to open file" << RESET << std::endl;
        exit (EXIT_FAILURE);
    }
    while (std::getline(inFile, line)) {
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
}