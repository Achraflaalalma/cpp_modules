/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:42:53 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 16:55:34 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie      *new_z;
    
    if (ac != 1)
    {
        std::cout << "Usage: " << av[0] << std::endl;
        return (1);
    }
    std::cout << "Allocated in Stack:" << std::endl; 
    randomChump("redx");
    std::cout << "==========================" << std::endl;
    std::cout << "Allocated in Heap:" << std::endl; 
    new_z = newZombie("bablil");
    new_z->announce();
    delete new_z;
}