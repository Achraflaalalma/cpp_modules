/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:31:59 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/06 15:07:51 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cctype> 

#define CLEAR_LINE      "\033[K"
#define CLEAR_SCREEN    "\033[2J\033[H"
#define MOVE_CURSOR_UP  "\033[A"
#define RED             "\033[1;31m"
#define BLUE            "\033[1;34m"
#define RESET           "\033[0m"

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

typedef void (Harl::*ComplaintHandler)(void);
void    clear_screen(void);
void    clear_input(void);
#endif