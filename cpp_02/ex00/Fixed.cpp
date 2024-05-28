/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:26:56 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/25 15:00:09 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& rhs) : fixed_point(rhs.fixed_point) {
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
    this->fixed_point = rhs.fixed_point;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}


// Getter and setter
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

void Fixed::setRawBits(int const raw) {
    this->fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;

}

// Destructor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

