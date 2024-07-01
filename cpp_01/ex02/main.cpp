/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:35:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/01 12:12:49 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
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