/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:36:50 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 10:47:50 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attakDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high fives" << std::endl;
}