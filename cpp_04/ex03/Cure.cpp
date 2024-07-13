/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:40:47 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 15:11:43 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &other) : AMateria(other) {}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}