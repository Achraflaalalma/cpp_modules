/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:33:34 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/01 12:09:43 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) {
      std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Default constructor
Zombie::Zombie() {
   std::cout << "Zombie has been created" << std::endl;
}

// Constructor with name parameter
Zombie::Zombie(std::string z_name) {
    this->name = z_name;
}

// Destructor
Zombie::~Zombie() {
    std::cout << name << " Has been destroyed" << std::endl;
}

// Set name
void Zombie::set_Name(std::string name) {
    this->name = name;
}