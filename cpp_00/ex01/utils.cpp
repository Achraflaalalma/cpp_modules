/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:32:51 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/01 10:08:17 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

bool PhoneBook::all_alpha(const std::string &line) {
    for (size_t i = 0; i < line.length(); ++i) {
        if (!std::isalpha(line[i]) && line[i] != ' ')
            return false;
    }
    return true;
}

bool PhoneBook::all_digit(const std::string &line, int flag) {
    if (flag == 1) {
        if (!all_digit(line, 0) || line.length() != 10)
            return false;
    }
    else
        for (size_t i = 0; i < line.length(); ++i) {
            if (!std::isdigit(line[i]))
                return false;
    }
    return true;
}

void PhoneBook::print_menu(void)
{
  std::cout << "------------------ PHONE BOOK MENU ------------------" << std::endl;
  std::cout << RED << "1." << RESET << " Enter \"ADD\"    -> "
            << BLUE << "Add" << RESET <<" a new contact" << std::endl;
  std::cout << RED << "2." << RESET << " Enter \"SEARCH\" -> "
            << BLUE << "Search" << RESET << " a contact" << std::endl;
  std::cout << RED << "3." << RESET << " Enter \"EXIT\"   -> "
            << BLUE << "Exit" << RESET << " the program" << std::endl; 
  std::cout << "-----------------------------------------------------" << std::endl;
}

void    PhoneBook::clear_screen(void)
{
    std::cout << CLEAR_SCREEN;
}

void    PhoneBook::clear_input(void)
{
    std::cout << MOVE_CURSOR_UP << CLEAR_LINE;
}

PhoneBook::PhoneBook(void) {}
PhoneBook::~PhoneBook(void) {}

Contact::Contact(void) {}
Contact::~Contact(void) {}