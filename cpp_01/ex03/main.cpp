/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:35:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:53:12 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(int ac, char **av)
{
    if (ac != 1)
    {
        std::cout << "Usage: " << av[0] << std::endl;
        return (1);
    }
    {
        Weapon club = Weapon("wooden bow");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("crossbow");
        bob.attack();
    }
    {
        Weapon club = Weapon("longsword");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("greatsword");
        jim.attack();
    }
}