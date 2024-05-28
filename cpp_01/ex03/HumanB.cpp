/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:43:54 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/19 21:27:20 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack() {
    if (!this->weapon && this->weapon->getType() == "")
        std::cout << this->name << " has no weapon to attack with" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB( std::string h_name ) : name(h_name) {
    this->weapon = NULL;
}

HumanB::~HumanB(){};

void HumanB::setWeapon(Weapon &h_weapon) {
    this->weapon = &h_weapon;
}