/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:29:35 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/27 00:52:25 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

// class Solution {
// public:


//     int duplicate_checker(std::string dup, int c) {
//         for (int i = 0; dup[i]; ++i) {
//             if (c == dup[i])
//                 return true;
//         }
//         return false;
//     }

//     int lengthOfLongestSubstring(std::string s) {
//         std::string sub;
//         int        longest = 0;
//         int         j = 0;
//         int         prev_lenght = 0;

//         sub.push_back(s[0]);
//         for (int i = 1; s[i]; ++i) {
//             if (!duplicate_checker(sub, s[i]))
//                 prev_lenght++;
//             else {
//                 if (prev_lenght > longest)
//                    longest = prev_lenght;
//                 s.substr(j++), ;
//                 sub.clear();
//                 sub.push_back(s[i]);
//                 prev_lenght = 0;
                
//             }
//         }
//         std::cout << s << std::endl;
//         return longest;
//     }
// };
class Menu {
private:
    std::string name;
    double price;
    
public:
    Menu(std::string name, double price) : name(name), price(price) {
        std::cout << "Menu constructor called" << std::endl;
    }
    std::string getName() const { return name; }
    double getPrice() const { return price; }
}; 

class Drink : public Menu {
private:
    std::string type;

public:
    Drink(std::string name, double price, std::string type) : Menu(name, price), type(type) {}
    std::string getType() const { return type; }
};
int main() {
    Drink drink("Coke", 2.5, "Soda");
    Menu menu("Burger", 5.5);

    return 0;
}