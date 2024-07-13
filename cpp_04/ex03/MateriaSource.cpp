/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:12:39 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/05 11:13:10 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (inventory[i])
            delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < 4; i++)
        inventory[i] = other.inventory[i]->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < 4; i++) {
            if (inventory[i])
                delete inventory[i];
            inventory[i] = other.inventory[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] && inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return NULL;
}