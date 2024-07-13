/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:23:33 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 10:01:40 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attakDamage;
    
public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    // Default constructor 
    ClapTrap();

    // Constructor 
    ClapTrap(std::string name);

    // Copy constructor
    ClapTrap(const ClapTrap& claptrap);

    // Assignment operator
    ClapTrap& operator=(const ClapTrap& claptrap);

    // Destructor
    ~ClapTrap();
};
#endif