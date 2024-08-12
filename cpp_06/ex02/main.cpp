/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:29:28 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/12 12:58:47 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>

Base* generate(void) {
    srand(static_cast<unsigned>(time(0))); 
    int randNum = rand() % 3;

    switch (randNum) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
        default: return nullptr;
    }
}

void identify(Base* p)
{
   Base* Base = dynamic_cast<A*>(p);
    if (Base != nullptr) {
        std::cout << "A" << std::endl;
        return;
    }
    Base = dynamic_cast<B*>(p);
    if (Base != nullptr) {
        std::cout << "B" << std::endl;
        return;
    }
    Base = dynamic_cast<C*>(p);
    if (Base != nullptr) {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (std::exception& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch (std::exception& e) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main()
{
    Base* base = generate();
    identify(base);
    identify(*base);
    delete base;
    return 0;
}