/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:05:14 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 13:33:03 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& obj) 
{
	std::cout << "Dog assignment operator" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOOF , WOOF ! GRRRRR" << std::endl;
}
