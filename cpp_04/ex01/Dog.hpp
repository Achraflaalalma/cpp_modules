/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:47:55 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 09:40:14 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* _brain;
    public:
        Dog();
        ~Dog();

        Dog(const Dog& rhs);
        Dog& operator=(const Dog& rhs);
        void makeSound() const;
    
};
#endif