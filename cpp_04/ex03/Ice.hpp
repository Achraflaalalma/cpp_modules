/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:37:48 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 14:39:51 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    private:
        
    public:
        // Default constructor
        Ice();

        // Destructor
        ~Ice();

        // copy constructor
        Ice(const Ice &other);

        // assignment operator
        Ice &operator=(const Ice &other);

        AMateria* clone() const;

        using AMateria::use;
        void use(ICharacter& target);
};

