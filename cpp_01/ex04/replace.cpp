/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/21 22:33:12 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replace_line(std::string &line, size_t found, std::string s2) {
    
    std::string tmp;

    tmp.reserve(line.length() + s2.length());
    tmp.append(line.begin(), line.begin() + found);
    tmp.append(s2);
    tmp.append(line.begin() + found + s2.length(), line.end());
    line = tmp;
}