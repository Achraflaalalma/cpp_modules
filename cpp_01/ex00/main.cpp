/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:42:53 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/19 22:54:38 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main()
{
    Zombie      *new_z;
    
    std::cout << "Allocated in Stack:" << std::endl; 
    randomChump("redx");
    std::cout << "Allocated in Heap:" << std::endl; 
    new_z = newZombie("bablil");
    delete new_z;
}
