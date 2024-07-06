/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:42:53 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:50:28 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie  *zombieArray;
    int     N = 5;

    if (ac != 1)
    {
        std::cout << "Usage: " << av[0] << std::endl;
        return (1);
    }
    zombieArray = zombieHorde(N, "Horde");
    for (int i = 0; i < N; ++i) {
        zombieArray[i].announce();
    }
    delete []zombieArray;
}