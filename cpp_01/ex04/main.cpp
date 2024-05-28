/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:35:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/21 23:06:42 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << RED << "Usage: " << RESET << av[0] << " <filename>" << " <s1> <s2>" << std::endl;
        return (EXIT_FAILURE);
    }
    
    std::ifstream   inFile(av[1]);
    std::ofstream   outFile("tmp.txt");
    std::string     s1 = av[2], s2 = av[3], line;
    size_t          found;
    
    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << RED << "Failed to open file" << RESET << std::endl;
        return (EXIT_FAILURE);
    }
    while (std::getline(inFile, line)) {
        found = line.find(s1);
        if (found != std::string::npos)
            replace_line(line, found, s2);
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
    copy_to_NewFile(av[1]);
    return 0;
}