/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:05:29 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 12:54:58 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal("Dog"), _brain(nullptr) {
    std::cout << "Dog default constructor" << std::endl;
    // allocate memory for the brain
    this->_brain = new Brain();
    
}

//Destructor
Dog::~Dog() {
    std::cout << this->getType() << " destructor" << std::endl;
    delete this->_brain;
}

// deep copy constructor
Dog::Dog(const Dog& rhs) {
    std::cout << "Dog copy constructor" << std::endl;
    *this = rhs;
}

// Assignment operator
Dog& Dog::operator=(const Dog& rhs) {
    std::cout << "Dog assignment operator" << std::endl;
    if (this != &rhs) {
        this->type = rhs.type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}