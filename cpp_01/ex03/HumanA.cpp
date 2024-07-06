/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:41:59 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 12:44:37 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string h_name, Weapon& h_weapon) : name(h_name), weapon(h_weapon) {}

HumanA::~HumanA(){};

void HumanA::attack() {
std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}