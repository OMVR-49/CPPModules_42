/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:03 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 03:39:31 by ojebbari         ###   ########.fr       */
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
        //constructors/destructor:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
        //to:
        int toInt( void ) const;
		float toFloat( void ) const;
		//encap:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
        Fixed &operator = (const Fixed &rhs);
        
        //overloaded member functions:
        static Fixed& min (Fixed& d1, Fixed& d2);
        const static Fixed& min (const Fixed& d1, const Fixed& d2);
        static Fixed& max (Fixed& d1, Fixed& d2);
        const static Fixed& max (const Fixed& d1, const Fixed& d2);
        //incremet/decrement operators:
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        //arithmetic operators:
        Fixed operator+(const Fixed& rhs) const;
        Fixed operator-(const Fixed& rhs) const;
        Fixed operator*(const Fixed& rhs) const;
        Fixed operator/(const Fixed& rhs) const;
        //comparison operators:
        bool operator > (const Fixed &rhs);
        bool operator < (const Fixed &rhs);
        bool operator >= (const Fixed &rhs);
        bool operator <= (const Fixed &rhs);
        bool operator == (const Fixed &rhs);
        bool operator != (const Fixed &rhs);
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif