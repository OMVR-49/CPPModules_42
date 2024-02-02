/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:05:24 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/02 01:35:22 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
	_Brain = new Brain();
	type = "Cat";
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::~Cat() 
{
	std::cout << "Cat Destructor" << std::endl;
	delete _Brain;
}

Cat::Cat(const Cat& copy) 
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& obj) 
{
	std::cout << "Cat assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_Brain = new Brain(*obj._Brain);
		this->type = obj.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow , Meow ! GRR GRR" << std::endl;
}
