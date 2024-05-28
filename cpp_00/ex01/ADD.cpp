#include "PhoneBook.hpp"

void invalid_input(int &j, std::string &line)
{
  if (line.length() != 10 && j == 4)
    std::cout << RED << "Phone number must be 10 digits" << RESET << std::endl;
  else
    std::cout << RED <<"!Invalid input -> " << RESET
            << (j < 4 ? "alphabetic characters" : "digits")
            << " only" << std::endl;
}

void contact_added(PhoneBook &clients)
{ 
    if (PhoneBook::entry != 8)
        PhoneBook::entry++;
    std::cout << GREEN << "Contact has benn added" << RESET << std::endl;
    clients.print_menu();
}

void PhoneBook::add_contact(PhoneBook &clients, std::string line, int &i)
{
  std::string fields[] = {"first name", "last name", "darkest secret", "nickname", "phone number"};

  std::cin.ignore();
  for (int j = 0; j < 5; j++) {
    do {
        std::cout << BLUE << "Enter" << RESET << " your " << fields[j] << ": " << std::endl;
        std::getline(std::cin, line);
        if (line == "EXIT" || std::cin.eof())
          exit(EXIT_SUCCESS);
        if (line.length() != 0 && ((j < 4 && all_alpha(line)) || (j == 4 && all_digit(line, 1)))) {
          if (fields[j] == "first name")
            clients.contacts[i].First_Name = line;
          else if (fields[j] == "last name")
            clients.contacts[i].Last_Name = line;
          else if (fields[j] == "darkest secret")
            clients.contacts[i].Darkest_Secret = line;  
          else if (fields[j] == "nickname")
            clients.contacts[i].Nickname = line;
          else if (fields[j] == "phone number")
            clients.contacts[i].PhoneNumber = line;
          clear_screen();
          break;
        }
        clear_screen();
        invalid_input(j, line);
    }while (true);
    }
    contact_added(clients);
    i = (i + 1) % clients.MAX_CONTACTS;
}