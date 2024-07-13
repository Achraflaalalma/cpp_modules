/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:09:48 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/05 11:43:04 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inventory[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator=(const MateriaSource &other);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};