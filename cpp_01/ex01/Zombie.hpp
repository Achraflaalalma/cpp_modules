/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:49:05 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/12 18:21:18 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    void announce(void);
    
    // Default constructor
    Zombie(){}
    
    // Constructor with name parameter
    Zombie(std::string z_name);

    // Destructor
    ~Zombie();

    // Set name
    void set_Name(std::string name);
};

Zombie  *zombieHorde( int N, std::string name );

#endif