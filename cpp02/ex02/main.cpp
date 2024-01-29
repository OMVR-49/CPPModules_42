/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:27:01 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 08:41:10 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( c );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	// Fixed a(5);
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed s(2.5f);

	// std::cout << "a = " << a << std::endl;
	// std::cout << "s = " << s << std::endl;
	// std::cout << "a + s = " << a + s << std::endl;
	// std::cout << "a - s = " << a - s <<std::endl;
	// std::cout << "a * s = " << a * s<<std::endl;
	// std::cout << "a / s = " << a / s <<std::endl;
	// std::cout << "b = " << b << std::endl;
	// std::cout << "static member function max used , the max between a and b is : " << Fixed::max(a, b)  << std::endl;
	// std::cout << "non static member function max used , the max between b and s is : " << a.max(b, s)  << std::endl;
	// std::cout << "static member function min used , the min between a and s is : " << Fixed::min(a, s)  << std::endl;
	// std::cout << "non static member function min used , the min between a and b is : " << a.min(a, b) << std::endl;
	// std::cout << "a++ = " << a++ << std::endl;
	// std::cout << "a = " << a << std::endl;
	// std::cout << "++s = " << ++s << std::endl;
	// std::cout << "s = " << s << std::endl;
	// if (s != a)
	// 	std::cout << "s and a are different" << std::endl;
	return 0;
}
