/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:03 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 08:55:26 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <string>
#include <iostream>

class Fixed
{
	private:
		int raw;
		static const int fract;
	public:	
	// OCCF:	
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
	// Assigenement Operator:
		Fixed &operator = (const Fixed &rhs);
	// Getter & Setter:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	// to:
		int toInt( void ) const;
		float toFloat( void ) const;
	//comparison operators:
		bool operator > (const Fixed &rhs);
		bool operator < (const Fixed &rhs);
		bool operator >= (const Fixed &rhs);
		bool operator <= (const Fixed &rhs);
		bool operator == (const Fixed &rhs);
		bool operator != (const Fixed &rhs);
	//pre-increment operators:
		Fixed& operator++();
		Fixed& operator--();
	//post-increment operators:
		Fixed operator++(int);
		Fixed operator--(int);
	//arithmetic operators:
		Fixed operator+(const Fixed& rhs) const;
		Fixed operator-(const Fixed& rhs) const;
		Fixed operator*(const Fixed& rhs) const;
		Fixed operator/(const Fixed& rhs) const;
	//overloaded member functions:
		static Fixed& min (Fixed& d1, Fixed& d2);
		const static Fixed& min (const Fixed& d1, const Fixed& d2);
		static Fixed& max (Fixed& d1, Fixed& d2);
		const static Fixed& max (const Fixed& d1, const Fixed& d2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif