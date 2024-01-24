/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:33:35 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/24 23:50:28 by ojebbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string& name) : name(name){}

Zombie::~Zombie()
{
    std::cout << this->name << "get Destroyed" << std::endl;
}

void Zombie::setName(std::string& newName)
{
    this->name = newName;
}