/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:00:52 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 09:15:37 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal("Cat") {
    std::cout << this->type << " default constructor" << std::endl;
}

//Destructor
Cat::~Cat() {
    std::cout << this->type << " destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}