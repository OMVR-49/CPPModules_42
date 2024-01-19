/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:33:35 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 00:39:34 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    this->name = "point";
}

Zombie::~Zombie()
{
    std::cout << this->name << "get Destroyed" << std::endl;
}

void Zombie::setName(std::string& newName)
{
    this->name = newName;
}