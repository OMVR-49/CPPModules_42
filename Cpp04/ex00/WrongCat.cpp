/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:46:11 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/02 02:21:35 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	type = "Cat";
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) 
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) 
{
	std::cout << "WrongCat assignment operator" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow , Meow ! GRR GRR" << std::endl;
}
