#include "PhoneBook.hpp"

int PhoneBook::entry = 0;
int main(int ac, char **av)
{
  PhoneBook   clients;
  std::string line;
  int         i;

  (void)av;
  if (ac != 1)
    return (std::cerr << RED <<"Too many arguments\n" << RESET, false);
  i = 0;
  clients.print_menu();
  while (std::getline(std::cin, line) && line != "EXIT")
  {
      clients.clear_input();
      clients.clear_screen();
      if (line == "ADD")
        clients.add_contact(clients, line, i);
      else if (line == "SEARCH")
        clients.search_for_contact(clients);
      else
        clients.print_menu();
  }
  clients.clear_input();
}