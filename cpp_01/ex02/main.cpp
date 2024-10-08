/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:35:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:51:45 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac != 1)
    {
        std::cout << "Usage: " << av[0] << std::endl;
        return (1);
    }
    std::string  str = "HI THIS IS BRAIN";
    std::string& stringREF = str;
    std::string* stringPTR;
    
    stringPTR = &str;
    std::cout << "Memory address of variable (str): " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "Value of variable (str): " << str << std::endl;
    std::cout << "Value held by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value held by stringREF: " << stringREF << std::endl;
}