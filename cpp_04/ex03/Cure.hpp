/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:40:30 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 14:39:41 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
    private:
        
    public:
        // Default constructor
        Cure();

        // Destructor
        ~Cure();
        
        // copy constructor
        Cure(const Cure &other);

        // assignment operator
        Cure &operator=(const Cure &other);

        AMateria* clone() const;

        using AMateria::use;
        void use(ICharacter& target);
};