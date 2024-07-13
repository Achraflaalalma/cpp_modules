/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:08:34 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 09:21:58 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << this->type << " default constructor" << std::endl;
}

//Destructor
WrongCat::~WrongCat() {
    std::cout << this->type << " destructor" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}