/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:01 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 03:47:18 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed() : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) : raw(src.raw)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n) : raw(n << fract)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : raw((int)(roundf(f * (1 << fract))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->raw = rhs.getRawBits();
	return *this;
}

int Fixed::toInt( void ) const
{
	return raw >> fract;
}

float Fixed::toFloat( void ) const
{
	return (float(raw) / (1 << fract));
}

int Fixed::getRawBits() const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
	res.raw = raw * rhs.raw;
	return res;
}
Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed res;
	res.raw = raw / rhs.raw;
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

