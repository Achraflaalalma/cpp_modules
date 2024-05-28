/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:13:41 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/19 19:11:01 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    // setters
    void setType(std::string param);

    //getters
    std::string &getType(void);

    // Default constructor
    Weapon(void){};
    
    // Constructor
    Weapon(std::string param);

    // destrucor
    ~Weapon();
};
#endif