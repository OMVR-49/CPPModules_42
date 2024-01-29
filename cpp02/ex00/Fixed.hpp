/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:16 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 08:35:21 by ojebbari         ###   ########.fr       */
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
		static const int fract;
	public:	
	// OCCF:
		Fixed();
		Fixed(Fixed &src);
		Fixed &operator = (const Fixed &rhs);
		~Fixed();
	// getter & setter:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};


#endif