/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:30:48 by ojebbari          #+#    #+#             */
/*   Updated: 2024/01/19 22:11:05 by ojebbari         ###   ########.fr       */
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
    std::cout << this->name << ": get Destroyed" << std::endl;
}

void Zombie::setName(std::string& newName)
{
    this->name = newName;
}

Zombie* newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    return (newZombie);
}