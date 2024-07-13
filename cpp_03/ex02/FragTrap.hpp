/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:35:40 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 10:41:59 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP 
  
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif