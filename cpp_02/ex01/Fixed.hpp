/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:19:58 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/09 10:16:24 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					fixed_point;
	static const int	fractionalBits = 8;

public:
	// default constructor
	Fixed();

	// constructor with int parameter
	Fixed(const int integer);
	
	// constructor with float parameter
	Fixed(float number);
	
	// copy constructor
	Fixed(const Fixed& rhs);

	// A copy assignment operator
	Fixed& operator=(const Fixed& rhs);

	//destructor
	~Fixed();
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif