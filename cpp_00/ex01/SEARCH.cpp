#include "PhoneBook.hpp"

void display_table(PhoneBook &clients)
{
  std::string line;
  std::string space;

  std::cout << BLUE << "---------------------------------------------" << RESET << std::endl;
  std::cout << BLUE << "|     Index|First Name| Last Name|  Nickname|" << RESET << std::endl;
  std::cout << BLUE << "|----------|----------|----------|----------|" << RESET << std::endl;
  for (int i = 0; i < clients.entry; i++) {
    std::string fields[] = {clients.contacts[i].First_Name,
                            clients.contacts[i].Last_Name,
                            clients.contacts[i].Nickname};
    std::cout << "|         " << i << "|";      
    for (int j = 0; j < 3; j++) {
      if (fields[j].length() > 10)
        line = fields[j].substr(0, 9) + ".";
      else
        line = fields[j];
      std::cout << std::setw(10) << line << "|";
    }
    std::cout << std::endl;
}
std::cout << BLUE << "---------------------------------------------" << RESET << std::endl;
}

void not_in_range(PhoneBook &clients)
{
    std::cout << CLEAR_SCREEN;
    std::cout << RED << "Invalid" << RESET
              << " index -> not in range" << std::endl;
    display_table(clients);
}

void prompt_user_for_entry(PhoneBook &clients)
{
  int index;

  std::cout << "Choose " << BLUE << "Contact" << RESET << " to be displayed according to it\'s index" << std::endl;
  do {
      std::string input;
      std::getline(std::cin, input);
      if (input == "EXIT" || std::cin.eof())
        exit(EXIT_SUCCESS);
      if (input.length() == 1 && std::isdigit(input[0])) { 
        index = input[0] - '0';
        if (index >= 0 && index < PhoneBook::entry)
        {
          std::cout << CLEAR_SCREEN;
          std::cout << GREEN << "First Name     : " << RESET << clients.contacts[index].First_Name << std::endl;
          std::cout << GREEN << "Last_Name      : " << RESET << clients.contacts[index].Last_Name << std::endl;
          std::cout << GREEN << "Nickname       : " << RESET << clients.contacts[index].Nickname << std::endl;
          std::cout << GREEN << "PhoneNumber    : " << RESET << clients.contacts[index].PhoneNumber << std::endl;
          std::cout << GREEN << "Darkest Secret : " << RESET << clients.contacts[index].Darkest_Secret << std::endl;
          clients.print_menu();
          break;
        }
        else
          not_in_range(clients);
      }
      else
        not_in_range(clients);
  }while (true);
}


void PhoneBook::search_for_contact(PhoneBook &clients)
{
  if (!PhoneBook::entry) {
    clear_screen();
    std::cout << "No " << BLUE << "Contacts" << RESET << " have been added" << std::endl;
    clients.print_menu();
    return ;
  }
  else {
  clear_screen();
  display_table(clients);
  }
  prompt_user_for_entry(clients);
}