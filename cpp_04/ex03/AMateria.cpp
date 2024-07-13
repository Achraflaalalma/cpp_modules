/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:25:32 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/05 11:57:54 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : type(type) {
    // std::cout << type << " materia created" << std::endl;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
    return type;
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other)
        type = other.type;
    return *this;
}

void AMateria::use(ICharacter& target) {
    (void)target;
    std::cout << "Using " << type << " materia" << std::endl;
}