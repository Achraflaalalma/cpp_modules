/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:52:33 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 14:52:59 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal() {
    std::cout << "Animal default constructor" << std::endl;
}

// Constructor
Animal::Animal(std::string type) : type(type) {
    std::cout << this->type << " constructor" << std::endl;
}

// Destructor
Animal::~Animal() {
    std::cout << this->type << " destructor" << std::endl;
}

// Copy constructor
Animal::Animal(const Animal& x) {
    std::cout << "Animal copy constructor" << std::endl;
    *this = x;
}

// Assignment operator
Animal& Animal::operator=(const Animal & x) {
    std::cout << "Animal assignment operator" << std::endl;
    if (this != &x) {
        this->type = x.type;
    }
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << this->type << " makes a sound" << std::endl;
}