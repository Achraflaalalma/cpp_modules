/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:20:31 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 11:30:39 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string param) {
    this->type = param;
}

const std::string& Weapon::getType() {
    return type;
}

Weapon::Weapon(std::string param) {
    this->setType(param);
}

Weapon::~Weapon(){}