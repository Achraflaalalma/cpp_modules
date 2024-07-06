/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:03:41 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 11:10:33 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name ) {
    
    Zombie *zombies;

    zombies = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        zombies[i].set_Name(name);
    }
    return zombies;
}