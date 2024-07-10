/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:26:56 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/09 11:45:05 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : fixed_point(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor with an integer argument
Fixed::Fixed(const int integer) : fixed_point(integer << fractionalBits) {
    std::cout << "Int Constructor called" << std::endl;
}

// Constructor with a float argument
Fixed::Fixed(float number) : fixed_point(roundf(number * (1 << fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& rhs) : fixed_point(rhs.fixed_point) {
    std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
    this->fixed_point = rhs.fixed_point;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

// Conversion functions
float Fixed::toFloat(void) const {
    return (float)fixed_point / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
    return fixed_point >> fractionalBits;
}
// Destructor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

// Getter
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

// Setter
void Fixed::setRawBits(int const raw) {
    this->fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;

}

// Overloading the << operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
    return os;
}