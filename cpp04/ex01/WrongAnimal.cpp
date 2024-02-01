/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:48:01 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 13:55:40 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal")
{
	std::cout << "Animal Default Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "Animal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) 
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "Animal assignment operator" << std::endl;
	if (this != &obj) 
		this->type = obj.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
