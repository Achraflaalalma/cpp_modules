/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:45:52 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/11 12:54:44 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* _brain;
public:
    Cat();
    ~Cat();

    Cat(const Cat& rhs);
    Cat& operator=(const Cat& rhs);
    void makeSound() const;
};
#endif