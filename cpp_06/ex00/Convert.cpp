/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:03:16 by alaalalm          #+#    #+#             */
/*   Updated: 2024/08/12 12:21:36 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include "ScalarConverter.hpp"


Convert::Convert() {
    int_overflow = false;
    double_overflow = false;
    float_overflow = false;
}

Convert::Convert(const Convert& other) {
    *this = other;
}

Convert& Convert::operator=(const Convert& other) {
    int_overflow = other.int_overflow;
    double_overflow = other.double_overflow;
    float_overflow = other.float_overflow;
    return *this;
}

Convert::~Convert() {}


// get type function

t_type Convert::getType(std::string s, Convert &converter)
{
    if (s == "nanf" || s == "-inff" || s == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << s << std::endl;
        std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
        exit(0);
    }
    if (s == "nan" || s == "-inf" || s == "+inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << s << "f" << std::endl;
        std::cout << "double: " << s << std::endl;
        exit(0);
    }
    if (converter.isChar(s))
        return CHAR;
    if (converter.isInt(s))
        return INT;
    if (converter.isFloat(s))
        return FLOAT;
    if (converter.isDouble(s))
        return DOUBLE;
    return UNKOWN;
}


// print functions

void Convert::printChar(char charValue) {
    if (std::isprint(charValue))
        std::cout << "char: '" << charValue << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void Convert::printInt(int intValue) {
    if (int_overflow)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << intValue << std::endl;
}

void Convert::printFloat(float floatValue) {
    if (float_overflow)
        std::cout << "float: impossible" << std::endl;
    else {
        std::cout << std::fixed << std::setprecision(1)
                  << "float: " << floatValue << "f" << std::endl;
    }
}

void Convert::printDouble(double doubleValue) {
    if (double_overflow)
        std::cout << "double: impossible" << std::endl;
    else {
        std::cout << std::fixed << std::setprecision(1)
                  << "double: " << doubleValue << std::endl;
    }
}


// check type functions

bool Convert::isInt(const std::string& s) {
    if (s.back() == 'f' || s.back() == 'F')
        return false;
    if (!std::isdigit(s[0]) && s[0] != '-' && s[0] != '+')
        return false;
    for (size_t i = 1; i < s.length(); i++) {
        if (!std::isdigit(s[i]))
            return false;
    }
    return true;
}

bool Convert::isFloat(const std::string& s) {
    bool hasDot = false;
    size_t pos;
    if (s.back() != 'f' && s.back() != 'F')
        return false;
    if ((s.find('.') == std::string::npos) || (((pos = s.find('.')) == 0) && s[pos + 1] == 'f'))
        return false;
    if (!std::isdigit(s[0]) && s[0] != '-' && s[0] != '+' && s[0] != '.')
        return false;
     if ((s[0] == '+' || s[0] == '-') && s[1] == '.')
        return false;
    for (size_t i =  s[0] == '-' || s[0] == '+' ? 1 : 0; i < s.length() - 1; i++) {
        if (!std::isdigit(s[i])) {
            if (s[i] == '.')  {
                if (hasDot)
                    return false;
                hasDot = true;
            }
            else
                return false;
            }
    }
    return true;
}

bool Convert::isDouble(const std::string& s) {
    bool hasDot = false;
    if (s.back() == 'f' || s.back() == 'F')
        return false;
    if (!std::isdigit(s[0]) && s[0] != '-' && s[0] != '+' && s[0] != '.')
        return false;
    if ((s[0] == '+' || s[0] == '-') && s[1] == '.')
        return false;
    for (size_t i =  s[0] == '-' || s[0] == '+' ? 1 : 0; i < s.length(); i++) {
        if (!std::isdigit(s[i])) {
            if (s[i] == '.')  {
                if (hasDot)
                    return false;
                hasDot = true;
            }
            else
                return false;
            }
    }
    return true;
}

bool Convert::isChar(const std::string& s) {
    return s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]);  
}

// convert functions

void Convert::convertInt(const std::string& s) {

    double value = strtod(s.c_str(), NULL);
    if (value > INT_MAX || value < INT_MIN)
        int_overflow = true;
    if (value > __FLT_MAX__ || value < -__FLT_MAX__)
        float_overflow = true;
    printChar(static_cast<char>(value));
    printInt(value);
    printFloat(static_cast<float>(value));
    std::stringstream ss(s);
    double dvalue;
    ss >> dvalue;
    if (ss.fail()) 
        double_overflow = true;
    printDouble(static_cast<double>(value));
}


void Convert::convertFloat(const std::string& s) {

    std::string input;
    if (s[s.length() - 2] == '.')
        input = s.substr(0, s.length() - 2);
    else
        input = s.substr(0, s.length() - 1);
    double value = strtod(input.c_str(), NULL);

    if (value > INT_MAX || value < INT_MIN)
        int_overflow = true;
    if (value > __FLT_MAX__ || value < -__FLT_MAX__)
        float_overflow = true;
    printChar(static_cast<char>(value));
    printInt(static_cast<int>(value));
    printFloat(value);

    std::istringstream ss(input);
    double dvalue;
    ss >> dvalue;
    if (ss.fail())
        double_overflow = true;
    printDouble(static_cast<double>(value));
}

void Convert::convertDouble(const std::string& s) {
    double value = strtod(s.c_str(), NULL);
    if (value > INT_MAX || value < INT_MIN)
        int_overflow = true;
    if (value > __FLT_MAX__ || value < -__FLT_MAX__)
        float_overflow = true;
    printInt(static_cast<int>(value));
    printFloat(static_cast<float>(value));
    printChar(static_cast<char>(value));

    std::stringstream ss(s);
    double dvalue;
    ss >> dvalue;
    if (ss.fail())
        double_overflow = true;
    printDouble(value);
}

void Convert::convertChar(const std::string& s) {
    char value = s[0];
    printChar(value);
    printInt(static_cast<int>(value));
    printFloat(static_cast<float>(value));
    printDouble(static_cast<double>(value));

}

void ScalarConverter::convert(const std::string& literal) {
    Convert conv;
    t_type type;

    convertFunc func[4] = {
        &Convert::convertInt,
        &Convert::convertFloat,
        &Convert::convertDouble,
        &Convert::convertChar
    };

    type = conv.getType(literal, conv);
    if (type == UNKOWN)
        std::cout << "Error: unknown type" << std::endl;
    else
        (conv.*func[type])(literal);
}