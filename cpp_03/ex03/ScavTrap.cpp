/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 00:59:44 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 10:04:15 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attakDamage = 20;
    
}

// attack function
void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints ==  0 || this->hitPoints <= 0)
        std::cout << "ScavTrap " << this->name << " has no points!" << std::endl;
    this->energyPoints--;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
    << this->attakDamage << " points of damage!" << std::endl;
}
// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

// guardGate function
void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}