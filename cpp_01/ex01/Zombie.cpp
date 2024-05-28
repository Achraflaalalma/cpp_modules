/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:33:34 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/12 18:12:23 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void) {
      std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string z_name) {
    this->name = z_name;
}

Zombie::~Zombie() {
    std::cout << name << " Has been destroyed" << std::endl;
}

void Zombie::set_Name(std::string name) {
    this->name = name;
}