/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:59:32 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/04 10:56:28 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];
    public:
    Brain();
    ~Brain();
    Brain(const Brain& x);
    Brain& operator=(const Brain & x);
};
#endif