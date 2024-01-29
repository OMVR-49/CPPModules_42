/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 05:31:08 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/29 03:47:51 by ojebbari         ###   ########.fr       */
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
