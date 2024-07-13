/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:04:17 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 15:27:32 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        Character();
        Character(std::string const &name);
        ~Character();
        Character(const Character &other);
        Character &operator=(const Character &other);
        
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};