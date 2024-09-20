/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:58:49 by alaalalm          #+#    #+#             */
/*   Updated: 2024/09/20 17:58:17 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try {
        Bureaucrat  b("B", 1);
        Form        f("F", false, 0, 1);
        b.signForm(f);
        std::cout << b << std::endl;
        std::cout << f;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}