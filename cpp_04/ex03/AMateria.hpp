/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:42:04 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 14:32:12 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
       std::string type;
    public:
        // Constructors and destructors 
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();

        // copy constructor
        AMateria(const AMateria &other);
        // assignment operator
        AMateria &operator=(const AMateria &other);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};