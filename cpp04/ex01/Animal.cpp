/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:01:41 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 20:44:32 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::~Animal() 
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal& copy) : type(copy.type)
{
	std::cout << "Animal Copy Constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal assignment operator" << std::endl;
	if (this != &obj) 
		this->type = obj.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
