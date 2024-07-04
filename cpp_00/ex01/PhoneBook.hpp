#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

#define RED             "\033[1;31m"
#define BLUE            "\033[1;34m"
#define RESET           "\033[0m"
#define GREEN           "\033[1;32m"
#define CLEAR_LINE      "\033[K"
#define CLEAR_SCREEN    "\033[2J\033[H"
#define MOVE_CURSOR_UP  "\033[A"


class PhoneBook {
private:
    
public:
    static const int MAX_CONTACTS = 8;
    static int entry;
    Contact contacts[MAX_CONTACTS];
    void        add_contact(PhoneBook &clients, std::string line, int &i);
    void        search_for_contact(PhoneBook &clients);
    void        print_menu(void);
    PhoneBook(void);
    ~PhoneBook(void);
};
    bool        all_alpha(const std::string &line);
    bool        all_digit(const std::string &line, int flag);
    void        clear_screen(void);
    void        clear_input(void);
#endif