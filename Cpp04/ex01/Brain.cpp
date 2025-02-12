/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:52:08 by ojebbari          #+#    #+#             */
/*   Updated: 2024/02/01 22:43:04 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Braaaain Constructor" << std::endl;
}

Brain::~Brain() 
{
	std::cout << "Braaaain Destructor" << std::endl;
}

Brain::Brain(const Brain& copy) 
{
	std::cout << "Braaaain Copy Constructor" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& obj) 
{
	std::cout << "Braaaain Assignment Operator" << std::endl;
	if (this != &obj) 
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	return (*this);
}