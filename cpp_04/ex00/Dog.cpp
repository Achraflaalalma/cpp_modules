/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:05:29 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 09:15:28 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default constructor
Dog::Dog() : Animal("Dog") {
    std::cout << this->type << " default constructor" << std::endl;
}

//Destructor
Dog::~Dog() {
    std::cout << this->type << " destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}