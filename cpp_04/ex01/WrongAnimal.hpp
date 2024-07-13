/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:06:39 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/03 17:08:00 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};
#endif