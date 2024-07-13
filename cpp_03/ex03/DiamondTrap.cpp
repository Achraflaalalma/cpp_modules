/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:04:42 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/03 12:08:31 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attakDamage = FragTrap::attakDamage;
    std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " is destroyed" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}