/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:23:27 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 10:06:49 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Riko");
    ScavTrap scavtrap("Hari");
    
    claptrap.attack("Fury");
    claptrap.beRepaired(10);
    scavtrap.attack("target");
    scavtrap.guardGate();
    return 0;
}