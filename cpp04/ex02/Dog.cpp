/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:05:14 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 22:48:21 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_Brain = new Brain();
	type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog Destructor" << std::endl;
	delete _Brain;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->_Brain = new Brain(*copy._Brain);
	this->type = copy.type;
}

Dog& Dog::operator=(const Dog& obj) 
{
	std::cout << "Dog assignment operator" << std::endl;
	if (this != &obj)
	{
		*_Brain = *obj._Brain;
		this->type = obj.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOOF , WOOF ! GRRRRR" << std::endl;
}
