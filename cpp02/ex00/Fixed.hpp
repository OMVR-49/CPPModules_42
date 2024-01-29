/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:16 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/28 23:14:18 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int raw;
		static const int fract = 8;
	public:	
	Fixed();
	Fixed(Fixed &src);
	Fixed &operator = (const Fixed &rhs);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif