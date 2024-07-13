/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:23:27 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/03 11:43:45 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("M.Ali");
    fragTrap.attack("Mike");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);
    fragTrap.highFivesGuys();
    return 0;
}
