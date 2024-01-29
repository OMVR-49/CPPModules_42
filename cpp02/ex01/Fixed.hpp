/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:05 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/28 23:14:18 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream> 
#include<string>
#include <cmath>

class Fixed
{
	private:
		int raw;
		static const int fract;
	public:	
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed &operator = (const Fixed &rhs);
		// Fixed &operator<<(const Fixed &rhs);

		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);
#endif
