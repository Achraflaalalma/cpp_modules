/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:13:41 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/01 12:59:33 by alaalalm         ###   ########.fr       */
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
    // Constructor
    Weapon(std::string param);

    // destrucor
    ~Weapon();
    
    // setter
    void setType(std::string param);

    //getter
    const std::string& getType(void);

};
#endif