/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 23:40:09 by alaalalm          #+#    #+#             */
/*   Updated: 2024/09/20 12:21:44 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap {
private:
    // Default constructor
    ScavTrap();
public:
    // Constructor
    ScavTrap(std::string name);

    // Destructor
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};
#endif