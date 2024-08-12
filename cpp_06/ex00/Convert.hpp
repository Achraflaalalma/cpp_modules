/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:02:30 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/11 16:02:09 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "ScalarConverter.hpp"
#include <iomanip> 


typedef enum e_type
{
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    UNKOWN
} t_type;


class Convert
{
    private:
        bool int_overflow;
        bool double_overflow;
        bool float_overflow;
    public:


        Convert();
        Convert(const Convert& other);
        Convert& operator=(const Convert& other);
        ~Convert();

        bool isInt(const std::string& s);
        bool isFloat(const std::string& s);
        bool isDouble(const std::string& s);
        bool isChar(const std::string& s);

        void printChar(char charValue);
        void printInt(int intValue);
        void printFloat(float floatValue);
        void printDouble(double doubleValue);

        // covert functions

        void convertInt(const std::string& s);
        void convertFloat(const std::string& s);
        void convertDouble(const std::string& s);
        void convertChar(const std::string& s);

        int myStoi(const std::string& s);
        float myStof(const std::string& s);
        double myStod(const std::string& s);

        t_type getType(std::string s, Convert &converter);
};
    typedef void (Convert::*convertFunc)(const std::string& s);