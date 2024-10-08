/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:04:53 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/05 11:49:40 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name) : name(name) {
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

Character::Character(const Character &other) {
    name = other.name;
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i]->clone();
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; i++) {
            if (inventory[i])
                delete inventory[i];
            inventory[i] = other.inventory[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}


