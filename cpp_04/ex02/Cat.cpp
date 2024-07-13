/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:00:52 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 12:54:17 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal("Cat"), _brain(nullptr) {
    std::cout << this->type << " default constructor" << std::endl;
    // allocate memory for the brain
    this->_brain = new Brain();
}

//Destructor
Cat::~Cat() {
    std::cout << this->type << " destructor" << std::endl;
    delete this->_brain;
}

// deep copy constructor
Cat::Cat(const Cat& rhs) {
    std::cout << "Cat copy constructor" << std::endl;
    *this = rhs;
}

// Assignment operator
Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Cat assignment operator" << std::endl;
    if (this != &rhs) {
        this->type = rhs.type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}
