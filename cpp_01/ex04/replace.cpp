/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:33:00 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/08 09:23:41 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void replace_if_found(std::string &line, std::string s1, std::string s2) {
    
    std::string             tmp;
    size_t                  pos;
    
    pos = line.find(s1);
    while (pos != std::string::npos) {
        tmp = line.substr(0, pos);
        tmp += s2;
        tmp += line.substr(pos + s1.length());
        line = tmp;
        pos = line.find(s1, pos + s2.length());
    }
}