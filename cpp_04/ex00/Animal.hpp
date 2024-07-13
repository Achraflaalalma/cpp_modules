/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:41:38 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/13 08:31:01 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;

public:
    // Default constructor
    Animal();

    // Constructor
    Animal(std::string type);

    // Destructor
    virtual ~Animal();
    
    // Copy constructor
    Animal(const Animal& rhs);

    // Assignment operator
    Animal& operator=(const Animal & rhs);

    // Getter
    std::string getType() const;

    // Member function
    virtual void makeSound() const;
};
#endif