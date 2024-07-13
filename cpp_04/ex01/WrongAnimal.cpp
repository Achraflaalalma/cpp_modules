/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:07:24 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 12:32:23 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << this->type << " default constructor" << std::endl;
}

// Parameterized constructor
WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << this->type << " parameterized constructor" << std::endl;
}

//Destructor
WrongAnimal::~WrongAnimal() {
    std::cout << this->type << " destructor" << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
}
// assignment operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

// Getters
std::string WrongAnimal::getType() const {
    return this->type;
}

// Member function
void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}