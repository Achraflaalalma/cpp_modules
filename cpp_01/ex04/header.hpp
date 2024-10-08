/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 23:14:28 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 19:19:29 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <fstream>

#define RED "\033[31m"
#define RESET "\033[0m"

int     handle_error(int ac, char **av);
void    replace_if_found(std::string &line, std::string s1, std::string s2);

#endif