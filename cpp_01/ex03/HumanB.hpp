/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:55:23 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 11:38:15 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon*     weapon;
public:
    HumanB(std::string h_name);
    ~HumanB();

    void attack(void);
    void setWeapon(Weapon &weapon);
};
#endif