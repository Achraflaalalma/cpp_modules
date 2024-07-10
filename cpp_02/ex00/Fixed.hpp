/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:19:58 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/09 09:39:36 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					fixed_point;
	static const int	fractionalBits = 8;

public:
	// default constructor
	Fixed();
	
	// copy constructor
	Fixed(const Fixed& rhs);

	// A copy assignment operator
	Fixed& operator=(const Fixed& rhs);

	//destructor
	~Fixed();
	
	// Getter and setter
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
#endif