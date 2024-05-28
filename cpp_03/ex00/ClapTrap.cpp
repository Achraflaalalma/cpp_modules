/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:33:37 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/26 23:34:20 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor 
ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor 
ClapTrap::ClapTrap(std::string name) : name(name) {
    std::cout << "Constructor called" << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attakDamage = 0;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& claptrap) {
    std::cout << "Copy constructor called" << std::endl;
    *this = claptrap;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
    std::cout << "Assignment operator called" << std::endl;
    this->name = claptrap.name;
    this->hitPoints = claptrap.hitPoints;
    this->energyPoints = claptrap.energyPoints;
    this->attakDamage = claptrap.attakDamage;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

// Member functions
void ClapTrap::attack(const std::string& target) {
    if (this->energyPoints ==  0 || this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " has no points!" << std::endl;
    this->energyPoints--;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
    << this->attakDamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
     if (this->energyPoints ==  0 || this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " has no points!" << std::endl;
    this->energyPoints--;
    this->hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " repaired himself by " << amount << " points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->energyPoints ==  0)
        std::cout << "ClapTrap " << this->name << " has no points!" << std::endl;
    else if (this->hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
    
}


