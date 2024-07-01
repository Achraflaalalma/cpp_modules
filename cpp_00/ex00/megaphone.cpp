/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:04:56 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/01 09:05:08 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else {
    for (int i = 1; av[i]; i++) {
      for (int j = 0; av[i][j]; j++) {
        std::cout << (char) toupper(av[i][j]);
      }
    }
  }
  std::cout << std::endl;
  return (EXIT_SUCCESS);
}