/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:23:27 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/26 23:34:07 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap  claptrap1("Riko");
    ClapTrap  claptrap2("Hari");

    claptrap1.attack("Hari");
    claptrap2.takeDamage(5);
    claptrap1.beRepaired(5);
    claptrap2.attack("Riko");
    claptrap1.takeDamage(5);
    claptrap2.beRepaired(5);
}