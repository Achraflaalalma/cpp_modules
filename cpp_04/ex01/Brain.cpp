/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:52:39 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 11:54:23 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Default constructor
Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

// Destructor
Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

// Copy constructor
Brain::Brain(const Brain& rhs) {
    std::cout << "Brain copy constructor" << std::endl;
    *this = rhs;
}

// Assignment operator
Brain& Brain::operator=(const Brain& rhs) {
    std::cout << "Brain assignment operator" << std::endl;
    if (this != &rhs) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return *this;
}