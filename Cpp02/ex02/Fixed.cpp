/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:01 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 08:44:55 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed() : raw(0){}

Fixed::Fixed(const Fixed &src) : raw(src.raw){}

Fixed::Fixed(const int n) : raw(n << fract){}

Fixed::Fixed(const float f) : raw((int)(roundf(f * (1 << fract)))){}

Fixed::~Fixed(){}

Fixed &Fixed::operator = (const Fixed &rhs)
{
	if (this != &rhs)
		this->raw = rhs.getRawBits();
	return *this;
}

int Fixed::toInt( void ) const
{
	return ((int)(raw >> fract));
}

float Fixed::toFloat( void ) const
{
	return ((float)(raw) / (1 << fract));
}

int Fixed::getRawBits() const 
{
	return this->raw;
}

void Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

 //arithmetic operators:
 
Fixed Fixed::operator+(const Fixed& rhs) const
{
	Fixed res;
	res.raw = raw + rhs.raw;
	return res;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
	Fixed res;
	res.raw = raw - rhs.raw;
	return res;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
	Fixed res;
	res.raw = (raw * rhs.raw) / (1 << fract);
	return res;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed res;
	res.raw = (raw / rhs.raw) * (1 << fract);
	return res;
}

//comparison operators:

bool Fixed::operator>(const Fixed &rhs)
{
	return (getRawBits() > rhs.getRawBits());
}
bool Fixed::operator>=(const Fixed &rhs)
{
	return (getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator<=(const Fixed &rhs)
{
	return (getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator<(const Fixed &rhs)
{
	return (getRawBits() < rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs)
{
	return (getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs)
{
	return (getRawBits() != rhs.getRawBits());
}


//incremet/decrement operators:

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	raw++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	raw--;
	return (tmp);
}

Fixed &Fixed::operator++()
{
	++raw;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--raw;
	return (*this);
}


Fixed &Fixed::min (Fixed& d1, Fixed& d2)
{
	return (d1 < d2) ? d1 : d2;
}

Fixed &Fixed::max (Fixed& d1, Fixed& d2)
{
	return (d1 > d2) ? d1 : d2;
}

const Fixed &Fixed::min (const Fixed& d1, const Fixed& d2)
{
	return (d1.getRawBits() < d2.getRawBits()) ? d1 : d2;
}

const Fixed &Fixed::max (const Fixed& d1,const Fixed& d2)
{
	return (d1.getRawBits() > d2.getRawBits()) ? d1 : d2;
}

